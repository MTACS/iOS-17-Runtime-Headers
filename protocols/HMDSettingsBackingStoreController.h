
@protocol HMDSettingsBackingStoreController <NSObject>

@required

- (void)registerForSettingsTransactions:(id <HMDSettingTransactionReceiverProtocol>)arg1;
- (void)runSettingTransaction:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: <HMDSettingTransaction> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)runSettingTransaction:(void *)arg1 waitForCloudPush:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: <HMDSettingTransaction> *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (<HMDSettingTransaction> *)settingTransactionWithName:(NSString *)arg1;
- (void)start;

@end
