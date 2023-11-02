
@interface DMCEnrollmentInstallAppButtonView : UIView <ASCLockupViewDelegate_ForTVProvider> {
    id /* block */  _completionHandler;
    ASCLockupView * _lockupView;
    double  _preferredHeight;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ASCLockupView *lockupView;
@property (nonatomic) double preferredHeight;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)initWithLockupRequest:(id)arg1 lockupViewGroup:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)layoutSubviews;
- (id)lockupView;
- (void)lockupView:(id)arg1 appStateDidChange:(id)arg2;
- (bool)lockupViewShouldSupportDSIDLessInstalls:(id)arg1;
- (double)preferredHeight;
- (id)presentingViewControllerForLockupView:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setLockupView:(id)arg1;
- (void)setPreferredHeight:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
