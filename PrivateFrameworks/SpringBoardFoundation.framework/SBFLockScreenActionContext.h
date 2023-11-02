
@interface SBFLockScreenActionContext : NSObject {
    id /* block */  _action;
    bool  _canBypassPinLock;
    bool  _confirmedNotInPocket;
    bool  _deactivateAwayController;
    double  _fontSize;
    NSString * _identifier;
    int  _intent;
    NSString * _lockLabel;
    bool  _requiresAuthentication;
    bool  _requiresUIUnlock;
    NSString * _shortLockLabel;
    int  _source;
    NSString * _unlockDestination;
    bool  _wantsBiometricPresentation;
}

@property (nonatomic, copy) id /* block */ action;
@property (nonatomic) bool canBypassPinLock;
@property (nonatomic) bool confirmedNotInPocket;
@property (nonatomic) bool deactivateAwayController;
@property (nonatomic, readonly) bool hasCustomUnlockLabel;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) int intent;
@property (nonatomic, retain) NSString *lockLabel;
@property (nonatomic) bool requiresAuthentication;
@property (nonatomic) bool requiresUIUnlock;
@property (nonatomic, retain) NSString *shortLockLabel;
@property (nonatomic) int source;
@property (nonatomic, copy) NSString *unlockDestination;
@property (nonatomic) bool wantsBiometricPresentation;

- (void).cxx_destruct;
- (id /* block */)action;
- (bool)canBypassPinLock;
- (bool)confirmedNotInPocket;
- (bool)deactivateAwayController;
- (bool)hasCustomUnlockLabel;
- (id)identifier;
- (id)initWithLockLabel:(id)arg1 shortLockLabel:(id)arg2 action:(id /* block */)arg3 identifier:(id)arg4;
- (int)intent;
- (id)lockLabel;
- (bool)requiresAuthentication;
- (bool)requiresUIUnlock;
- (void)setAction:(id /* block */)arg1;
- (void)setCanBypassPinLock:(bool)arg1;
- (void)setConfirmedNotInPocket:(bool)arg1;
- (void)setDeactivateAwayController:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIntent:(int)arg1;
- (void)setLockLabel:(id)arg1;
- (void)setRequiresAuthentication:(bool)arg1;
- (void)setRequiresUIUnlock:(bool)arg1;
- (void)setShortLockLabel:(id)arg1;
- (void)setSource:(int)arg1;
- (void)setUnlockDestination:(id)arg1;
- (void)setWantsBiometricPresentation:(bool)arg1;
- (id)shortLockLabel;
- (int)source;
- (id)unlockDestination;
- (bool)wantsBiometricPresentation;

@end
