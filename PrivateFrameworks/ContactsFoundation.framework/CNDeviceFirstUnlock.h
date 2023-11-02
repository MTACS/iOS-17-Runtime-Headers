
@interface CNDeviceFirstUnlock : NSObject {
    CNFuture * _firstUnlockFuture;
    CNUnfairLock * _handlersLock;
    NSMutableDictionary * _unlockHandlers;
    NSOperationQueue * _workQueue;
}

@property (nonatomic, retain) CNFuture *firstUnlockFuture;
@property (nonatomic, retain) CNUnfairLock *handlersLock;
@property (nonatomic, readonly) bool isUnlockedSinceBoot;
@property (nonatomic, retain) NSMutableDictionary *unlockHandlers;
@property (nonatomic, retain) NSOperationQueue *workQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addUnlockHandlerWithIdentifier:(id)arg1 block:(id /* block */)arg2;
- (long long)countOfUnlockHandlers;
- (void)dealloc;
- (id)firstUnlockFuture;
- (id)handlersLock;
- (id)init;
- (bool)isUnlockedSinceBoot;
- (void)removeUnlockHandlerWithIdentifier:(id)arg1;
- (void)setFirstUnlockFuture:(id)arg1;
- (void)setHandlersLock:(id)arg1;
- (void)setUnlockHandlers:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)unlockHandlers;
- (void)waitForAllOperationsToFinish;
- (void)withHandlersLock_addHandlerWithIdentifier:(id)arg1 block:(id /* block */)arg2;
- (void)withHandlersLock_cancelExistingOperationWithIdentifier:(id)arg1;
- (void)withHandlersLock_registerForDeviceFirstUnlock;
- (id)workQueue;

@end
