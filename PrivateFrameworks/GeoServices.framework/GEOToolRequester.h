
@interface GEOToolRequester : NSObject <GEOToolProxy>

+ (id)sharedRequester;

- (unsigned long long)calculatePurgableSpaceForUrgency:(int)arg1;
- (void)fetchOfflineMetadataWithCompletionHandler:(id /* block */)arg1;
- (bool)flushPurgeableOfflineData;
- (void)forceProactiveTileDownloaderRun;
- (unsigned long long)freePurgableSpace:(unsigned long long)arg1 forUrgency:(int)arg2;
- (id)getDefault:(id)arg1 source:(long long*)arg2;
- (void)invalidateTileCache;
- (bool)isProactiveTileDownloadEnabled;
- (id)listFilePathsLocal;
- (id)listFilePathsRemote;
- (void)lockDBs;
- (bool)notifyNetworkDefaultsChanged;
- (id)ping;
- (void)unlockDBs;

@end
