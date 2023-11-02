
@interface HMDAccessoryProfile : HMFObject <HMDBulletinIdentifiers, HMDHomeMessageReceiver, HMFDumpState, HMFLogging, NSSecureCoding> {
    HMDAccessory * _accessory;
    NSString * _logIdentifier;
    HMFMessageDispatcher * _msgDispatcher;
    long long  _rateLimitCount;
    NSDate * _rateLimitStartTime;
    NSArray * _services;
    NSUUID * _uniqueIdentifier;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) HMDAccessory *accessory;
@property (nonatomic, readonly, copy) NSString *contextID;
@property (nonatomic, readonly, copy) NSUUID *contextSPIUniqueIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *logIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, readonly) NSArray *services;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (bool)hasMessageReceiverChildren;
+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessory;
- (void)configureWithMessageDispatcher:(id)arg1 configurationTracker:(id)arg2;
- (id)contextID;
- (id)contextSPIUniqueIdentifier;
- (id)description;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (id)findServiceWithType:(id)arg1;
- (void)handleInitialState;
- (unsigned long long)hash;
- (id)initWithAccessory:(id)arg1 uniqueIdentifier:(id)arg2 services:(id)arg3;
- (id)initWithAccessory:(id)arg1 uniqueIdentifier:(id)arg2 services:(id)arg3 workQueue:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)logIdentifier;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (bool)rateLimit:(double)arg1 threshold:(long long)arg2;
- (void)registerForMessages;
- (void)removeCloudData;
- (id)runtimeState;
- (id)services;
- (void)unconfigure;
- (id)uniqueIdentifier;
- (id)workQueue;

@end
