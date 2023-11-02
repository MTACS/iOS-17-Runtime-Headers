
@interface DSPrivacyAdditionalActionsController : DSOBWelcomeController <DSController> {
    OBBoldTrayButton * _boldButton;
    <DSNavigationDelegate> * _delegate;
}

@property (nonatomic, retain) OBBoldTrayButton *boldButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DSNavigationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)back;
- (id)boldButton;
- (id)delegate;
- (id)init;
- (void)pushNextPane;
- (void)setBoldButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
