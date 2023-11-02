
@interface BYPreferencesController : NSObject {
    NSString * _domain;
    NSMutableDictionary * _preferences;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSString *domain;
@property (nonatomic, retain) NSMutableDictionary *preferences;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)buddyPreferences;
+ (id)buddyPreferencesEphemeral;
+ (id)buddyPreferencesExcludedFromBackup;
+ (id)buddyPreferencesInternal;
+ (void)flushEverything;
+ (id)genericPreferencesEphemeral;
+ (void)persistEverything;
+ (id)randomPreferences;

- (void).cxx_destruct;
- (bool)boolForKey:(id)arg1;
- (id)domain;
- (void)flush;
- (id)init;
- (id)initWithDomain:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKey:(id)arg1 includeCache:(bool)arg2;
- (void)persist;
- (id)preferences;
- (id)queue;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1 onlyFromMemory:(bool)arg2;
- (void)reset;
- (void)setDomain:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 persistImmediately:(bool)arg3;
- (void)setPreferences:(id)arg1;
- (void)setQueue:(id)arg1;

@end
