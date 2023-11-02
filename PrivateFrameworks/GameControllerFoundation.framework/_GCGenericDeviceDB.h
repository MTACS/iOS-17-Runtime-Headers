
@interface _GCGenericDeviceDB : NSObject <_GCGenericDeviceDBService, _GCGenericDeviceDBServiceXPCInterface> {
    _GCConfigurationBundleLocator * _configurationBundleLocator;
    NSObject<OS_dispatch_source> * _configurationBundleLocatorUpdatedSource;
    _GCDeviceOnDiskDB * _onDiskDB;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_workloop> * _workloop;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configurationBundlesDidChange:(id)arg1;
- (bool)_onqueue_updateConfigurationBundles;
- (id)configurationBundles;
- (void)dealloc;
- (id)hasModelForDevice:(id)arg1;
- (void)hasModelForDevice:(id)arg1 reply:(id /* block */)arg2;
- (id)init;
- (id)initWithProvider:(id)arg1;
- (id)modelForDevice:(id)arg1;
- (id)preparedModelForDevice:(id)arg1;
- (id)preparedModelForDevice:(id)arg1 error:(id*)arg2;
- (void)preparedModelForDevice:(id)arg1 reply:(id /* block */)arg2;

@end
