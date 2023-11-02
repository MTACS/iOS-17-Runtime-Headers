
@interface HUFeedbackConsentViewController : UIViewController {
    <HUFeedbackConsentViewControllerDelegate> * _consentDelegate;
    WKWebView * _consentView;
    bool  _isFamilyAndFriendsConsent;
    bool  _isObservingConsentViewLoading;
}

@property (nonatomic, retain) <HUFeedbackConsentViewControllerDelegate> *consentDelegate;
@property (nonatomic, retain) WKWebView *consentView;
@property (nonatomic) bool isFamilyAndFriendsConsent;
@property (nonatomic) bool isObservingConsentViewLoading;

- (void).cxx_destruct;
- (id)consentDelegate;
- (id)consentFormFilePath;
- (id)consentView;
- (void)dealloc;
- (void)didAcceptConsent;
- (void)didDeclineConsent;
- (id)htmlString;
- (id)initWithConsentDelegate:(id)arg1;
- (bool)isFamilyAndFriendsConsent;
- (bool)isObservingConsentViewLoading;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setConsentDelegate:(id)arg1;
- (void)setConsentView:(id)arg1;
- (void)setIsFamilyAndFriendsConsent:(bool)arg1;
- (void)setIsObservingConsentViewLoading:(bool)arg1;
- (void)updateViewConstraints;
- (void)viewDidLoad;

@end
