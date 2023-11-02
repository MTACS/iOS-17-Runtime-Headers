
@interface STActivityIndicatingWebView : WKWebView <WKNavigationDelegate> {
    UIActivityIndicatorView * _activityView;
    <UITraitChangeRegistration> * _interfaceStyleObservation;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <UITraitChangeRegistration> *interfaceStyleObservation;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityView;
- (void)didChangeUserInterfaceStyle;
- (void)didMoveToSuperview;
- (void)hostActivityIndicatorInView:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)interfaceStyleObservation;
- (void)setActivityView:(id)arg1;
- (void)setInterfaceStyleObservation:(id)arg1;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;

@end
