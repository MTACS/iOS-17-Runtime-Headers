
@interface TPSOperationQueue : NSOperationQueue {
    TPSOperationQueueCountObserver * _observer;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, retain) TPSOperationQueueCountObserver *observer;

- (void).cxx_destruct;
- (void)addOperationWithAsyncBlock:(id /* block */)arg1;
- (id /* block */)completionBlock;
- (id)observer;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setObserver:(id)arg1;

@end
