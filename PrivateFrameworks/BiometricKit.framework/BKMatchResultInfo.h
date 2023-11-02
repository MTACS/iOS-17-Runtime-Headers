
@interface BKMatchResultInfo : NSObject {
    bool  _credentialAdded;
    BKIdentity * _identity;
    long long  _lockoutState;
    bool  _resultIgnored;
    bool  _unlocked;
}

@property (nonatomic) bool credentialAdded;
@property (nonatomic, retain) BKIdentity *identity;
@property (nonatomic) long long lockoutState;
@property (nonatomic, readonly) bool resultIgnored;
@property (nonatomic) bool unlocked;

- (void).cxx_destruct;
- (bool)credentialAdded;
- (id)identity;
- (id)initWithServerIdentity:(id)arg1 details:(id)arg2 device:(id)arg3;
- (long long)lockoutState;
- (bool)resultIgnored;
- (void)setCredentialAdded:(bool)arg1;
- (void)setIdentity:(id)arg1;
- (void)setLockoutState:(long long)arg1;
- (void)setUnlocked:(bool)arg1;
- (bool)unlocked;

@end
