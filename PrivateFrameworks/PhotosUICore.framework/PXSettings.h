
@interface PXSettings : PTSettings <PXTapToRadarDiagnosticProvider> {
    NSMutableSet * _archivedSettings;
    NSSet * _cachedTransientProperties;
    bool  _hasUserDefaultsOverrides;
    NSArray * _reparentedRootSettings;
    long long  _version;
}

@property (nonatomic, readonly) bool hasDefaultValues;
@property (nonatomic, readonly) bool hasUserDefaultsOverrides;
@property (nonatomic, readonly) PXSettings *parentSettings;
@property (nonatomic, readonly) NSArray *reparentedRootSettings;
@property (nonatomic) long long version;

+ (id)_defaultsKey;
+ (id)_signatureDictionaryWithDefaultSettings:(id*)arg1;
+ (id)_userDefaults;
+ (id)createSharedInstance;
+ (bool)ignoresKey:(id)arg1;
+ (void)setSuiteName:(id)arg1;
+ (id)sharedInstance;
+ (id)suiteName;
+ (id)transientProperties;

- (void).cxx_destruct;
- (id)_archiveDictionaryWithSignature;
- (void)_resetValuesThatChangedBetweenCurrentDefaultValues:(id)arg1 andArchivedDefaultValues:(id)arg2 defaultSettings:(id)arg3;
- (bool)_setOverrideValuesFromDictionary:(id)arg1;
- (void)_validateArchivableValue:(id)arg1 forKey:(id)arg2;
- (void)_willArchiveSettings:(id)arg1;
- (void)addDeferredKeyObserver:(id)arg1;
- (void)addDeferredKeyPathObserver:(id)arg1;
- (void)addKeyObserver:(id)arg1;
- (void)addKeyPathObserver:(id)arg1;
- (void)applyArchiveValue:(id)arg1 forKey:(id)arg2;
- (id)archiveDictionary;
- (id)archiveValueForKey:(id)arg1;
- (void)clearManualOverrides;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)arg1;
- (void)defaultValueDidChangeForKey:(id)arg1;
- (bool)hasDefaultValues;
- (bool)hasUserDefaultsOverrides;
- (bool)isTransientKey:(id)arg1;
- (bool)isTransientKeyPath:(id)arg1;
- (id)parentSettings;
- (void)performPostSaveActions;
- (void)removeKeyObserver:(id)arg1;
- (void)removeKeyPathObserver:(id)arg1;
- (id)reparentedRootSettings;
- (void)restoreDefaultValues;
- (void)save;
- (void)setVersion:(long long)arg1;
- (bool)suppressesIntrospectionOnCustomerInstalls;
- (long long)version;

@end
