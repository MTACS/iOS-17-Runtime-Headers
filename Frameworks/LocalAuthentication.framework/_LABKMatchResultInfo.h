
@interface _LABKMatchResultInfo : NSObject {
    BKIdentity * _identity;
    long long  _lockoutState;
}

@property (nonatomic, retain) BKIdentity *identity;
@property (nonatomic) long long lockoutState;

- (void).cxx_destruct;
- (id)identity;
- (long long)lockoutState;
- (void)setIdentity:(id)arg1;
- (void)setLockoutState:(long long)arg1;

@end
