
@protocol HFCameraVideoDownloader <NSObject>

@required

- (HFCameraVideoDownloadOperation *)downloadOperationForClip:(HMCameraClip *)arg1;
- (HFCameraVideoDownloadOperation *)priorityDownloadOperationForClip:(HMCameraClip *)arg1;

@end
