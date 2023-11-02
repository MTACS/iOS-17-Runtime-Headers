
@interface SBLayoutStateTransitionContext : NSObject {
    bool  _animationsDisabled;
    SBWorkspaceApplicationSceneTransitionContext * _applicationTransitionContext;
    bool  _complete;
    NSError * _error;
    SBLayoutState * _fromLayoutState;
    SBLayoutState * _toLayoutState;
    SBWorkspaceTransaction * _workspaceTransaction;
}

@property (nonatomic, readonly) bool animationsDisabled;
@property (nonatomic, readonly) SBWorkspaceApplicationSceneTransitionContext *applicationTransitionContext;
@property (getter=isComplete, nonatomic, readonly) bool complete;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) SBLayoutState *fromLayoutState;
@property (getter=isInterrupted, nonatomic, readonly) bool interrupted;
@property (nonatomic, readonly) SBLayoutState *toLayoutState;
@property (nonatomic, readonly) SBWorkspaceTransaction *workspaceTransaction;

- (void).cxx_destruct;
- (bool)animationsDisabled;
- (id)applicationTransitionContext;
- (id)error;
- (id)fromLayoutState;
- (id)init;
- (id)initWithWorkspaceTransaction:(id)arg1;
- (bool)isComplete;
- (bool)isInterrupted;
- (id)toLayoutState;
- (void)transitionCompletedWithError:(id)arg1;
- (id)workspaceTransaction;

@end
