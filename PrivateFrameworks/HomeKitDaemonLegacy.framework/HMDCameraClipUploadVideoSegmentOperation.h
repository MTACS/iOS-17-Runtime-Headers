
@interface HMDCameraClipUploadVideoSegmentOperation : HMDCameraClipAppendStreamingAssetOperation

+ (unsigned long long)cameraClipOperationType;
+ (id)logCategory;
+ (id)metadataPropertyName;
+ (bool)shouldRetry;
+ (id)streamingAssetPropertyName;

@end
