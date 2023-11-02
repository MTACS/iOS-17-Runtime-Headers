
@protocol FBUpdateSceneTransactionObserver <BSTransactionObserver>

@optional

- (void)updateSceneTransactionDidCommitUpdate:(FBUpdateSceneTransaction *)arg1;
- (void)updateSceneTransactionDidCreateScene:(FBUpdateSceneTransaction *)arg1;
- (void)updateSceneTransactionWillCommitUpdate:(FBUpdateSceneTransaction *)arg1;
- (void)updateSceneTransactionWillUpdateScene:(FBUpdateSceneTransaction *)arg1;

@end
