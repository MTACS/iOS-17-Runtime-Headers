
@protocol APUIAppPredictionViewControllerDelegate <NSObject>

@optional

- (SBIcon *)appPredictionViewController:(APUIAppPredictionViewController *)arg1 iconForApplicationWithBundleIdentifier:(NSString *)arg2;
- (bool)appPredictionViewController:(APUIAppPredictionViewController *)arg1 shouldDisplayBadgeWithBundleIdentifier:(NSString *)arg2;

@end
