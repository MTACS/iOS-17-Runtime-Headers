
@interface BRDaemonConnection : NSXPCConnection {
    bool  _isUsingTokenService;
    NSUUID * _uuid;
}

+ (void)clearURLCache;
+ (void)clearURLCacheForPersonaID:(id)arg1;
+ (id)cloudDocsAppSupportURL;
+ (id)cloudDocsAppSupportURLForPersonaID:(id)arg1 needsPersonaSwitch:(bool)arg2;
+ (id)cloudDocsCachesURL;
+ (id)cloudDocsCachesURLForPersonaID:(id)arg1 needsPersonaSwitch:(bool)arg2;
+ (id)defaultConnection;
+ (id)defaultConnectionForKey:(id)arg1 initializer:(id /* block */)arg2;
+ (id)defaultConnectionIfExists;
+ (id)defaultConnectionIfExistsForKey:(id)arg1;
+ (id)homeDirectoryURL;
+ (id)homeDirectoryURLForPersonaID:(id)arg1 needsPersonaSwitch:(bool)arg2;
+ (void)initialize;
+ (void)invalidateCachedURLProperties;
+ (void)invalidateCachedURLPropertiesForPersonaID:(id)arg1;
+ (id)mobileDocumentsURL;
+ (id)mobileDocumentsURLForPersonaID:(id)arg1 needsPersonaSwitch:(bool)arg2;
+ (id)secondaryConnection;
+ (id)secondaryConnectionForKey:(id)arg1 initializer:(id /* block */)arg2;
+ (id)secondaryConnectionIfExists;
+ (id)secondaryConnectionIfExistsForKey:(id)arg1;
+ (id)syncedDesktopURL;
+ (id)syncedDesktopURLForPersonaID:(id)arg1 needsPersonaSwitch:(bool)arg2;
+ (id)syncedDocumentsURL;
+ (id)syncedDocumentsURLForPersonaID:(id)arg1 needsPersonaSwitch:(bool)arg2;
+ (id)syncedRootURLs;
+ (id)syncedRootURLsForPersonaID:(id)arg1 needsPersonaSwitch:(bool)arg2;

- (void).cxx_destruct;
- (void)_setupAndResumeForKey:(id)arg1;
- (id)initUsingUserLocalDaemon;
- (id)initUsingUserLocalDaemonTokenService;
- (id)newFPFSSyncProxy;
- (id)newLegacySyncProxy;
- (id)newSyncProxy;
- (id)newSyncTokenProxy;

@end
