
@protocol AIAudiogramIngestionEngineDelegate

@required

- (void)audiogramIngestionEngineModelDownloadComplete;
- (void)audiogramIngestionEngineModelDownloadFailed:(NSError *)arg1;
- (void)audiogramIngestionEngineModelDownloadProgressed:(float)arg1;

@end
