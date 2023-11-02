
@protocol PNPWizardViewDelegate <NSObject>

@required

- (UIColor *)backgroundColorForWizardController:(PNPWizardViewController *)arg1;
- (bool)shouldShowWhatsNewController;
- (void)wizardViewRequestsDismiss:(PNPWizardViewController *)arg1;

@end
