
@interface VideosUI.ASCListItem : VUIBaseView <ASCLockupViewDelegate, ASCLockupViewDelegate_PreprocessOffer> {
    void actionPunchout;
    void advanceASCOfferHandler;
    void currentLockup;
    void dismissalUIConfiguration;
    void federatedInstallHelper;
    void offerListUIConfiguration;
    void previousState;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)lockupView:(id)arg1 appStateDidChange:(id)arg2;
- (void)lockupView:(id)arg1 preprocessOffer:(id)arg2 inState:(id)arg3 completionBlock:(id /* block */)arg4;
- (id)presentingViewControllerForLockupView:(id)arg1;
- (struct CGSize { double x1; double x2; })vui_layoutSubviews:(struct CGSize { double x1; double x2; })arg1 computationOnly:(bool)arg2;

@end
