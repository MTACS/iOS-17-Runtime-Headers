
@protocol HMCameraClipManagerObserver <NSObject>

@optional

- (void)clipManager:(HMCameraClipManager *)arg1 didRemoveClipsWithUUIDs:(NSSet *)arg2;
- (void)clipManager:(HMCameraClipManager *)arg1 didRemoveSignificantEventsWithUUIDs:(NSSet *)arg2;
- (void)clipManager:(HMCameraClipManager *)arg1 didUpdateClips:(NSSet *)arg2;
- (void)clipManager:(HMCameraClipManager *)arg1 didUpdateSignificantEvents:(NSSet *)arg2;

@end
