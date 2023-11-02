
@interface HMDXPCRequestTracker : HMFObject <HMFLogging, HMFTimerDelegate> {
    NSString * _clientName;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _pendingRequests;
    NSObject<OS_dispatch_queue> * _queue;
    HMFTimer * _timer;
}

@property (nonatomic, readonly, copy) NSString *clientName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *pendingRequests;
@property (readonly, copy) NSSet *requestIdentifiers;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)__sendResponseForRequest:(id)arg1 response:(id)arg2 error:(id)arg3;
- (void)addRequestWithIdentifier:(id)arg1 messageName:(id)arg2 qualityOfService:(long long)arg3 responseHandler:(id /* block */)arg4;
- (void)clear;
- (id)clientName;
- (bool)containsMessageWithIdentifier:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (id)pendingRequests;
- (void)removeRequestWithIdentifier:(id)arg1 response:(id)arg2 error:(id)arg3;
- (id)requestIdentifiers;
- (void)setClientName:(id)arg1;
- (void)timerDidFire:(id)arg1;

@end
