
@interface SBMutableInitialRestartState : SBInitialRestartState

@property (getter=isAuthenticated, nonatomic) bool authenticated;
@property (getter=isBlocked, nonatomic) bool blocked;
@property (nonatomic, retain) SBBootDefaults *bootDefaults;
@property (getter=isForSimulator, nonatomic) bool forSimulator;
@property (nonatomic) bool hasPasscodeSet;
@property (getter=homeButtonType, nonatomic) long long homeButtonType;
@property (getter=isInLostMode, nonatomic) bool inLostMode;
@property (getter=isLoginSession, nonatomic) bool loginSession;
@property (nonatomic) bool requiresSetup;
@property (nonatomic) bool shouldNeverLock;

@end
