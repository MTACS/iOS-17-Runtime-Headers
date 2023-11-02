
@protocol HMDHomeWalletDataSource <NSObject>

@required

- (long long)accessoryWriteMaxRetryCount;
- (double)accessoryWriteRetryInterval;
- (void)canNotifyAboutExpressModeWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)isResidentCapable;
- (bool)isWatch;
- (NSNumber *)numberValueFromNoBackupStoreWithKey:(NSString *)arg1;
- (void)persistNumberValueToNoBackupStore:(NSNumber *)arg1 withKey:(NSString *)arg2;
- (bool)registerForPasscodeChangeNotificationWithQueue:(void *)arg1 callback:(void *)arg2; // needs 2 arg types, found 6: NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)showExpressEnabledUserNotificationForWalletKeyWithPassUniqueID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (long long)walletKeyColor;

@end
