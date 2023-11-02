
@interface SBUIWorkspaceAnimationController : SBUIAnimationController

@property (nonatomic, readonly) SBWorkspaceTransitionRequest *workspaceTransitionRequest;

- (id)initWithTransitionContextProvider:(id)arg1;
- (id)initWithWorkspaceTransitionRequest:(id)arg1;
- (id)workspaceTransitionRequest;

@end
