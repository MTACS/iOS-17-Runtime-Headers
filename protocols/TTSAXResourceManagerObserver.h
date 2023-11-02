
@protocol TTSAXResourceManagerObserver <NSObject>

@optional

- (void)downloadProgressForVoiceId:(NSString *)arg1 progress:(float)arg2 storageSize:(long long)arg3 requiredDiskSpace:(bool)arg4;
- (void)finishedDeletingResource:(TTSAXResource *)arg1;
- (void)finishedDownloadingResource:(TTSAXResource *)arg1 wasCancelled:(bool)arg2;
- (void)resourceCacheDidReceiveUpdate;

@end
