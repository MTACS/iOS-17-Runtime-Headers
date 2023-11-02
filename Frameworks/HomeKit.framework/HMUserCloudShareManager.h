
@interface HMUserCloudShareManager : NSObject <HMFMessageReceiver> {
    NSArray * _containerIDs;
    _HMContext * _context;
    <HMUserCloudShareManagerDataSource> * _dataSource;
    <HMUserCloudShareManagerDelegate> * _delegate;
    NSUUID * _identifier;
    bool  _registered;
}

@property (nonatomic, retain) NSArray *containerIDs;
@property (nonatomic, readonly) _HMContext *context;
@property <HMUserCloudShareManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property <HMUserCloudShareManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (getter=isRegistered, nonatomic) bool registered;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)__registerForMessages;
- (void)_handleDidReceiveRepairRequest:(id)arg1;
- (void)_handleDidReceiveShare:(id)arg1;
- (void)_registerWithCompletion:(id /* block */)arg1;
- (void)_unconfigure;
- (void)configure;
- (id)containerIDs;
- (id)context;
- (id)dataSource;
- (id)delegate;
- (id)identifier;
- (id)initWithDataSource:(id)arg1;
- (id)initWithDataSource:(id)arg1 context:(id)arg2;
- (bool)isRegistered;
- (id)messageDestination;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (void)reconnect;
- (void)registerForContainerIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)setContainerIDs:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRegistered:(bool)arg1;

@end
