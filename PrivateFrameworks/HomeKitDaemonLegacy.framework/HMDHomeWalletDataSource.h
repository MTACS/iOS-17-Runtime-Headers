
@interface HMDHomeWalletDataSource : HMFObject <HMDHomeWalletDataSource> {
    int  _passCodeChangeNotificationToken;
}

@property (readonly) long long accessoryWriteMaxRetryCount;
@property (readonly) double accessoryWriteRetryInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isWatch;
@property int passCodeChangeNotificationToken;
@property (getter=isResidentCapable, readonly) bool residentCapable;
@property (readonly) Class superclass;
@property (readonly) long long walletKeyColor;

- (long long)accessoryWriteMaxRetryCount;
- (double)accessoryWriteRetryInterval;
- (void)canNotifyAboutExpressModeWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)init;
- (bool)isResidentCapable;
- (bool)isWatch;
- (id)numberValueFromNoBackupStoreWithKey:(id)arg1;
- (int)passCodeChangeNotificationToken;
- (void)persistNumberValueToNoBackupStore:(id)arg1 withKey:(id)arg2;
- (bool)registerForPasscodeChangeNotificationWithQueue:(id)arg1 callback:(id /* block */)arg2;
- (void)setPassCodeChangeNotificationToken:(int)arg1;
- (void)showExpressEnabledUserNotificationForWalletKeyWithPassUniqueID:(id)arg1 completion:(id /* block */)arg2;
- (long long)walletKeyColor;

@end
