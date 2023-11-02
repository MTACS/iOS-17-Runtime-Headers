
@interface ICAuthenticationState : NSObject {
    bool  _authenticatedWithDevicePassword;
    long long  _blockingDeauthenticationCount;
    double  _deauthenticationTimeInterval;
    NSTimer * _deauthenticationTimer;
    NSArray * _deauthenticationTimerRunLoopModes;
    bool  _didAttemptToDeauthenticateWhileBlocked;
    NSMutableDictionary * _objectIDsToMainKey;
}

@property (getter=isAuthenticated, nonatomic, readonly) bool authenticated;
@property (getter=isAuthenticatedWithDevicePassword, nonatomic, readonly) bool authenticatedWithDevicePassword;
@property (getter=isBlockingDeauthentication, nonatomic, readonly) bool blockingDeauthentication;
@property (nonatomic) long long blockingDeauthenticationCount;
@property (nonatomic) double deauthenticationTimeInterval;
@property (nonatomic, retain) NSTimer *deauthenticationTimer;
@property (nonatomic, retain) NSArray *deauthenticationTimerRunLoopModes;
@property (nonatomic, readonly) bool deviceSupportsBiometrics;
@property (nonatomic) bool didAttemptToDeauthenticateWhileBlocked;
@property (nonatomic, readonly) bool hasAuthenticatedObject;
@property (nonatomic, readonly) NSMutableDictionary *objectIDsToMainKey;

+ (double)defaultDeauthenticationTimeInterval;
+ (id)sharedState;

- (void).cxx_destruct;
- (bool)addMainKeyToKeychainForObject:(id)arg1;
- (bool)authenticateAllNotesInAccount:(id)arg1 withPassphrase:(id)arg2;
- (bool)authenticateObject:(id)arg1 withPassphrase:(id)arg2;
- (bool)authenticateObjectWithKeychain:(id)arg1;
- (void)authenticateWithDevicePassword;
- (void)beginBlockingDeauthentication;
- (long long)blockingDeauthenticationCount;
- (id)cachedMainKeyForIdentifier:(id)arg1;
- (id)cachedMainKeyForKeyObject:(id)arg1 decryptingObject:(id)arg2;
- (id)cachedMainKeyForObject:(id)arg1;
- (void)dealloc;
- (void)deauthenticate;
- (void)deauthenticateAllObjects;
- (void)deauthenticateWithDevicePassword;
- (double)deauthenticationTimeInterval;
- (id)deauthenticationTimer;
- (id)deauthenticationTimerRunLoopModes;
- (bool)deviceSupportsBiometrics;
- (bool)didAttemptToDeauthenticateWhileBlocked;
- (void)endBlockingDeauthentication;
- (void)extendDeauthenticationTimer;
- (id)faceIDEnabledKeyForAccountIdentifier:(id)arg1;
- (bool)hasAuthenticatedObject;
- (id)init;
- (bool)isAuthenticated;
- (bool)isAuthenticatedWithDevicePassword;
- (bool)isBiometricsEnabledForAccount:(id)arg1;
- (bool)isBlockingDeauthentication;
- (id)mainKeyFromKeychainForKeyObject:(id)arg1 cipherVersion:(long long)arg2;
- (id)mainKeyFromKeychainForKeyObject:(id)arg1 decryptingObject:(id)arg2 cipherVersion:(long long)arg3;
- (id)mainKeyFromKeychainForObject:(id)arg1;
- (id)mainKeyIdentifierForKeyObject:(id)arg1 cipherVersion:(long long)arg2;
- (id)objectIDsToMainKey;
- (bool)removeAllMainKeysFromKeychain;
- (bool)removeMainKeyFromKeychainForObject:(id)arg1;
- (bool)removeMainKeysFromKeychainForAccount:(id)arg1;
- (void)setBiometricsEnabled:(bool)arg1 forAccount:(id)arg2;
- (void)setBlockingDeauthenticationCount:(long long)arg1;
- (void)setCachedMainKey:(id)arg1 forIdentifier:(id)arg2;
- (bool)setCachedMainKey:(id)arg1 forObject:(id)arg2;
- (void)setDeauthenticationTimeInterval:(double)arg1;
- (void)setDeauthenticationTimer:(id)arg1;
- (void)setDeauthenticationTimerRunLoopModes:(id)arg1;
- (void)setDidAttemptToDeauthenticateWhileBlocked:(bool)arg1;
- (bool)setMainKeyInKeychain:(id)arg1 forObject:(id)arg2;
- (id)touchIDEnabledKeyForAccountIdentifier:(id)arg1;

@end
