
@interface MIPlaceholderConstructor : NSObject {
    NSURL * _bundleURL;
    NSDictionary * _entitlements;
    NSString * _iconFileName;
    <MIPlaceholderConstructorIconGenerator> * _iconGenerator;
    unsigned long long  _iconPreservationLevel;
    NSData * _installSessionUUID;
    NSData * _installUUID;
    NSDictionary * _partialInfoPlist;
    bool  _performPlaceholderInstallActions;
    unsigned long long  _placeholderType;
    NSArray * _pluginPlaceholderConstructors;
    bool  _preserveFullInfoPlist;
    NSURL * _substituteIconFileURL;
}

@property (nonatomic, readonly, copy) NSString *bundleID;
@property (nonatomic, retain) NSURL *bundleURL;
@property (nonatomic, copy) NSDictionary *entitlements;
@property (nonatomic, readonly) MIPlaceholderConstructor *firstNetworkExtension;
@property (nonatomic, retain) NSString *iconFileName;
@property (nonatomic, retain) <MIPlaceholderConstructorIconGenerator> *iconGenerator;
@property (nonatomic) unsigned long long iconPreservationLevel;
@property (nonatomic, retain) NSData *installSessionUUID;
@property (nonatomic, retain) NSData *installUUID;
@property (nonatomic, readonly) bool isLaunchProhibited;
@property (nonatomic, retain) NSDictionary *partialInfoPlist;
@property (nonatomic) bool performPlaceholderInstallActions;
@property (nonatomic) unsigned long long placeholderType;
@property (nonatomic, copy) NSArray *pluginPlaceholderConstructors;
@property (nonatomic) bool preserveFullInfoPlist;
@property (nonatomic, copy) NSURL *substituteIconFileURL;

+ (id)_iconKeys;
+ (id)_infoPlistKeysToLoad;

- (void).cxx_destruct;
- (bool)_constructPluginPlaceholdersForDirectory:(id)arg1 appendingToArray:(id)arg2 bundleType:(unsigned long long)arg3 error:(id*)arg4;
- (bool)_copyInfoPlistLoctableToPlaceholder:(id)arg1 error:(id*)arg2;
- (bool)_copyStringsToPlaceholder:(id)arg1 error:(id*)arg2;
- (id)_entitlementsForPath:(id)arg1 error:(id*)arg2;
- (id)_initWithSource:(id)arg1 byPreservingFullInfoPlist:(bool)arg2 forBundleType:(unsigned long long)arg3 error:(id*)arg4;
- (bool)_introspectWithError:(id*)arg1;
- (bool)_loadPartialInfoPlistWithError:(id*)arg1;
- (bool)_populatePluginPlaceholderConstructorsWithError:(id*)arg1;
- (bool)_transferAndUpdateInstallSessionIDsToPlaceholder:(id)arg1 error:(id*)arg2;
- (bool)_writeIconToPlaceholder:(id)arg1 error:(id*)arg2;
- (bool)_writeInfoPlistToPlaceholder:(id)arg1 withError:(id*)arg2;
- (id)bundleID;
- (id)bundleURL;
- (id)entitlements;
- (id)firstNetworkExtension;
- (id)iconFileName;
- (id)iconGenerator;
- (unsigned long long)iconPreservationLevel;
- (id)initWithSource:(id)arg1 byPreservingFullInfoPlist:(bool)arg2 error:(id*)arg3;
- (id)installSessionUUID;
- (id)installUUID;
- (bool)isLaunchProhibited;
- (bool)materializeIntoBundleDirectory:(id)arg1 error:(id*)arg2;
- (id)partialInfoPlist;
- (bool)performPlaceholderInstallActions;
- (unsigned long long)placeholderType;
- (id)pluginPlaceholderConstructors;
- (bool)preserveFullInfoPlist;
- (void)setBundleURL:(id)arg1;
- (void)setEntitlements:(id)arg1;
- (void)setIconFileName:(id)arg1;
- (void)setIconGenerator:(id)arg1;
- (void)setIconPreservationLevel:(unsigned long long)arg1;
- (void)setInstallSessionUUID:(id)arg1;
- (void)setInstallUUID:(id)arg1;
- (void)setPartialInfoPlist:(id)arg1;
- (void)setPerformPlaceholderInstallActions:(bool)arg1;
- (void)setPlaceholderType:(unsigned long long)arg1;
- (void)setPluginPlaceholderConstructors:(id)arg1;
- (void)setPreserveFullInfoPlist:(bool)arg1;
- (void)setSubstituteIconFileURL:(id)arg1;
- (id)substituteIconFileURL;

@end
