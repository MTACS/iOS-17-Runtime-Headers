
@protocol CAMStorageContainer <NSObject>

@required

- (double)availableRecordingTimeInSecondsForGraphConfiguration:(CAMCaptureGraphConfiguration *)arg1;
- (<CAMPurgeableStorageContainerDelegate> *)delegate;
- (CAMCaptureGraphConfiguration *)graphConfiguration;
- (bool)hasDiskSpaceToAllowCaptureWithConfiguration:(CAMCaptureGraphConfiguration *)arg1 allowPurging:(bool)arg2;
- (bool)hasDiskSpaceToAllowCaptureWithConfiguration:(CAMCaptureGraphConfiguration *)arg1 allowPurging:(bool)arg2 verbose:(bool)arg3;
- (long long)minimumDiskUsageThresholdInBytesForGraphConfiguration:(CAMCaptureGraphConfiguration *)arg1;
- (void)setDelegate:(id <CAMPurgeableStorageContainerDelegate>)arg1;
- (void)setGraphConfiguration:(CAMCaptureGraphConfiguration *)arg1;
- (long long)totalFreeBytes;

@end
