
@interface SeymourUI.NotificationConsentViewController : UIViewController {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _fitnessPlusNotificationSettingsEnabled;
    void bodyLabel;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  contentAvailability;
    void contentView;
    void continueButton;
    void continueButtonHandler;
    void fallbackLocalizationBundle;
    void imageView;
    void platform;
    void scrollView;
    void storefrontLocalizer;
    void titleLabel;
}

- (void).cxx_destruct;
- (void)didTapContinueButton;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;

@end
