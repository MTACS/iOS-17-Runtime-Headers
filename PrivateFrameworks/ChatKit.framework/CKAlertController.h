
@interface CKAlertController : UIAlertController <CKAdaptivePresentedControllerProtocol> {
    <CKAlertControllerDelegate> * _alertDelegate;
    bool  _preserveModalPresentationStyle;
    bool  _shouldHidePresentingWindow;
    bool  _wantsWindowedPresentation;
}

@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic) <CKAlertControllerDelegate> *alertDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool preserveModalPresentationStyle;
@property (nonatomic) bool shouldHidePresentingWindow;
@property (readonly) Class superclass;
@property (nonatomic) bool wantsWindowedPresentation;

+ (id)alertControllerWithTitle:(id)arg1 message:(id)arg2 preferredStyle:(long long)arg3;

- (void).cxx_destruct;
- (void)addAction:(id)arg1;
- (id)alertDelegate;
- (bool)allowsRotation;
- (void)presentFromViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (bool)preserveModalPresentationStyle;
- (void)setAlertDelegate:(id)arg1;
- (void)setPreserveModalPresentationStyle:(bool)arg1;
- (void)setShouldHidePresentingWindow:(bool)arg1;
- (void)setWantsWindowedPresentation:(bool)arg1;
- (bool)shouldHidePresentingWindow;
- (void)viewDidDisappear:(bool)arg1;
- (bool)wantsWindowedPresentation;

@end
