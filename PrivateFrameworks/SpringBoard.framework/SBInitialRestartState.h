
@interface SBInitialRestartState : NSObject <BSDescriptionProviding> {
    SBBootDefaults * _bootDefaults;
    bool  _forSimulator;
    bool  _hasPasscodeSet;
    long long  _homeButtonType;
    bool  _isAuthenticated;
    bool  _isBlocked;
    bool  _isInLostMode;
    bool  _isLoginSession;
    bool  _requiresSetup;
    bool  _shouldNeverLock;
}

@property (getter=isAuthenticated, nonatomic) bool authenticated;
@property (getter=isBlocked, nonatomic) bool blocked;
@property (nonatomic, retain) SBBootDefaults *bootDefaults;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isForSimulator, nonatomic) bool forSimulator;
@property (nonatomic) bool hasPasscodeSet;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long homeButtonType;
@property (getter=isInLostMode, nonatomic) bool inLostMode;
@property (getter=isLoginSession, nonatomic) bool loginSession;
@property (nonatomic) bool requiresSetup;
@property (nonatomic) bool shouldNeverLock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bootDefaults;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)hasPasscodeSet;
- (long long)homeButtonType;
- (bool)isAuthenticated;
- (bool)isBlocked;
- (bool)isForSimulator;
- (bool)isInLostMode;
- (bool)isLoginSession;
- (bool)requiresSetup;
- (void)setAuthenticated:(bool)arg1;
- (void)setBlocked:(bool)arg1;
- (void)setBootDefaults:(id)arg1;
- (void)setForSimulator:(bool)arg1;
- (void)setHasPasscodeSet:(bool)arg1;
- (void)setHomeButtonType:(long long)arg1;
- (void)setInLostMode:(bool)arg1;
- (void)setLoginSession:(bool)arg1;
- (void)setRequiresSetup:(bool)arg1;
- (void)setShouldNeverLock:(bool)arg1;
- (bool)shouldNeverLock;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
