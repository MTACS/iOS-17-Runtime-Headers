
@protocol CLSAssetDownloadProgressNotifiable <CLSClientCancelable>

@required

- (oneway void)clientRemote_downloadCompleted:(bool)arg1 error:(NSError *)arg2;
- (oneway void)clientRemote_downloadProgressFraction:(double)arg1 error:(NSError *)arg2;

@end
