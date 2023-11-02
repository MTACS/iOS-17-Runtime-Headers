
@interface DSRestrictionsController : OBTextWelcomeController <DSController> {
    <DSNavigationDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DSNavigationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)init;
- (void)learnMoreRestrictionsPressed;
- (id)restrictionList;
- (void)setDelegate:(id)arg1;
- (void)shouldShowWithCompletion:(id /* block */)arg1;
- (void)viewDidLoad;

@end
