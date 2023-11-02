
@protocol CSUnlockRequest <NSObject>

@required

- (bool)confirmedNotInPocket;
- (int)intent;
- (NSString *)name;
- (void)setConfirmedNotInPocket:(bool)arg1;
- (void)setIntent:(int)arg1;
- (void)setName:(NSString *)arg1;
- (void)setSource:(int)arg1;
- (void)setWantsBiometricPresentation:(bool)arg1;
- (int)source;
- (bool)wantsBiometricPresentation;

@end
