
@interface PKExplanationViewController : UIViewController <PKExplanationViewDelegate, PKPaymentSetupPresentationProtocol> {
    UIActivityIndicatorView * _activityIndicatorView;
    long long  _context;
    PKExplanationView * _explanationView;
    <PKExplanationViewControllerDelegate> * _explanationViewControllerDelegate;
    UIBarButtonItem * _hiddenRightBarButtonItem;
    OBPrivacyLinkController * _privacyLinkController;
    bool  _showCancelButton;
    bool  _showCloseButton;
    bool  _showDoneButton;
    bool  _showingSpinner;
    UIBarButtonItem * _spinningItem;
    bool  _wasBackHidden;
}

@property (nonatomic, readonly) long long context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PKExplanationView *explanationView;
@property (nonatomic) <PKExplanationViewControllerDelegate> *explanationViewControllerDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) OBPrivacyLinkController *privacyLinkController;
@property (nonatomic) bool showCancelButton;
@property (nonatomic) bool showCloseButton;
@property (nonatomic) bool showDoneButton;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelPressed;
- (void)_dismissViewController;
- (void)_donePressed;
- (void)_setNavigationBarEnabled:(bool)arg1;
- (id)contentScrollView;
- (long long)context;
- (id)explanationView;
- (id)explanationViewControllerDelegate;
- (id)init;
- (id)initWithContext:(long long)arg1;
- (void)loadView;
- (unsigned long long)paymentSetupMarker;
- (bool)paymentSetupMarkerRemovalIsInclusive;
- (id)privacyLinkController;
- (void)setExplanationViewControllerDelegate:(id)arg1;
- (void)setPrivacyLinkController:(id)arg1;
- (void)setShowCancelButton:(bool)arg1;
- (void)setShowCloseButton:(bool)arg1;
- (void)setShowDoneButton:(bool)arg1;
- (bool)showCancelButton;
- (bool)showCloseButton;
- (bool)showDoneButton;
- (void)showNavigationBarSpinner:(bool)arg1;
- (void)showSpinner:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
