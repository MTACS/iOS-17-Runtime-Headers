
@interface WFAirQualityProviderAttributionManager : NSObject {
    NSMutableDictionary * _attributionCache;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _dataSynchronizationLock;
}

@property (nonatomic, retain) NSMutableDictionary *attributionCache;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } dataSynchronizationLock;
@property (nonatomic, readonly) WFAirQualityProviderAttribution *defaultProviderAttribution;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)attributionCache;
- (id)cachedAttributionForProvider:(id)arg1;
- (struct os_unfair_lock_s { unsigned int x1; })dataSynchronizationLock;
- (id)defaultProviderAttribution;
- (id)init;
- (void)loadAttributionForProvider:(id)arg1 completion:(id /* block */)arg2;
- (id)p_archivedDataForProviderAttribution:(id)arg1;
- (void)p_updateCacheWithProviderAttribution:(id)arg1;
- (void)registerProviderAttribution:(id)arg1;
- (void)setAttributionCache:(id)arg1;
- (void)setDataSynchronizationLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;

@end
