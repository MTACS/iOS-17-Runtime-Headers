
@protocol ICQInternetPrivacyDetailDelegate <NSObject>

@required

- (void)presentIncompatibleSitesHelp;
- (void)presentLearnMoreFrom:(NSString *)arg1;
- (void)presentSystemStatus;
- (void)showAlert:(UIAlertController *)arg1;
- (void)statusDidChange;

@end
