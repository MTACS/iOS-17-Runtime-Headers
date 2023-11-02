
@interface LAUIAuthenticationCore : NSObject <LAUIAuthentication, LAUIDelegate> {
    unsigned long long  _activeMechanisms;
    bool  _applicationActive;
    long long  _biometryType;
    LAContext * _context;
    NSObject<LAUIAuthenticationCoreDelegate> * _delegate;
    bool  _doneMatching;
    bool  _doneWatch;
    unsigned long long  _enabledMechanisms;
    NSDictionary * _faceIdResult;
    bool  _keyWindow;
    long long  _lastState;
    bool  _mirroringToDefaultUI;
    bool  _uiActive;
    bool  _usesInternalContext;
    UIView * _view;
}

@property (nonatomic) unsigned long long activeMechanisms;
@property (getter=isApplicationActive, nonatomic) bool applicationActive;
@property (nonatomic, readonly) long long biometryType;
@property (nonatomic, retain) LAContext *context;
@property (nonatomic) NSObject<LAUIAuthenticationCoreDelegate> *delegate;
@property (nonatomic) unsigned long long enabledMechanisms;
@property (nonatomic, readonly) NSDictionary *faceIdResult;
@property (getter=isKeyWindow, nonatomic) bool keyWindow;
@property (getter=isUiActive, nonatomic) bool uiActive;
@property (nonatomic) UIView *view;

+ (void)performBlockOnMainThread:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)_biometricNoMatchWithBiolockoutError:(id)arg1;
- (void)_biometryState:(long long)arg1;
- (void)_enableAvailableMechanisms:(unsigned long long)arg1;
- (void)_handleBackgroundMechanismsResult:(id)arg1 error:(id)arg2 context:(id)arg3;
- (bool)_mechanism:(unsigned long long)arg1 enable:(bool)arg2 error:(id*)arg3;
- (void)_notification:(id)arg1;
- (id)_optionsForBackgroundMechanism;
- (long long)_policyForBackgroundMechanisms;
- (void)_processActivityChangeForNotification:(id)arg1 block:(id /* block */)arg2;
- (void)_setupMechanisms:(unsigned long long)arg1;
- (void)_setupNotifications:(bool)arg1;
- (bool)_simpleStatusInParams:(id)arg1 touchId:(long long)arg2 faceId:(long long)arg3;
- (void)_startBackgroundMechanisms;
- (void)_stopBackgroundMechanisms;
- (unsigned long long)activeMechanisms;
- (long long)biometryType;
- (void)checkView;
- (id)context;
- (id)delegate;
- (bool)disableMechanism:(unsigned long long)arg1 error:(id*)arg2;
- (bool)enableMechanism:(unsigned long long)arg1 error:(id*)arg2;
- (unsigned long long)enabledMechanisms;
- (void)event:(long long)arg1 params:(id)arg2 reply:(id /* block */)arg3;
- (id)faceIdResult;
- (id)initWithMechanisms:(unsigned long long)arg1;
- (id)initWithMechanisms:(unsigned long long)arg1 context:(id)arg2;
- (bool)isApplicationActive;
- (bool)isKeyWindow;
- (bool)isMechanismActive:(unsigned long long)arg1;
- (bool)isMechanismAvailable:(unsigned long long)arg1 error:(id*)arg2;
- (bool)isMechanismEnabled:(unsigned long long)arg1;
- (bool)isUiActive;
- (id)notificationNames;
- (void)setActiveMechanisms:(unsigned long long)arg1;
- (void)setApplicationActive:(bool)arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabledMechanisms:(unsigned long long)arg1;
- (void)setKeyWindow:(bool)arg1;
- (void)setUiActive:(bool)arg1;
- (void)setView:(id)arg1;
- (void)startOrStopBackgroundMechanisms;
- (id)view;

@end
