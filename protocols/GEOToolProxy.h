
@protocol GEOToolProxy

@required

- (unsigned long long)calculatePurgableSpaceForUrgency:(int)arg1;
- (void)fetchOfflineMetadataWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSDate *, void*
- (bool)flushPurgeableOfflineData;
- (void)forceProactiveTileDownloaderRun;
- (unsigned long long)freePurgableSpace:(unsigned long long)arg1 forUrgency:(int)arg2;
- (id)getDefault:(NSString *)arg1 source:(long long*)arg2;
- (void)invalidateTileCache;
- (bool)isProactiveTileDownloadEnabled;
- (NSDictionary *)listFilePathsLocal;
- (NSDictionary *)listFilePathsRemote;
- (void)lockDBs;
- (bool)notifyNetworkDefaultsChanged;
- (NSString *)ping;
- (void)unlockDBs;

@end
