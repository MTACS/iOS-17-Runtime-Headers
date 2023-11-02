
@protocol TITypologyPreferences

@required

- (bool)isTypologyInDatavault;
- (long long)maxBytesPersistedTypologyRecords;
- (long long)maxBytesPersistedTypologyTraceLogs;
- (double)maxLifetimeInterval;
- (unsigned long long)persistenceStrategy;
- (void)setTypologyProfileOptInManager:(id <TITypologyProfileOptInManaging>)arg1;
- (NSURL *)typologyDirectoryURL;
- (bool)typologyLoggingEnabled;
- (bool)typologyLoggingEnabledByProfile;
- (<TITypologyProfileOptInManaging> *)typologyProfileOptInManager;

@end
