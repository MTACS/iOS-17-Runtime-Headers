
@interface HFCameraAnalyticsCameraClipExportSessionEvent : HFCameraAnalyticsEvent {
    double  _recordingDuration;
}

@property (nonatomic) double recordingDuration;

- (double)recordingDuration;
- (id)sendEventForState:(unsigned long long)arg1;
- (void)setRecordingDuration:(double)arg1;

@end
