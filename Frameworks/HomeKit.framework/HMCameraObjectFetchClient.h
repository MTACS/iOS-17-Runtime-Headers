
@interface HMCameraObjectFetchClient : HMFObject <HMFLogging, HMFMessageReceiver> {
    NSUUID * _UUID;
    Class  _classForUnarchiving;
    _HMContext * _context;
    HMFMessageDestination * _destination;
    NSMutableArray * _fetchedObjects;
    NSString * _messageName;
    NSDictionary * _payload;
}

@property (readonly, copy) NSUUID *UUID;
@property (retain) Class classForUnarchiving;
@property (readonly) _HMContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) HMFMessageDestination *destination;
@property (readonly) NSMutableArray *fetchedObjects;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *messageName;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (copy) NSDictionary *payload;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)UUID;
- (Class)classForUnarchiving;
- (id)context;
- (void)dealloc;
- (id)destination;
- (void)fetchWithCompletion:(id /* block */)arg1;
- (id)fetchedObjects;
- (void)handleDidFetchObjectsMessage:(id)arg1;
- (id)initWithUUID:(id)arg1 context:(id)arg2 messageName:(id)arg3 destination:(id)arg4;
- (id)logIdentifier;
- (id)messageName;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)payload;
- (void)setClassForUnarchiving:(Class)arg1;
- (void)setPayload:(id)arg1;

@end
