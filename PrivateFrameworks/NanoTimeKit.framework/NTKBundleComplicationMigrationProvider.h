
@interface NTKBundleComplicationMigrationProvider : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cachesLock;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _typeMigrationCaches;
}

+ (id)cachedInstance;

- (void).cxx_destruct;
- (id)_cachedLookupForDevice:(id)arg1;
- (void)_fetchTypeLookupForDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleDeviceDidUpdate:(id)arg1;
- (id)_loadMigrationCacheForDevice:(id)arg1;
- (void)_regenerateTypeLookupForDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)ensureTypeLookupForDevice:(id)arg1 completion:(id /* block */)arg2;
- (bool)hasTypeLookupForDevice:(id)arg1;
- (id)init;
- (id)migratedComplicationFromType:(unsigned long long)arg1 family:(long long)arg2 device:(id)arg3;
- (void)serviceRequest:(id)arg1 completion:(id /* block */)arg2;

@end
