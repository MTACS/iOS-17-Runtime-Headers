
@interface HUCameraRecordingPrivacyTextViewController : UIViewController {
    UITextView * _consentTextView;
    UILabel * _headerLabel;
}

@property (nonatomic, retain) UITextView *consentTextView;
@property (nonatomic, retain) UILabel *headerLabel;

- (void).cxx_destruct;
- (void)_addConstraints;
- (id)consentTextView;
- (id)headerLabel;
- (void)setConsentTextView:(id)arg1;
- (void)setHeaderLabel:(id)arg1;
- (void)viewDidLoad;

@end
