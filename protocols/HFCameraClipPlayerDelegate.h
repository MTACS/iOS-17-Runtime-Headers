
@protocol HFCameraClipPlayerDelegate <NSObject>

@optional

- (void)clipPlayer:(id <HFCameraClipPlaying>)arg1 didUpdateError:(NSError *)arg2 isFatal:(bool)arg3;
- (void)clipPlayer:(id <HFCameraClipPlaying>)arg1 didUpdateMuted:(bool)arg2;
- (void)clipPlayer:(id <HFCameraClipPlaying>)arg1 didUpdateTimeControlStatus:(long long)arg2;
- (void)clipPlayerDidPlayToEndTime:(id <HFCameraClipPlaying>)arg1;

@end
