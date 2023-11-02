
@protocol AFSettingsDelegate <NSObject>

@optional

- (void)_settingsConnectionDidDisconnect;
- (void)_settingsConnectionPartialVerificationResult:(NSDictionary *)arg1;
- (void)_settingsConnectionServerVerificationReport:(NSDictionary *)arg1;

@end
