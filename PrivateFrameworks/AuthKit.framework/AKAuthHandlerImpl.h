
@interface AKAuthHandlerImpl : NSObject <AKAuthHandler> {
    bool  _forceSilentAuth;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forceSilentAuth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)buildReauthenticationContextFromContext:(id)arg1 error:(id*)arg2;
- (bool)forceSilentAuth;
- (void)reauthenticateWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)reauthenticateWithContext:(id)arg1 completionWithResults:(id /* block */)arg2;
- (void)setForceSilentAuth:(bool)arg1;

@end
