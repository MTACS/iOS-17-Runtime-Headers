
@protocol HFCameraClipVideoAssetContextProviderDelegate <NSObject>

@required

- (HMCameraClipVideoAssetContext *)cachedVideoAssetContextForClip:(HMCameraClip *)arg1 clipManager:(HMCameraClipManager *)arg2;
- (HMCameraClipFetchVideoAssetContextOperation *)newFetchVideoAssetContextOperationForClip:(HMCameraClip *)arg1 clipManager:(HMCameraClipManager *)arg2;

@end
