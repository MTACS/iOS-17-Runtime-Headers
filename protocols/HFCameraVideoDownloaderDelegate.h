
@protocol HFCameraVideoDownloaderDelegate <NSObject>

@optional

- (void)didDownloadVideoFileForClip:(HMCameraClip *)arg1 toURL:(NSURL *)arg2;
- (void)downloadProgress:(unsigned long long)arg1 forClip:(HMCameraClip *)arg2;
- (void)failedToDownloadVideoFileForClip:(HMCameraClip *)arg1;
- (void)foundVideoFileForClip:(HMCameraClip *)arg1 atURL:(NSURL *)arg2;

@end
