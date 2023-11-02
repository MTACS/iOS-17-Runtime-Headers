
@interface ACMAppleConnectImplComponents : ACCComponents {
    <ACFKeychainManagerProtocol> * _keychain;
    <ACMAppleConnectPreferences> * _preferences;
    <ACMSystemInfoProtocol> * _systemInfo;
    <ACC2SVControllerProtocol> * _twoSVController;
    <ACMUIControllerProtocol> * _uiController;
    <ACMUIControllerDelegate> * _uiControllerDelegate;
}

@property (nonatomic, retain) <ACMAppleConnectPreferences> *preferences;
@property (nonatomic, retain) <ACMSystemInfoProtocol> *systemInfo;
@property (nonatomic, retain) <ACMTicketManagerProtocol> *ticketManager;
@property (nonatomic, retain) <ACC2SVControllerProtocol> *twoSVController;
@property (nonatomic, retain) <ACMUIControllerProtocol> *uiController;
@property (setter=setUIControllerDelegate:) <ACMUIControllerDelegate> *uiControllerDelegate;
@property (readonly) bool uiControllerLoaded;

+ (id)components;
+ (id)defaultComponents;

- (void)cleanupOnMemoryWarning;
- (id)createAuthenticationRequest;
- (id)createHandlerWithClass:(Class)arg1 context:(id)arg2;
- (id)createTicketVerificationRequest;
- (void)dealloc;
- (id)preferences;
- (void)setPreferences:(id)arg1;
- (void)setSystemInfo:(id)arg1;
- (void)setTwoSVController:(id)arg1;
- (void)setUIControllerDelegate:(id)arg1;
- (void)setUiController:(id)arg1;
- (id)systemInfo;
- (id)twoSVController;
- (id)uiController;
- (id)uiControllerDelegate;
- (bool)uiControllerLoaded;
- (void)unloadUIController;

@end
