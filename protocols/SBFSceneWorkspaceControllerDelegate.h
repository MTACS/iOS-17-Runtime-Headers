
@protocol SBFSceneWorkspaceControllerDelegate <FBSceneWorkspaceDelegate, FBSceneDelegate>

@required

- (void)setScene:(void *)arg1 shouldActivateUponClientConnection:(void *)arg2 withContextGenerator:(void *)arg3; // needs 3 arg types, found 7: FBScene *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, FBSSceneTransitionContext *, id /* block */, void*
- (void)setScene:(void *)arg1 shouldBeKeptActiveWhileForeground:(void *)arg2 withContextGenerator:(void *)arg3; // needs 3 arg types, found 7: FBScene *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, FBSSceneTransitionContext *, id /* block */, void*

@end
