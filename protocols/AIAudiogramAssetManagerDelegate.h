
@protocol AIAudiogramAssetManagerDelegate

@required

- (void)modelDidUpdate:(NSURL *)arg1 assetProperties:(NSDictionary *)arg2 assetVersion:(unsigned long long)arg3 withError:(NSError *)arg4;
- (void)modelDownloadProgressDidUpdate:(float)arg1;

@end
