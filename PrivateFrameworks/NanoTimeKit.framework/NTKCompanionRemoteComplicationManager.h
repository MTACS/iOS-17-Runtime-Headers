
@interface NTKCompanionRemoteComplicationManager : NSObject <NTKComplicationCollectionObserver, NTKRemoteComplicationProvider> {
    CLKDevice * _device;
    bool  _fetchingApps;
    NSDictionary * _installedComplications;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _installedComplicationsLock;
    bool  _loaded;
    NTKComplicationCollection * _remoteComplications;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _remoteComplicationsLock;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSDictionary * _syncedComplications;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _syncedComplicationsLock;
    bool  _wantsAppFetch;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CLKDevice *device;
@property (nonatomic) bool fetchingApps;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *installedComplications;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } installedComplicationsLock;
@property (nonatomic) bool loaded;
@property (nonatomic, retain) NTKComplicationCollection *remoteComplications;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } remoteComplicationsLock;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *syncedComplications;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } syncedComplicationsLock;
@property (nonatomic) bool wantsAppFetch;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_activeDeviceChanged;
- (void)_appStartedInstall;
- (void)_fetchInstalledApps;
- (void)_load;
- (void)_queryInstalledApps;
- (void)_queue_reloadApps;
- (void)_reloadApps;
- (id)_safeComplications;
- (id)_safeInstalledComplications;
- (void)complicationCollection:(id)arg1 didRemoveSampleTemplatesForClient:(id)arg2;
- (void)complicationCollection:(id)arg1 didUpdateComplicationDescriptorsForClient:(id)arg2;
- (void)complicationCollection:(id)arg1 didUpdateSampleTemplateForClient:(id)arg2 descriptor:(id)arg3;
- (void)complicationCollectionDidLoad:(id)arg1;
- (void)dealloc;
- (id)device;
- (void)enumerateComplicationDescriptorsForClientIdentifier:(id)arg1 family:(long long)arg2 withBlock:(id /* block */)arg3;
- (void)enumerateEnabledVendorsForComplicationFamily:(long long)arg1 withBlock:(id /* block */)arg2;
- (bool)fetchingApps;
- (id)init;
- (id)installedComplications;
- (struct os_unfair_lock_s { unsigned int x1; })installedComplicationsLock;
- (id)itemIdForVendorWithClientIdentifier:(id)arg1;
- (bool)loaded;
- (id)localizedAppNameForClientIdentifier:(id)arg1;
- (void)notifyAppForClientIdentifier:(id)arg1 ofSharedComplicationDescriptors:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)remoteComplications;
- (struct os_unfair_lock_s { unsigned int x1; })remoteComplicationsLock;
- (id)serialQueue;
- (void)setDevice:(id)arg1;
- (void)setFetchingApps:(bool)arg1;
- (void)setInstalledComplications:(id)arg1;
- (void)setLoaded:(bool)arg1;
- (void)setRemoteComplications:(id)arg1;
- (void)setSerialQueue:(id)arg1;
- (void)setSyncedComplications:(id)arg1;
- (void)setWantsAppFetch:(bool)arg1;
- (id)syncedComplications;
- (struct os_unfair_lock_s { unsigned int x1; })syncedComplicationsLock;
- (bool)vendorExistsWithClientIdentifier:(id)arg1 appBundleIdentifier:(id)arg2;
- (bool)wantsAppFetch;

@end
