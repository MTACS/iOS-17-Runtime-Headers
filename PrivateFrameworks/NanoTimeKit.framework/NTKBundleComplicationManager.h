
@interface NTKBundleComplicationManager : NSObject {
    NTKBundleComplicationDataSourceLoader * _loader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSDictionary * _lock_infoByBundleIdentifierLookup;
    NTKCompanionBundleComplicationSyncCoordinator * _syncCoordinator;
}

@property (nonatomic, readonly) NTKBundleComplicationDataSourceLoader *loader;
@property (nonatomic, readonly) NTKCompanionBundleComplicationSyncCoordinator *syncCoordinator;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_buildDataSourceInfoLookup;
- (Class)_dataSourceClassForBundleIdentifier:(id)arg1;
- (void)_enumerateBundleInfo:(id /* block */)arg1;
- (id)_infoByBundleIdentifierLookup;
- (id)_infoForBundleIdentifier:(id)arg1;
- (id)allComplicationAppBundleIDs;
- (bool)bundleComplicationExistsForAppBundleIdentifier:(id)arg1;
- (id)bundleComplicationsForBundleIdentifier:(id)arg1;
- (bool)bundleExistsWithIdentifier:(id)arg1 appBundleIdentifier:(id)arg2;
- (Class)dataSourceClassForBundleComplication:(id)arg1;
- (Class)dataSourceClassForBundleComplication:(id)arg1 withFamily:(long long)arg2 andDevice:(id)arg3 factorInMigration:(bool)arg4;
- (void)enumerateBundlesForComplicationFamily:(long long)arg1 device:(id)arg2 withBlock:(id /* block */)arg3;
- (id)groupIdentifierForBundleIdentifier:(id)arg1;
- (id)init;
- (id)loader;
- (id)localizedAppNameForBundleIdentifier:(id)arg1;
- (id)localizedComplicationNameForBundleIdentifier:(id)arg1;
- (id)sectionIdentifierForBundleIdentifier:(id)arg1;
- (id)syncCoordinator;
- (void)updateDescriptors;

@end
