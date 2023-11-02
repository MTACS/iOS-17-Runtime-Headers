
@protocol BWAudioSourceRecordingReadinessDelegate <NSObject>

@required

- (void)prepareToStartRecordingWithOrientation:(void *)arg1 recordingSettingsID:(void *)arg2 prefersNoInterruptionsByRingtonesAndAlerts:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: int, long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct { long long x1; int x2; unsigned int x3; long long x4; }, long long, void*
- (void)unprepareForRecording;

@end
