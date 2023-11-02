
@interface SKAuthenticationRequestEvent : SKEvent {
    unsigned int  _pairingFlags;
    int  _passwordType;
    int  _throttleSeconds;
}

@property (nonatomic, readonly) unsigned int pairingFlags;
@property (nonatomic, readonly) int passwordType;
@property (nonatomic, readonly) int throttleSeconds;

- (id)descriptionWithLevel:(int)arg1;
- (id)initWithPasswordType:(int)arg1 pairingFlags:(unsigned int)arg2 throttleSeconds:(int)arg3;
- (unsigned int)pairingFlags;
- (int)passwordType;
- (int)throttleSeconds;

@end
