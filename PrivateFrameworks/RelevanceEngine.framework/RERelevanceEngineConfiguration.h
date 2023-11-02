
@interface RERelevanceEngineConfiguration : NSObject <NSCopying, NSMutableCopying, REAutomaticExportedInterface> {
    NSMutableDictionary * _values;
    NSArray * _whitelistedDataSourceClassNames;
}

@property (nonatomic, readonly) bool allowsDiagnosticExtension;
@property (nonatomic, readonly) bool allowsRemoteTraining;
@property (nonatomic, readonly) bool allowsUpdatingModelFile;
@property (nonatomic, readonly, copy) NSURL *baseModelFileURL;
@property (nonatomic, readonly, copy) REDataSourceLoader *dataSourceLoader;
@property (nonatomic, readonly) bool disableAutomaticContentManagement;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *engineQueue;
@property (nonatomic, readonly) bool ignoreDeviceLockState;
@property (nonatomic, readonly) bool ignoresInstalledApplications;
@property (nonatomic, readonly, copy) NSArray *interactionDescriptors;
@property (nonatomic, readonly) RELocationManager *locationManager;
@property (nonatomic, readonly) <RERelevanceEngineMetricsRecorder> *metricsRecorder;
@property (nonatomic, readonly, copy) NSURL *modelFileURL;
@property (nonatomic, readonly) unsigned long long modelStorageBehavior;
@property (nonatomic, readonly) unsigned long long modelVersion;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *observerQueue;
@property (nonatomic, readonly) NSString *preferenceDomain;
@property (nonatomic, readonly, copy) REFeatureSet *primaryFeatures;
@property (nonatomic, readonly, copy) RERelevanceProviderManagerLoader *relevanceProviderManagerLoader;
@property (nonatomic, readonly, copy) NSArray *sectionDescriptors;
@property (nonatomic, readonly) unsigned long long trainingBehavior;
@property (nonatomic, readonly) bool wantsBackup;
@property (nonatomic, readonly) bool wantsImmutableContent;
@property (nonatomic, readonly, copy) NSArray *whitelistedDataSourceClassNames;

+ (id)_defaultModelFileURL;
+ (id)defaultConfiguration;
+ (id)defaultUpNextConfiguration;
+ (id)sampleUpNextConfiguration;

- (void).cxx_destruct;
- (bool)allowsDiagnosticExtension;
- (bool)allowsRemoteTraining;
- (bool)allowsUpdatingModelFile;
- (id)baseModelFileURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataSourceLoader;
- (id)description;
- (id)descriptionWithIndent:(unsigned long long)arg1;
- (bool)disableAutomaticContentManagement;
- (id)engineQueue;
- (unsigned long long)hash;
- (bool)ignoreDeviceLockState;
- (bool)ignoresInstalledApplications;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)interactionDescriptors;
- (bool)isEqual:(id)arg1;
- (id)locationManager;
- (id)metricsRecorder;
- (id)modelFileURL;
- (unsigned long long)modelStorageBehavior;
- (unsigned long long)modelVersion;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)observerQueue;
- (id)preferenceDomain;
- (id)primaryFeatures;
- (id)relevanceProviderManagerLoader;
- (id)sectionDescriptors;
- (void)setValue:(id)arg1 forKey:(id)arg2 ofClass:(Class)arg3;
- (unsigned long long)trainingBehavior;
- (id)valueForKey:(id)arg1 ofClass:(Class)arg2 defaultValue:(id)arg3;
- (bool)wantsBackup;
- (bool)wantsImmutableContent;
- (id)whitelistedDataSourceClassNames;

@end
