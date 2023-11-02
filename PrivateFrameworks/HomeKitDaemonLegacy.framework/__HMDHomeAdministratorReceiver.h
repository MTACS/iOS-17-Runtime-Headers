
@interface __HMDHomeAdministratorReceiver : HMFObject <HMFLogging, HMFMessageReceiver> {
    HMDHomeAdministratorHandler * _handler;
    <HMFMessageReceiver> * _receiver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMDHomeAdministratorHandler *handler;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) <HMFMessageReceiver> *receiver;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)__handleXPCMessage:(id)arg1;
- (void)dealloc;
- (id)handler;
- (id)initWithReceiver:(id)arg1 handler:(id)arg2;
- (id)logIdentifier;
- (id)messageTargetUUID;
- (id)receiver;
- (void)registerForMessage:(id)arg1 policies:(id)arg2;
- (id)shortDescription;

@end
