
@protocol LAUIAuthenticationDelegate <NSObject>

@optional

- (void)authenticationResult:(NSDictionary *)arg1 error:(NSError *)arg2 context:(LAContext *)arg3;
- (void)biometricNoMatch;
- (void)biometryDidBecomeIdle;
- (NSString *)callerIconBundlePath;
- (NSString *)localizedAuthWatchPrompt;
- (NSString *)localizedCallerName;
- (NSString *)localizedSubTitleForMechanisms:(unsigned long long)arg1;
- (void)processAuthenticationSuccessWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)processBiometricMatchWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
