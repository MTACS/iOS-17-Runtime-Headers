
@interface BKMesaSecureIntentProvider : NSObject <LAUIDelegate> {
    BKUIAlertView * _alertView;
    UIWindow * _alertWindow;
    bool  _authParamActive;
    LAContext * _context;
    NSString * _credential;
    <BKSecureIntentDisplayHost> * _displayHost;
    bool  _hasAttemptedCrossMatch;
    struct __IOHIDEventSystemClient { } * _hidClient;
    bool  _inBuddy;
    bool  _inDemo;
    UIView<SecureIntentClientView> * _presentingView;
    bool  _pushCredentialPresent;
    bool  _touchIDMatch;
    unsigned long long  _touchIDMatchAttemptCount;
    BKUIAlertView * _wrongButtonAlertView;
    NSObject<OS_os_log> * authManagerLogs;
}

@property (retain) BKUIAlertView *alertView;
@property (nonatomic) UIWindow *alertWindow;
@property (nonatomic, retain) LAContext *context;
@property (nonatomic, retain) NSString *credential;
@property (nonatomic) <BKSecureIntentDisplayHost> *displayHost;
@property (nonatomic) bool inDemo;
@property (nonatomic, retain) UIView<SecureIntentClientView> *presentingView;
@property (retain) BKUIAlertView *wrongButtonAlertView;

- (void).cxx_destruct;
- (void)_getSecureIntentForAccessory:(id)arg1 enrollmentOperation:(id)arg2 showErrorToRetry:(bool)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)_handleTouchIDEventWithParameters:(id)arg1;
- (bool)_isMonitoringPowerButton;
- (void)_startMonitoringPowerButton;
- (void)_stopMonitoringPowerButton;
- (id)alertView;
- (id)alertWindow;
- (void)configureIntentView;
- (id)context;
- (id)credential;
- (void)dismissSecureIntentViewForUserInteraction;
- (id)displayHost;
- (void)event:(long long)arg1 params:(id)arg2 reply:(id /* block */)arg3;
- (void)getSecureIntentForAccessory:(id)arg1 enrollmentOperation:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (bool)hasFingergprintsEnrolled;
- (bool)inDemo;
- (id)initWithAlertWindow:(id)arg1 inBuddy:(bool)arg2;
- (void)invalidateAuthContext;
- (bool)needsToDisplayUI;
- (id)presentingView;
- (void)reset;
- (void)setAlertView:(id)arg1;
- (void)setAlertWindow:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setCredential:(id)arg1;
- (void)setDisplayHost:(id)arg1;
- (void)setInDemo:(bool)arg1;
- (void)setPresentingView:(id)arg1;
- (void)setWrongButtonAlertView:(id)arg1;
- (void)showAlert:(id)arg1 detailedText:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)wrongButtonAlertView;

@end
