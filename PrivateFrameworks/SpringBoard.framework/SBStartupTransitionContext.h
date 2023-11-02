
@interface SBStartupTransitionContext : NSObject <BSDescriptionProviding> {
    NSURL * _applicationLaunchURL;
    NSString * _fromApplicationBundleID;
    bool  _fromLocked;
    bool  _fromUserPowerDown;
    bool  _hasUserSwitchOverlayMismatch;
    bool  _isDark;
    bool  _isLogin;
    bool  _isLoginSession;
    bool  _isLogout;
    BKSDisplayRenderOverlay * _overlay;
    NSString * _reason;
}

@property (nonatomic, copy) NSURL *applicationLaunchURL;
@property (getter=isDark, nonatomic) bool dark;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *fromApplicationBundleID;
@property (nonatomic) bool fromLocked;
@property (nonatomic) bool fromUserPowerDown;
@property (nonatomic) bool hasUserSwitchOverlayMismatch;
@property (readonly) unsigned long long hash;
@property (getter=isLogin, nonatomic) bool login;
@property (getter=isLogout, nonatomic) bool logout;
@property (nonatomic, retain) BKSDisplayRenderOverlay *overlay;
@property (nonatomic, copy) NSString *reason;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initWithRebootContext:(id)arg1;
- (id)_initWithRepresentation:(id)arg1 loginSession:(bool)arg2;
- (id)_initWithRestartRequest:(id)arg1 fromLocked:(bool)arg2 fromApplication:(id)arg3;
- (id)_initWithShutdownContext:(id)arg1;
- (void)_parseOverlayInfo;
- (void)_reallyInitFromRepresentation:(id)arg1;
- (id)_representation;
- (id)applicationLaunchURL;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)fromApplicationBundleID;
- (bool)fromLocked;
- (bool)fromUserPowerDown;
- (bool)hasUserSwitchOverlayMismatch;
- (bool)isDark;
- (bool)isEqual:(id)arg1;
- (bool)isLogin;
- (bool)isLogout;
- (id)overlay;
- (id)reason;
- (void)setApplicationLaunchURL:(id)arg1;
- (void)setDark:(bool)arg1;
- (void)setFromApplicationBundleID:(id)arg1;
- (void)setFromLocked:(bool)arg1;
- (void)setFromUserPowerDown:(bool)arg1;
- (void)setHasUserSwitchOverlayMismatch:(bool)arg1;
- (void)setLogin:(bool)arg1;
- (void)setLogout:(bool)arg1;
- (void)setOverlay:(id)arg1;
- (void)setReason:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
