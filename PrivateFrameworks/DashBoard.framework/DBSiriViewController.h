
@interface DBSiriViewController : UIViewController <DBDashboardWorkspaceEntityPresenting, SiriPresentationControllerDelegate, SiriPresentationIntentUsageDelegate> {
    NSString * _activeIntentBundleID;
    NSArray * _constraints;
    bool  _dismissed;
    <DBEnvironment> * _environment;
    <SiriPresentationIntentUsageDelegate> * _intentUsageDelegate;
    <BSInvalidatable> * _layoutElementAssertion;
    bool  _paired;
    DBWorkspaceStateChangeRequest * _pendingChangeRequest;
    id /* block */  _presentationRequestHandler;
    SiriPresentationViewController * _presentationViewController;
    id  _screenBorrowToken;
    NSMutableSet * _touchToDismissEnabledReasons;
    UILongPressGestureRecognizer * _touchToDismissRecognizer;
}

@property (nonatomic, copy) NSString *activeIntentBundleID;
@property (nonatomic, retain) NSArray *constraints;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDismissed, nonatomic) bool dismissed;
@property (nonatomic) <DBEnvironment> *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) <SiriPresentationIntentUsageDelegate> *intentUsageDelegate;
@property (nonatomic, retain) <BSInvalidatable> *layoutElementAssertion;
@property (getter=isPaired, nonatomic) bool paired;
@property (nonatomic, retain) DBWorkspaceStateChangeRequest *pendingChangeRequest;
@property (nonatomic, copy) id /* block */ presentationRequestHandler;
@property (nonatomic, retain) SiriPresentationViewController *presentationViewController;
@property (nonatomic, retain) id screenBorrowToken;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableSet *touchToDismissEnabledReasons;
@property (nonatomic, retain) UILongPressGestureRecognizer *touchToDismissRecognizer;

- (void).cxx_destruct;
- (void)_addPresentationView;
- (void)_handleBackgroundURLRequest:(id)arg1 applicationInfo:(id)arg2;
- (void)_handleHomeEventType:(unsigned long long)arg1;
- (void)_handlePunchoutRequest:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_hostedPresentationFrame;
- (void)_removePresentationView;
- (void)_requestDismissalWithReason:(long long)arg1;
- (void)_safeDismissAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)_telephonyDropTapped:(id)arg1;
- (void)_touchedDisplayToDismiss:(id)arg1;
- (void)_updateHostedPresentationFrame;
- (void)_updateTouchToDismiss;
- (void)activateSceneWithSettings:(id)arg1 completion:(id /* block */)arg2;
- (id)activeIntentBundleID;
- (void)activeIntentWithBundleId:(id)arg1;
- (void)backgroundSceneWithCompletion:(id /* block */)arg1;
- (id)constraints;
- (void)deactivateSceneWithReasonMask:(unsigned long long)arg1;
- (void)dealloc;
- (id)environment;
- (void)foregroundSceneWithSettings:(id)arg1 completion:(id /* block */)arg2;
- (void)handleEvent:(id)arg1;
- (void)handleTransitionToFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)identifier;
- (id)initWithEnvironment:(id)arg1;
- (id)intentUsageDelegate;
- (void)invalidatePresentationViewForIdentifier:(id)arg1;
- (bool)isDismissed;
- (bool)isPaired;
- (id)layoutElementAssertion;
- (id)pendingChangeRequest;
- (id /* block */)presentationRequestHandler;
- (id)presentationViewController;
- (id)presentationViewWithIdentifier:(id)arg1;
- (bool)presentsFullScreen;
- (bool)presentsUnderStatusBar;
- (id)screenBorrowToken;
- (void)setActiveIntentBundleID:(id)arg1;
- (void)setConstraints:(id)arg1;
- (void)setDismissed:(bool)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setIntentUsageDelegate:(id)arg1;
- (void)setLayoutElementAssertion:(id)arg1;
- (void)setPaired:(bool)arg1;
- (void)setPendingChangeRequest:(id)arg1;
- (void)setPresentationRequestHandler:(id /* block */)arg1;
- (void)setPresentationViewController:(id)arg1;
- (void)setScreenBorrowToken:(id)arg1;
- (void)setTouchToDismissEnabled:(bool)arg1 forRequester:(id)arg2;
- (void)setTouchToDismissEnabledReasons:(id)arg1;
- (void)setTouchToDismissRecognizer:(id)arg1;
- (void)siriPresentation:(id)arg1 isEnabledDidChange:(bool)arg2;
- (void)siriPresentation:(id)arg1 requestsDismissalWithOptions:(id)arg2 withHandler:(id /* block */)arg3;
- (void)siriPresentation:(id)arg1 requestsPresentationWithOptions:(id)arg2 withHandler:(id /* block */)arg3;
- (void)siriPresentation:(id)arg1 requestsPunchout:(id)arg2 withHandler:(id /* block */)arg3;
- (id)touchToDismissEnabledReasons;
- (id)touchToDismissRecognizer;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
