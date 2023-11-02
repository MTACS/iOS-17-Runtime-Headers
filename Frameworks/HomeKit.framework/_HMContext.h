
@interface _HMContext : NSObject <HMFLogging> {
    HMDelegateCaller * _delegateCaller;
    HMFMessageDispatcher * _messageDispatcher;
    NSString * _name;
    HMPendingRequests * _pendingRequests;
    NSObject<OS_dispatch_queue> * _queue;
    HMXPCClient * _xpcClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) HMDelegateCaller *delegateCaller;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly, copy) NSString *name;
@property (nonatomic, readonly) HMPendingRequests *pendingRequests;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HMXPCClient *xpcClient;

+ (id)contextWithName:(id)arg1;
+ (id)contextWithName:(id)arg1 xpcClient:(id)arg2;
+ (id)contextWithName:(id)arg1 xpcClient:(id)arg2 delegateCaller:(id)arg3;
+ (id)logCategory;

- (void).cxx_destruct;
- (id)delegateCaller;
- (id)init;
- (id)initWithName:(id)arg1 pendingRequests:(id)arg2 delegateCaller:(id)arg3 messageDispatcher:(id)arg4 xpcClient:(id)arg5;
- (id)logIdentifier;
- (id)messageDispatcher;
- (id)name;
- (id)pendingRequests;
- (id)queue;
- (id)subcontextWithName:(id)arg1;
- (id)xpcClient;

@end
