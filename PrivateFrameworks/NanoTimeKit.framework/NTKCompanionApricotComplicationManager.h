
@interface NTKCompanionApricotComplicationManager : NSObject <CLKComplicationWidgetMigrationDataSource, NTKApricotComplicationProvider, NTKComplicationCollectionObserver> {
    CLKDevice * _device;
    bool  _loaded;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSDictionary * _lock_appLookup;
    bool  _lock_appsLoaded;
    NSMutableDictionary * _lock_clientToRecords;
    bool  _lock_collectionLoaded;
    NTKComplicationCollection * _lock_complicationCollection;
    NSMapTable * _lock_descriptorToRecord;
    bool  _lock_fetchingApps;
    NSMutableArray * _lock_loadCompletionBlocks;
    bool  _lock_wantsAppFetch;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool loaded;
@property (readonly) Class superclass;

+ (id)instanceForDevice:(id)arg1;

- (void).cxx_destruct;
- (void)_fetchInstalledApps;
- (id)_lock_sampleTemplateForWidget:(id)arg1 family:(long long)arg2;
- (void)_lock_updateAppNames;
- (void)_lock_updateAppNamesForClientIdentifer:(id)arg1;
- (void)_lock_updateRecordsForAllClients;
- (void)_lock_updateRecordsForClientIdentifier:(id)arg1;
- (void)_setAppLookup:(id)arg1;
- (void)_setup;
- (void)_updateInstalledApps;
- (void)_updateLoaded;
- (id)cachedWidgetMigrationForClientIdentifier:(id)arg1 descriptor:(id)arg2;
- (void)complicationCollection:(id)arg1 didUpdateComplicationDescriptorsForClient:(id)arg2;
- (void)complicationCollection:(id)arg1 didUpdateSampleTemplateForClient:(id)arg2 descriptor:(id)arg3;
- (void)complicationCollectionDidLoad:(id)arg1;
- (void)complicationCollectionDidReload:(id)arg1;
- (void)enumerateDescriptorsCompatibleWithFamilies:(id)arg1 withBlock:(id /* block */)arg2;
- (id)infoForDescriptor:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (void)loadWidgetMigrationsForClientIdentifier:(id)arg1 descriptor:(id)arg2 completion:(id /* block */)arg3;
- (bool)loaded;
- (void)performAfterLoad:(id /* block */)arg1;
- (id)sampleTemplateForWidget:(id)arg1 family:(long long)arg2;
- (bool)vendorExistsForContainerBundleIdentifier:(id)arg1;
- (bool)vendorExistsWithDescriptor:(id)arg1;

@end
