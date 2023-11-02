
@protocol SUUISettingsEditTransactionDelegate <NSObject>

@required

- (void)settingsEditTransactionDidCompleteTransaction:(SUUISettingsEditTransaction *)arg1;
- (void)settingsEditTransactionDidFailTransaction:(SUUISettingsEditTransaction *)arg1;
- (void)settingsEditTransactionWillBeginTransaction:(SUUISettingsEditTransaction *)arg1;
- (void)settingsEditTransactionWillCommitTransaction:(SUUISettingsEditTransaction *)arg1;

@end
