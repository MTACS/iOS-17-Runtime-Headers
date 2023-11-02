
@interface AAUIOBWelcomeController : OBWelcomeController {
    <AAUIOBWelcomeControllerDelegate> * _delegate;
    NSString * _helpLinkURL;
    OBTrayButton * _primaryButton;
    OBTrayButton * _secondaryButton;
}

@property (nonatomic) <AAUIOBWelcomeControllerDelegate> *delegate;
@property (nonatomic, retain) OBTrayButton *primaryButton;
@property (nonatomic, retain) OBTrayButton *secondaryButton;

- (void).cxx_destruct;
- (void)_addBulletedListItems:(id)arg1;
- (void)_addContentViewWithViewModel:(id)arg1;
- (void)_addHelpLinkButtonWithViewModel:(id)arg1;
- (void)_addPrimaryButtonWithViewModel:(id)arg1;
- (void)_addSecondaryButtonWithViewModel:(id)arg1;
- (void)_addSecondaryViewWithViewModel:(id)arg1;
- (void)_delegate_welcomeViewControllerDidCompleteWithSuccess:(bool)arg1 error:(id)arg2;
- (void)_openHelpLink;
- (id)delegate;
- (id)initWithViewModel:(id)arg1;
- (id)primaryButton;
- (id)secondaryButton;
- (void)setDelegate:(id)arg1;
- (void)setPrimaryButton:(id)arg1;
- (void)setSecondaryButton:(id)arg1;

@end
