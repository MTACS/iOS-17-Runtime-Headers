
@interface DBUserAlertServer : NSObject <BSInvalidatable, URTAlertServiceDelegate> {
    <DBAppAlertPresenting> * _appPresenter;
    DBEnvironmentConfiguration * _environmentConfiguration;
    NSMutableDictionary * _pendingAlertsForAppBundleID;
    NSMutableArray * _pendingSystemAlerts;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _safeAreaInsets;
    URTAlertService * _service;
    <DBSystemAlertPresenting> * _systemPresenter;
}

@property (nonatomic) <DBAppAlertPresenting> *appPresenter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) DBEnvironmentConfiguration *environmentConfiguration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *pendingAlertsForAppBundleID;
@property (nonatomic, readonly) NSMutableArray *pendingSystemAlerts;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsets;
@property (nonatomic, readonly) URTAlertService *service;
@property (readonly) Class superclass;
@property (nonatomic) <DBSystemAlertPresenting> *systemPresenter;

- (void).cxx_destruct;
- (void)_dismissAlert:(id)arg1;
- (void)_dismissAlert:(id)arg1 overApplication:(id)arg2;
- (void)_dismissAppAlert:(id)arg1;
- (void)_dismissSystemAlert:(id)arg1;
- (void)_presentAlert:(id)arg1 overApplication:(id)arg2;
- (void)_presentSystemAlert:(id)arg1;
- (id)alertForBundleID:(id)arg1;
- (void)alertService:(id)arg1 wantsDismissalForAlert:(id)arg2;
- (void)alertService:(id)arg1 wantsPresentationForAlert:(id)arg2 preferredPresentationStyle:(long long)arg3;
- (id)appPresenter;
- (id)environmentConfiguration;
- (id)initWithSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 environmentConfiguration:(id)arg2;
- (void)invalidate;
- (id)pendingAlertsForAppBundleID;
- (id)pendingSystemAlerts;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;
- (id)service;
- (void)setAppPresenter:(id)arg1;
- (void)setSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSystemPresenter:(id)arg1;
- (id)systemPresenter;
- (void)updateAlertSceneFramesWithSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
