
@interface VTUIEnrollmentSetupIntroViewController : OBWelcomeController {
    VTUIButton * _continueButton;
    <VTUISiriIntroViewControllerDelegate> * _delegate;
    bool  _includeHomePodInDisclosure;
    bool  _isPostUpgradeDisclosure;
    NSString * _languageCode;
    VTUIButton * _laterButton;
    bool  _showSiriConversations;
}

@property (nonatomic, readonly) VTUIButton *continueButton;
@property (nonatomic, readonly, copy) NSString *languageCode;
@property (nonatomic, readonly) VTUIButton *laterButton;

- (void).cxx_destruct;
- (void)_fadeInSubViews;
- (void)_setupContent;
- (id)continueButton;
- (id)initWithDelegate:(id)arg1;
- (id)languageCode;
- (id)laterButton;
- (void)viewDidLoad;

@end
