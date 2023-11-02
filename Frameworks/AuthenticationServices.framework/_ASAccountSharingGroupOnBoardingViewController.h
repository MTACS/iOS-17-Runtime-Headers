
@interface _ASAccountSharingGroupOnBoardingViewController : OBWelcomeController {
    unsigned long long  _contentType;
    <_ASAccountSharingGroupOnBoardingViewControllerDelegate> * _delegate;
    KCSharingGroup * _group;
}

@property (nonatomic, readonly) unsigned long long contentType;
@property (nonatomic) <_ASAccountSharingGroupOnBoardingViewControllerDelegate> *delegate;
@property (nonatomic, readonly) KCSharingGroup *group;

- (void).cxx_destruct;
- (void)_addButtons;
- (void)_cancelButtonSelected;
- (void)_configureCancelButton;
- (void)_configureNotNowButton;
- (void)_continueButtonSelected;
- (void)_notNowButtonSelected;
- (unsigned long long)contentType;
- (id)delegate;
- (id)group;
- (id)initWithContentType:(unsigned long long)arg1 group:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;

@end
