
@interface WFAQIScaleCacheManager : NSObject {
    NSMutableDictionary * _aqiScaleCache;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _dataSynchronizationLock;
    WFAQIScale * _defaultScale;
}

@property (nonatomic, readonly) NSMutableDictionary *aqiScaleCache;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } dataSynchronizationLock;
@property (nonatomic, readonly) WFAQIScale *defaultScale;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_persistInfoToDisk;
- (id)_persistedInfoFromDisk;
- (id)_persistedInfoURL;
- (id)aqiScaleCache;
- (id)cachedScaleFromIdentifier:(id)arg1;
- (void)clearCache;
- (struct os_unfair_lock_s { unsigned int x1; })dataSynchronizationLock;
- (id)defaultScale;
- (id)init;
- (void)updateCacheWithScale:(id)arg1 identifier:(id)arg2;

@end
