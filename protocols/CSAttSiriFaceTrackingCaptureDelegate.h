
@protocol CSAttSiriFaceTrackingCaptureDelegate <NSObject>

@optional

- (void)gazeEstimates:(struct CGPoint { double x1; double x2; })arg1 landmarks:(NSDictionary *)arg2;
- (void)gazeTrackerFaceTrackingMetaDataUpdate:(NSDictionary *)arg1 atMachAbsTime:(unsigned long long)arg2;
- (bool)useLegacyGazeModel;

@end
