
@interface SBWaitForSceneLayoutTransitionTransaction : SBTransaction <SBLayoutStateTransitionObserver> {
    SBLayoutStateTransitionCoordinator * _transitionCoordinator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_begin;
- (void)dealloc;
- (id)initWithSceneLayoutTransitionCoordinator:(id)arg1;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;

@end
