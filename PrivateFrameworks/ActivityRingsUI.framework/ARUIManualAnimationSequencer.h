
@interface ARUIManualAnimationSequencer : NSObject <ARUIAnimationSequencing> {
    bool  _animating;
    id /* block */  _completion;
    ARUIObserverStore * _observers;
    double  _timeUntilCompletion;
}

@property (getter=isAnimating, nonatomic, readonly) bool animating;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)init;
- (bool)isAnimating;
- (void)performAfter:(double)arg1 completion:(id /* block */)arg2;
- (void)removeObserver:(id)arg1;
- (void)tick;

@end
