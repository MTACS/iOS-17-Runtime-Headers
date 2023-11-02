
@interface termAssertionObserver : NSObject <RBSTerminationAssertionObserving> {
    NSObject<OS_dispatch_semaphore> * _completionSem;
}

@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *completionSem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)assertionTargetProcessDidExit:(id)arg1;
- (id)completionSem;
- (void)setCompletionSem:(id)arg1;

@end
