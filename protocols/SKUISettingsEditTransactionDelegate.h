
@protocol SKUISettingsEditTransactionDelegate <NSObject>

@required

- (void)settingsEditTransactionDidCompleteTransaction:(SKUISettingsEditTransaction *)arg1;
- (void)settingsEditTransactionDidFailTransaction:(SKUISettingsEditTransaction *)arg1;
- (void)settingsEditTransactionWillBeginTransaction:(SKUISettingsEditTransaction *)arg1;
- (void)settingsEditTransactionWillCommitTransaction:(SKUISettingsEditTransaction *)arg1;

@end
