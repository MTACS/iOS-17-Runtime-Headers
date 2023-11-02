
@interface PKPaymentSetupGetAppViewController : PKExplanationViewController <ASCLockupViewDelegate, PKLinkedApplicationObserver> {
    ASCLockupView * _appStoreView;
    PKLinkedApplication * _linkedApplication;
    PKPaymentSetupProduct * _product;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateAppStoreViewRequest;
- (id)initWithPaymentProduct:(id)arg1 setupContext:(long long)arg2;
- (id)initWithPaymentProduct:(id)arg1 setupContext:(long long)arg2 linkedApplication:(id)arg3;
- (void)linkedApplicationDidChangeState:(id)arg1;
- (void)lockupViewDidInvalidateIntrinsicContentSize:(id)arg1;
- (id)presentingViewControllerForLockupView:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;

@end
