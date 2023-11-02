
@protocol HFCameraClipQueuableItem <NSObject>

@required

- (HMCameraClip *)clip;
- (bool)isPlayable;

@end
