
@protocol CSAttSiriServiceProtocol <NSObject>

@required

- (void)gazeTrackerFaceTrackingMetaDataUpdate:(NSDictionary *)arg1 atMachAbsTime:(unsigned long long)arg2;
- (void)siriRequestProcessingCompleted;
- (void)startAttendingWithContext:(CSAttSiriRequestContext *)arg1;
- (void)stopAttendingWithContext:(CSAttSiriRequestContext *)arg1;
- (void)updateSiriOrbLocation:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@optional

- (void)gazeEstimates:(struct CGPoint { double x1; double x2; })arg1 landmarks:(NSDictionary *)arg2;

@end
