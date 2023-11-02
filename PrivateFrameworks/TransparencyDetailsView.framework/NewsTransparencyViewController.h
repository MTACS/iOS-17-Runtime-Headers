
@interface NewsTransparencyViewController : UIViewController <WKNavigationDelegate> {
    <NewsTransparencyViewControllerDelegate> * _delegate;
    UILabel * _errorLabel;
    bool  _isClientTodayWidget;
    bool  _isiPad;
    WKWebView * _myNewsPrivacyWebView;
    id  _notificationObserver;
    bool  _renderingStatusForLocationPermission;
    bool  _renderingStatusForPAPermission;
    NSDictionary * _transparencyDetailsDictionary;
    NSString * _transparencyDetailsUnavailableMessage;
    NSString * _transparencyRendererPayload;
    NSString * _transparencyRendererURL;
    UIActivityIndicatorView * activityIndicator;
    UIViewController * debugViewController;
    UIBarButtonItem * leftButton;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <NewsTransparencyViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UILabel *errorLabel;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isClientTodayWidget;
@property (nonatomic) bool isiPad;
@property (nonatomic, retain) WKWebView *myNewsPrivacyWebView;
@property (nonatomic, retain) id notificationObserver;
@property (nonatomic, readonly) bool renderingStatusForLocationPermission;
@property (nonatomic, readonly) bool renderingStatusForPAPermission;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *transparencyDetailsDictionary;
@property (nonatomic, readonly) NSString *transparencyDetailsUnavailableMessage;
@property (nonatomic, readonly) NSString *transparencyRendererPayload;
@property (nonatomic, readonly) NSString *transparencyRendererURL;

- (void).cxx_destruct;
- (void)_closeViewController:(id)arg1;
- (void)_commonInit;
- (void)_hideErrorMessage;
- (void)_openDebugView:(id)arg1;
- (void)_showErrorMessage:(id)arg1;
- (void)debugDetailsViewControllerReady:(id)arg1;
- (id)delegate;
- (void)displayDebugButtonWaitingIndicator;
- (void)errorDelegate;
- (id)errorLabel;
- (id)initWithNewsTransparencyDetailsDictionary:(id)arg1;
- (bool)isClientTodayWidget;
- (bool)isDeviceLocked;
- (bool)isiPad;
- (void)loadWebView;
- (id)myNewsPrivacyWebView;
- (id)notificationObserver;
- (void)presentViewDelegate;
- (bool)renderingStatusForLocationPermission;
- (bool)renderingStatusForPAPermission;
- (void)requestUserPassCodeUnlockUIWithBlock:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setErrorLabel:(id)arg1;
- (void)setIsClientTodayWidget:(bool)arg1;
- (void)setIsiPad:(bool)arg1;
- (void)setMyNewsPrivacyWebView:(id)arg1;
- (void)setNotificationObserver:(id)arg1;
- (void)setTransparencyDetailsDictionary:(id)arg1;
- (id)transparencyDetailsDictionary;
- (id)transparencyDetailsUnavailableMessage;
- (id)transparencyRendererPayload;
- (id)transparencyRendererURL;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;

@end
