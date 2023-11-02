
@interface AMSMediaInvokeAuthenticationCoordinator : NSObject {
    AMSPromise * _inflightAuthPromise;
    NSMutableArray * _invokeAuthQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _queueLock;
}

@property (nonatomic, retain) AMSPromise *inflightAuthPromise;
@property (nonatomic, readonly) NSMutableArray *invokeAuthQueue;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } queueLock;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_finishQueueWithAuthResult:(id)arg1 queuedObjects:(id)arg2;
- (id)addToQueueAndPerformAuthFromResponseIfNeeded:(id)arg1 taskInfo:(id)arg2;
- (id)inflightAuthPromise;
- (id)init;
- (id)invokeAuthQueue;
- (id)performAuthFromResponse:(id)arg1 taskInfo:(id)arg2;
- (struct os_unfair_lock_s { unsigned int x1; })queueLock;
- (void)setInflightAuthPromise:(id)arg1;
- (void)updateQueueIfNeeded;

@end
