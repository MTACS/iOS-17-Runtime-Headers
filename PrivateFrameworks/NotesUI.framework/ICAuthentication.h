
@interface ICAuthentication : NSObject {
    id  _currentAuthenticationController;
}

@property (getter=isAuthenticating, nonatomic, readonly) bool authenticating;
@property (nonatomic, retain) id currentAuthenticationController;

+ (id)shared;

- (void).cxx_destruct;
- (void)authenticateBiometricsWithPrompt:(id)arg1 displayWindow:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)authenticateCloudPasswordWithPrompt:(id)arg1 displayWindow:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)authenticateCustomPasswordWithPrompt:(id)arg1 displayWindow:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)authenticateDevicePasswordWithPrompt:(id)arg1 displayWindow:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)authenticateWithPrompt:(id)arg1 displayWindow:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)currentAuthenticationController;
- (void)didAuthenticateBiometricsWithPrompt:(id)arg1 error:(id)arg2 displayWindow:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)didAuthenticateCloudPasswordWithPrompt:(id)arg1 result:(unsigned long long)arg2 displayWindow:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)didAuthenticateCustomPasswordWithPrompt:(id)arg1 result:(unsigned long long)arg2 displayWindow:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)didAuthenticateDevicePasswordWithPrompt:(id)arg1 error:(id)arg2 displayWindow:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)didAuthenticateWithPrompt:(id)arg1 result:(unsigned long long)arg2 displayWindow:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)isAuthenticating;
- (void)setBiometricsEnabled:(bool)arg1 account:(id)arg2;
- (void)setCurrentAuthenticationController:(id)arg1;
- (void)setCustomPasswordWithPrompt:(id)arg1 displayWindow:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)updateUserRecordForAccount:(id)arg1 completionHandler:(id /* block */)arg2;

@end
