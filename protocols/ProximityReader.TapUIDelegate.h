
@protocol ProximityReader.TapUIDelegate

@required

- (void)reportGuidanceUpdateWithVisible:(bool)arg1 trigger:(NSString *)arg2;
- (void)reportProxEventInRange:(bool)arg1;
- (void)storeUILanguageForAnalyticsWithLanguage:(NSString *)arg1;
- (void)tapUIDidLoad;
- (void)tapUIFinishedWithExpected:(bool)arg1;
- (void)tapUIRequestingCancel;
- (void)tapUIRequestingRetry;

@end
