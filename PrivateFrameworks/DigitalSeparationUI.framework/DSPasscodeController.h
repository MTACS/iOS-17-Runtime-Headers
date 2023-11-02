
@interface DSPasscodeController : DSOBWelcomeController <DSController> {
    OBBoldTrayButton * _boldButton;
    <DSNavigationDelegate> * _delegate;
    OBLinkTrayButton * _linkButton;
}

@property (nonatomic, retain) OBBoldTrayButton *boldButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DSNavigationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) OBLinkTrayButton *linkButton;
@property (readonly) Class superclass;

+ (bool)isPasscodeSet;

- (void).cxx_destruct;
- (id)boldButton;
- (void)configureViews;
- (id)delegate;
- (id)detailText;
- (void)displayPasscodeChangeSheet;
- (id)init;
- (id)linkButton;
- (void)setBoldButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLinkButton:(id)arg1;
- (void)shouldShowWithCompletion:(id /* block */)arg1;
- (void)userDidTapCancelButton:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
