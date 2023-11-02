
@interface SBMainWorkspaceTransaction : SBWorkspaceTransaction

@property (nonatomic, readonly) SBMainWorkspaceTransitionRequest *transitionRequest;

- (void)_didComplete;
- (id)initWithTransitionRequest:(id)arg1;

@end
