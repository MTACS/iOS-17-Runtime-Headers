
@interface HMFMessageDispatcher : HMFObject <HMFLogging, HMFMessageTransportDelegate, HMFTimerDelegate> {
    NSDictionary * _destinationHandlerIndexes;
    NSSet * _filterClasses;
    NSMutableOrderedSet * _handlers;
    HMFTimer * _indexWatchdog;
    bool  _indexed;
    struct hmf_unfair_data_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _lock;
    NSDictionary * _nameHandlerIndexes;
    bool  _shouldAutomaticallyIndex;
    HMFMessageTransport * _transport;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) NSSet *filterClasses;
@property (readonly) unsigned long long hash;
@property (getter=isIndexed, readonly) bool indexed;
@property (nonatomic) bool shouldAutomaticallyIndex;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HMFMessageTransport *transport;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)allMessagesForMessageNameTarget;
+ (id)logCategory;

- (void).cxx_destruct;
- (void)deregisterForMessage:(id)arg1 receiver:(id)arg2;
- (void)deregisterReceiver:(id)arg1;
- (void)dispatchMessage:(id)arg1;
- (void)dispatchMessage:(id)arg1 target:(id)arg2;
- (id)filterClasses;
- (id)handlersForMessage:(id)arg1;
- (void)index;
- (id)init;
- (id)initWithTransport:(id)arg1;
- (bool)isIndexed;
- (void)messageTransport:(id)arg1 didReceiveMessage:(id)arg2;
- (void)registerForMessage:(id)arg1 receiver:(id)arg2 messageHandler:(id /* block */)arg3;
- (void)registerForMessage:(id)arg1 receiver:(id)arg2 policies:(id)arg3 messageHandler:(id /* block */)arg4;
- (void)registerForMessage:(id)arg1 receiver:(id)arg2 policies:(id)arg3 selector:(SEL)arg4;
- (void)registerForMessage:(id)arg1 receiver:(id)arg2 selector:(SEL)arg3;
- (void)registerForMessage:(id)arg1 targetUUID:(id)arg2 receiver:(id)arg3 policies:(id)arg4 selector:(SEL)arg5;
- (void)sendMessage:(id)arg1;
- (void)sendMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)sendMessage:(id)arg1 target:(id)arg2;
- (void)sendMessage:(id)arg1 target:(id)arg2 andInvokeCompletionHandler:(id /* block */)arg3;
- (void)sendMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 responseHandler:(id /* block */)arg4;
- (void)sendMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 responseHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (id)sendMessageExpectingResponse:(id)arg1;
- (void)setFilterClasses:(id)arg1;
- (void)setShouldAutomaticallyIndex:(bool)arg1;
- (bool)shouldAutomaticallyIndex;
- (void)timerDidFire:(id)arg1;
- (id)transport;
- (id)workQueue;

@end
