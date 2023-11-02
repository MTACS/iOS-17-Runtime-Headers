
@interface TITypologyPreferences : NSObject <TITypologyPreferences> {
    <TITypologyProfileOptInManaging> * _typologyProfileOptInManager;
}

@property (nonatomic, readonly) bool isTypologyInDatavault;
@property (nonatomic, readonly) long long maxBytesPersistedTypologyRecords;
@property (nonatomic, readonly) long long maxBytesPersistedTypologyTraceLogs;
@property (nonatomic, readonly) double maxLifetimeInterval;
@property (nonatomic, readonly) unsigned long long persistenceStrategy;
@property (nonatomic, readonly) NSURL *typologyDirectoryURL;
@property (nonatomic, readonly) bool typologyLoggingEnabled;
@property (nonatomic, readonly) bool typologyLoggingEnabledByProfile;
@property (nonatomic) <TITypologyProfileOptInManaging> *typologyProfileOptInManager;

- (void).cxx_destruct;
- (bool)_typologyLoggingEnabledByInternalPreference;
- (bool)_typologyLoggingEnabledByProfile;
- (bool)isTypologyInDatavault;
- (long long)maxBytesPersistedTypologyRecords;
- (long long)maxBytesPersistedTypologyTraceLogs;
- (double)maxLifetimeInterval;
- (unsigned long long)persistenceStrategy;
- (void)setTypologyProfileOptInManager:(id)arg1;
- (id)typologyDirectoryURL;
- (bool)typologyLoggingEnabled;
- (bool)typologyLoggingEnabledByProfile;
- (id)typologyProfileOptInManager;

@end
