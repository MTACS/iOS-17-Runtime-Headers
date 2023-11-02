
@protocol SBSceneLayoutWorkspaceTransactionDelegate <NSObject>

@required

- (SBApplicationSceneEntity *)createSceneEntityForHandle:(SBApplicationSceneHandle *)arg1;
- (void)transaction:(void *)arg1 didEndLayoutTransitionWithContinuation:(void *)arg2; // needs 2 arg types, found 8: SBSceneLayoutWorkspaceTransaction *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SBWorkspaceApplicationSceneTransitionContext *, unsigned long long, void*
- (void)transaction:(void *)arg1 performTransitionWithCompletion:(void *)arg2; // needs 2 arg types, found 6: SBSceneLayoutWorkspaceTransaction *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)transactionWillBeginLayoutTransition:(SBSceneLayoutWorkspaceTransaction *)arg1;

@optional

- (bool)transaction:(SBSceneLayoutWorkspaceTransaction *)arg1 shouldKeepSceneForeground:(FBScene *)arg2 withReason:(id*)arg3;

@end
