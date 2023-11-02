
@interface PSUICarrierSpaceOptInSplashScreen : OBWelcomeController {
    OBBoldTrayButton * _continueButton;
    id /* block */  _continueButtonAction;
    PSListController * _listController;
}

@property (nonatomic, retain) OBBoldTrayButton *continueButton;
@property (nonatomic, copy) id /* block */ continueButtonAction;
@property (nonatomic) PSListController *listController;

- (void).cxx_destruct;
- (id)continueButton;
- (id /* block */)continueButtonAction;
- (void)continueButtonPressed;
- (id)getLogger;
- (id)initWithParent:(id)arg1;
- (id)listController;
- (void)setContinueButton:(id)arg1;
- (void)setContinueButtonAction:(id /* block */)arg1;
- (void)setListController:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
