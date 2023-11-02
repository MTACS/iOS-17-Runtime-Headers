
@interface MIBUTestPreferences : NSObject

+ (id)sharedInstance;

- (bool)factorySUCertExist;
- (id)factorySUCertPath;
- (id)factorySUKeyIsSEP;
- (id)factorySUKeyPath;
- (id)fakeTatsuPayloadPath;
- (id)getValueFromTestPreferencesForKey:(id)arg1;
- (bool)inBoxUpdateMode;
- (id)initialBuddySetupComplete;
- (id)isActivated;
- (id)isOnLockScreen;
- (id)iseTrustCertName;
- (id)iseTrustCertPaths;
- (id)nfcIdleTime;
- (bool)skipCertDeletion;
- (bool)skipDaemonDisable;
- (bool)skipWiFiAssociation;
- (bool)useAppleConnect;
- (bool)useLiveTatsu;
- (id)wifiSSID;

@end
