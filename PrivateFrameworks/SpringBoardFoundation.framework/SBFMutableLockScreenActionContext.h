
@interface SBFMutableLockScreenActionContext : SBFLockScreenActionContext

@property (nonatomic, copy) id /* block */ action;
@property (nonatomic) bool canBypassPinLock;
@property (nonatomic) bool confirmedNotInPocket;
@property (nonatomic) bool deactivateAwayController;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) int intent;
@property (nonatomic, retain) NSString *lockLabel;
@property (nonatomic) bool requiresAuthentication;
@property (nonatomic) bool requiresUIUnlock;
@property (nonatomic, retain) NSString *shortLockLabel;
@property (nonatomic) int source;
@property (nonatomic, copy) NSString *unlockDestination;
@property (nonatomic) bool wantsBiometricPresentation;

@end
