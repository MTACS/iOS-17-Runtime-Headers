
@interface REMutableRelevanceEngineConfiguration : RERelevanceEngineConfiguration

@property (nonatomic) bool allowsDiagnosticExtension;
@property (nonatomic) bool allowsRemoteTraining;
@property (nonatomic) bool allowsUpdatingModelFile;
@property (nonatomic, copy) NSURL *baseModelFileURL;
@property (nonatomic, copy) REDataSourceLoader *dataSourceLoader;
@property (nonatomic) bool disableAutomaticContentManagement;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *engineQueue;
@property (nonatomic) bool ignoreDeviceLockState;
@property (nonatomic) bool ignoresInstalledApplications;
@property (nonatomic, retain) RELocationManager *locationManager;
@property (nonatomic, retain) <RERelevanceEngineMetricsRecorder> *metricsRecorder;
@property (nonatomic, copy) NSURL *modelFileURL;
@property (nonatomic) unsigned long long modelStorageBehavior;
@property (nonatomic) unsigned long long modelVersion;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *observerQueue;
@property (nonatomic, copy) NSString *preferenceDomain;
@property (nonatomic, copy) REFeatureSet *primaryFeatures;
@property (nonatomic, copy) RERelevanceProviderManagerLoader *relevanceProviderManagerLoader;
@property (nonatomic) unsigned long long trainingBehavior;
@property (nonatomic) bool wantsBackup;
@property (nonatomic) bool wantsImmutableContent;
@property (nonatomic, copy) NSArray *whitelistedDataSourceClassNames;

+ (id)defaultConfiguration;
+ (id)defaultUpNextConfiguration;
+ (id)sampleUpNextConfiguration;

- (long long)_indexOfInteractionWithName:(id)arg1;
- (long long)_indexOfSectionWithName:(id)arg1;
- (void)addInteractionWithDescriptor:(id)arg1;
- (void)addSectionWithDescriptor:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)insertInteractionWithDescriptor:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertSectionWithDescriptor:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeAllInteractions;
- (void)removeAllSections;
- (void)removeInteractionAtIndex:(unsigned long long)arg1;
- (void)removeSectionAtIndex:(unsigned long long)arg1;
- (void)removeSectionWithName:(id)arg1;
- (void)setAllowsDiagnosticExtension:(bool)arg1;
- (void)setAllowsRemoteTraining:(bool)arg1;
- (void)setAllowsUpdatingModelFile:(bool)arg1;
- (void)setBaseModelFileURL:(id)arg1;
- (void)setDataSourceLoader:(id)arg1;
- (void)setDisableAutomaticContentManagement:(bool)arg1;
- (void)setEngineQueue:(id)arg1;
- (void)setIgnoreDeviceLockState:(bool)arg1;
- (void)setIgnoresInstalledApplications:(bool)arg1;
- (void)setLocationManager:(id)arg1;
- (void)setMetricsRecorder:(id)arg1;
- (void)setModelFileURL:(id)arg1;
- (void)setModelStorageBehavior:(unsigned long long)arg1;
- (void)setModelVersion:(unsigned long long)arg1;
- (void)setObserverQueue:(id)arg1;
- (void)setPreferenceDomain:(id)arg1;
- (void)setPrimaryFeatures:(id)arg1;
- (void)setRelevanceProviderManagerLoader:(id)arg1;
- (void)setTrainingBehavior:(unsigned long long)arg1;
- (void)setWantsBackup:(bool)arg1;
- (void)setWantsImmutableContent:(bool)arg1;

@end
