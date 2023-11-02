
@interface MIInstalledInfoGatherer : NSObject {
    MIExecutableBundle * _builtInAppParallelPlaceholderBundle;
    MIExecutableBundle * _bundle;
    MIBundleContainer * _bundleContainer;
    NSArray * _dataContainers;
    NSString * _owningBundleIdentifier;
    NSURL * _parentBundleURL;
    NSArray * _personaUniqueStrings;
}

@property (nonatomic, readonly) MIExecutableBundle *builtInAppParallelPlaceholderBundle;
@property (nonatomic, readonly) MIExecutableBundle *bundle;
@property (nonatomic, readonly) MIBundleContainer *bundleContainer;
@property (nonatomic, readonly) NSArray *dataContainers;
@property (nonatomic, readonly) NSString *owningBundleIdentifier;
@property (nonatomic, readonly) NSURL *parentBundleURL;
@property (nonatomic, readonly) NSArray *personaUniqueStrings;

- (void).cxx_destruct;
- (id)_buildBundlePersonaRecordWithDataContainer:(id)arg1;
- (void)_fixUpForBuiltInAppParallelPlaceholder;
- (id)_groupContainersDictionaryForPersona:(id)arg1;
- (void)_initWithAppExtensionBundle:(id)arg1 inBundleIdentifier:(id)arg2 dataContainers:(id)arg3;
- (void)_initWithBundle:(id)arg1 dataContainers:(id)arg2;
- (void)_initWithBundleContainer:(id)arg1 dataContainers:(id)arg2;
- (void)_initWithBundleContainer:(id)arg1 forPersonas:(id)arg2;
- (void)_populateAppExtensionRecordValues:(id)arg1;
- (void)_populateAppRecordValues:(id)arg1;
- (bool)_populateBundleRecord:(id)arg1 error:(id*)arg2;
- (bool)_populateBundleRecordValues:(id)arg1 signingInfo:(id)arg2 error:(id*)arg3;
- (void)_populatePlaceholderRecordValues:(id)arg1 signingInfo:(id)arg2;
- (id)_sandboxEnvironmentForDataContainer:(id)arg1;
- (id)_stashedAppRecordForStashedContainer:(id)arg1;
- (id)_staticDiskUsage;
- (id)builtInAppParallelPlaceholderBundle;
- (id)bundle;
- (id)bundleContainer;
- (id)bundleRecordWithError:(id*)arg1;
- (id)dataContainers;
- (id)initWithAppExtensionBundle:(id)arg1 inBundleIdentifier:(id)arg2 dataContainer:(id)arg3;
- (id)initWithAppExtensionBundle:(id)arg1 inBundleIdentifier:(id)arg2 dataContainers:(id)arg3;
- (id)initWithBundle:(id)arg1 dataContainer:(id)arg2;
- (id)initWithBundle:(id)arg1 dataContainers:(id)arg2;
- (id)initWithBundleContainer:(id)arg1 dataContainer:(id)arg2;
- (id)initWithBundleContainer:(id)arg1 dataContainers:(id)arg2;
- (id)initWithBundleContainer:(id)arg1 forPersona:(id)arg2;
- (id)initWithBundleContainer:(id)arg1 forPersonas:(id)arg2;
- (id)owningBundleIdentifier;
- (id)parentBundleURL;
- (id)personaUniqueStrings;

@end
