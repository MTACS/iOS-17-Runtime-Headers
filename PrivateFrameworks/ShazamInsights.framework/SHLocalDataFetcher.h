
@interface SHLocalDataFetcher : NSObject <SHDataFetcher>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)clusterDataAtURL:(id)arg1 forLocation:(id)arg2 date:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)fetchClusterURL:(id)arg1 forCurrentStorefront:(id)arg2 cachedUniqueHash:(id)arg3 completionHandler:(id /* block */)arg4;

@end
