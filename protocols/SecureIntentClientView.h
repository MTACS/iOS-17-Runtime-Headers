
@protocol SecureIntentClientView <NSObject>

@required

+ (UIView<SecureIntentClientView> *)instance;

- (BKMesaSecureIntentProvider *)secureIntentProvider;
- (void)setSecureIntentProvider:(BKMesaSecureIntentProvider *)arg1;
- (void)showInitialUI;
- (void)showRetryOnErrorUI;

@optional

+ (UIView<SecureIntentClientView> *)instanceForDemo:(bool)arg1;

@end
