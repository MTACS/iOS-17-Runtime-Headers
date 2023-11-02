
@interface GEOUtilityService : NSObject

+ (id)sharedService;

- (id)_getPathSynchronous:(const char *)arg1;
- (void)getCurrentGeoServicesState:(id)arg1 callback:(id /* block */)arg2;
- (id)getGeoServicesCacheDirectoryPath;
- (id)getHomeDirectoryPath;
- (void)sendHeartbeat;

@end
