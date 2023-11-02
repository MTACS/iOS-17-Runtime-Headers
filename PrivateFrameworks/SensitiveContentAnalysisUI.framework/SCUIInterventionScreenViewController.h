
@interface SCUIInterventionScreenViewController : OBWelcomeController {
    SCUIInterventionViewController * _container;
    long long  _contentScreen;
    long long  _options;
}

@property (nonatomic) SCUIInterventionViewController *container;
@property (nonatomic, readonly) long long contentScreen;
@property (nonatomic, readonly) long long options;

- (void).cxx_destruct;
- (void)addBulletsFromModel:(id)arg1;
- (void)addButtonsFromModel:(id)arg1;
- (id)container;
- (long long)contentScreen;
- (id)initWithContainer:(id)arg1 contentScreen:(long long)arg2 options:(long long)arg3;
- (id)nextScreenWithContainer:(id)arg1;
- (long long)options;
- (void)screenOne_acceptButtonPressed;
- (void)screenOne_moreHelpButtonDefaultImplementation;
- (void)screenOne_moreHelpButtonPressed;
- (void)screenOne_notNowButtonPressed;
- (void)screenTwo_acceptButtonPressed;
- (void)screenTwo_messageButtonDefaultImplementation;
- (void)screenTwo_messageButtonPressed;
- (void)screenTwo_notNowButtonPressed;
- (void)setContainer:(id)arg1;

@end
