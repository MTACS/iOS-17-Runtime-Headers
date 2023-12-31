
@protocol TKVibrationRecorderTouchSurfaceDelegate <NSObject>

@required

- (void)vibrationComponentDidEndForVibrationRecorderTouchSurface:(TKVibrationRecorderTouchSurface *)arg1;
- (void)vibrationComponentDidStartForVibrationRecorderTouchSurface:(TKVibrationRecorderTouchSurface *)arg1;
- (void)vibrationRecorderTouchSurface:(TKVibrationRecorderTouchSurface *)arg1 didExitRecordingModeWithContextObject:(id)arg2;
- (bool)vibrationRecorderTouchSurfaceDidEnterRecordingMode:(TKVibrationRecorderTouchSurface *)arg1;
- (void)vibrationRecorderTouchSurfaceDidFinishReplayingVibration:(TKVibrationRecorderTouchSurface *)arg1;

@end
