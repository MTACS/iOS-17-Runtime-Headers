
@interface OSLogPreferencesManager : NSObject {
    NSString * _name;
    NSMutableDictionary * _prefs;
    NSString * _prefsFile;
}

@property (nonatomic) long long enabledLevel;
@property (nonatomic) long long persistedLevel;
@property (nonatomic, readonly) NSArray *processes;
@property (nonatomic, readonly) NSArray *subsystems;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_levelPrefs;
- (long long)enabledLevel;
- (id)init;
- (long long)persistedLevel;
- (id)processes;
- (void)reset;
- (void)resetAll;
- (void)resetAllProcesses;
- (void)resetAllSubsystems;
- (void)setEnabledLevel:(long long)arg1;
- (void)setPersistedLevel:(long long)arg1;
- (id)subsystems;

@end
