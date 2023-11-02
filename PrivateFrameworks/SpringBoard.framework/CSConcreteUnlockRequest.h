
@interface CSConcreteUnlockRequest : NSObject <CSUnlockRequest> {
    bool  confirmedNotInPocket;
    int  intent;
    NSString * name;
    int  source;
    bool  wantsBiometricPresentation;
}

@property (nonatomic) bool confirmedNotInPocket;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int intent;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) int source;
@property (readonly) Class superclass;
@property (nonatomic) bool wantsBiometricPresentation;

- (void).cxx_destruct;
- (bool)confirmedNotInPocket;
- (int)intent;
- (id)name;
- (void)setConfirmedNotInPocket:(bool)arg1;
- (void)setIntent:(int)arg1;
- (void)setName:(id)arg1;
- (void)setSource:(int)arg1;
- (void)setWantsBiometricPresentation:(bool)arg1;
- (int)source;
- (bool)wantsBiometricPresentation;

@end
