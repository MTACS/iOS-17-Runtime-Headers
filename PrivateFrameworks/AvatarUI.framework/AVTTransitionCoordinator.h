
@interface AVTTransitionCoordinator : NSObject {
    double  _delay;
    NSMutableArray * _pendingTransitions;
    NSMutableArray * _runningTransitions;
    <AVTTransitionScheduler> * _scheduler;
}

@property (nonatomic, readonly) double delay;
@property (nonatomic, readonly) NSMutableArray *pendingTransitions;
@property (nonatomic, readonly) NSMutableArray *runningTransitions;
@property (nonatomic, retain) <AVTTransitionScheduler> *scheduler;

+ (id)concurrentTransitionCoordinatorWithDelay:(double)arg1;
+ (id /* block */)eventHandlerForCoordinator:(id)arg1;
+ (id)synchronousTransitionCoordinator;

- (void).cxx_destruct;
- (void)addTransition:(id)arg1;
- (id)allTransitions;
- (void)cancelAllTransitions;
- (void)cancelTransitionsMatchingModel:(id)arg1;
- (void)dealloc;
- (double)delay;
- (void)didCompleteRunningTransition:(id)arg1;
- (id)init;
- (id)pendingTransitions;
- (id)runningTransitions;
- (id)scheduler;
- (void)setScheduler:(id)arg1;
- (void)startNextTransition;
- (id)transitionsMatchingModel:(id)arg1;

@end
