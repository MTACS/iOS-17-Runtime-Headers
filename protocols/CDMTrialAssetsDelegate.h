
@protocol CDMTrialAssetsDelegate <NSObject>

@required

- (void)assetsAvailable;
- (void)assetsAvailableForLocale:(NSLocale *)arg1;
- (void)assetsUnavailable;

@end
