
@interface WFLocationQueryGeocodeCacheManager : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _dataSynchronizationLock;
    double  _expirationTime;
    NSMutableDictionary * _geocodeCache;
}

@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } dataSynchronizationLock;
@property (nonatomic, readonly) double expirationTime;
@property (nonatomic, readonly) NSMutableDictionary *geocodeCache;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_discardExpiredLocations;
- (void)_persistInfoToDisk;
- (id)_persistedInfoFromDisk;
- (id)_persistedInfoURL;
- (id)cachedLocationForKey:(id)arg1;
- (struct os_unfair_lock_s { unsigned int x1; })dataSynchronizationLock;
- (double)expirationTime;
- (id)geocodeCache;
- (id)init;
- (void)updateCacheForKey:(id)arg1 withLocation:(id)arg2;

@end
