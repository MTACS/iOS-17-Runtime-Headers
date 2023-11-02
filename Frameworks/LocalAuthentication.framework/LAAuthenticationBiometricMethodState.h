
@interface LAAuthenticationBiometricMethodState : LAAuthenticationMethodState {
    bool  _isFaceID;
    bool  _isTouchID;
    bool  _isUserPresent;
    unsigned long long  _lockoutState;
}

@property (nonatomic) bool isFaceID;
@property (nonatomic) bool isTouchID;
@property (nonatomic) bool isUserPresent;
@property (nonatomic) unsigned long long lockoutState;

- (id)description;
- (bool)isFaceID;
- (bool)isTouchID;
- (bool)isUserPresent;
- (unsigned long long)lockoutState;
- (void)setIsFaceID:(bool)arg1;
- (void)setIsTouchID:(bool)arg1;
- (void)setIsUserPresent:(bool)arg1;
- (void)setLockoutState:(unsigned long long)arg1;

@end
