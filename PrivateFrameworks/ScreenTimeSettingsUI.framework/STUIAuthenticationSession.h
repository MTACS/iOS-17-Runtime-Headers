
@interface STUIAuthenticationSession : NSObject <STAuthenticationSession> {
    bool  _hasAlreadyEnteredPINForSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAlreadyEnteredPINForSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)shared;

- (void)_passcodeSessionHasEnded:(id)arg1;
- (bool)hasAlreadyEnteredPINForSession;
- (id)init;
- (void)setHasAlreadyEnteredPINForSession:(bool)arg1;

@end
