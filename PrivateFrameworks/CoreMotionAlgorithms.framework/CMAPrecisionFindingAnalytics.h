
@interface CMAPrecisionFindingAnalytics : NSObject {
    int  _countAcceptedRange;
    int  _countAcceptedRangeDuringRevoke;
    int  _countAcceptedRangeWhileConverging;
    int  _countDM;
    int  _countRawRange;
    int  _countRawRangeDuringRevoke;
    int  _countRawRangeWhileConverging;
    int  _countWristDown;
    int  _countWristUp;
    int  _crown;
    NSNumber * _firstAcceptedRange;
    NSNumber * _meanAcceptedFrequencyQualityDuringRevoke;
    NSNumber * _meanAcceptedRangeFrequencyThroughoutSession;
    NSNumber * _meanAcceptedRangeFrequencyWhileConverging;
    NSNumber * _meanRawRangeFrequencyDuringRevoke;
    NSNumber * _meanRawRangeFrequencyThroughoutSession;
    NSNumber * _meanRawRangeFrequencyWhileConverging;
    NSNumber * _percentOfSessionInWristDown;
    NSNumber * _percentOfSessionInWristUp;
    int  _revokeReason;
    NSNumber * _timeFromFirstRangeToFirstAcceptedRange;
    double  _timestampOfFirstAcceptedRange;
    double  _timestampOfFirstDMSample;
    double  _timestampOfFirstRawRange;
    double  _timestampOfPreviousDMSample;
    double  _timestampOfRecentDMSample;
    double  _totalTimeDuringRevoke;
    bool  _wasFirstArcShown;
    bool  _wasFirstRangeAccepted;
    int  _wrist;
}

@property (nonatomic, retain) NSNumber *firstAcceptedRange;
@property (nonatomic, retain) NSNumber *meanAcceptedFrequencyQualityDuringRevoke;
@property (nonatomic, retain) NSNumber *meanAcceptedRangeFrequencyThroughoutSession;
@property (nonatomic, retain) NSNumber *meanAcceptedRangeFrequencyWhileConverging;
@property (nonatomic, retain) NSNumber *meanRawRangeFrequencyDuringRevoke;
@property (nonatomic, retain) NSNumber *meanRawRangeFrequencyThroughoutSession;
@property (nonatomic, retain) NSNumber *meanRawRangeFrequencyWhileConverging;
@property (nonatomic, retain) NSNumber *percentOfSessionInWristDown;
@property (nonatomic, retain) NSNumber *percentOfSessionInWristUp;
@property (nonatomic, retain) NSNumber *timeFromFirstRangeToFirstAcceptedRange;

- (id)analyticsDictionary;
- (void)dealloc;
- (void)feedAcceptedRange:(struct CMARangeType { double x1; double x2; double x3; double x4; unsigned short x5; })arg1;
- (void)feedDeviceMotion:(struct CMADeviceMotionType { double x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; struct { double x_4_1_1; double x_4_1_2; double x_4_1_3; } x4; })arg1;
- (void)feedRange:(struct CMARangeType { double x1; double x2; double x3; double x4; unsigned short x5; })arg1;
- (void)feedRevokeReason:(int)arg1;
- (void)feedWatchOrientation:(struct CMAWatchOrientationStruct { double x1; int x2; int x3; })arg1;
- (id)firstAcceptedRange;
- (id)init;
- (id)meanAcceptedFrequencyQualityDuringRevoke;
- (id)meanAcceptedRangeFrequencyThroughoutSession;
- (id)meanAcceptedRangeFrequencyWhileConverging;
- (id)meanRawRangeFrequencyDuringRevoke;
- (id)meanRawRangeFrequencyThroughoutSession;
- (id)meanRawRangeFrequencyWhileConverging;
- (id)percentOfSessionInWristDown;
- (id)percentOfSessionInWristUp;
- (void)setFirstAcceptedRange:(id)arg1;
- (void)setMeanAcceptedFrequencyQualityDuringRevoke:(id)arg1;
- (void)setMeanAcceptedRangeFrequencyThroughoutSession:(id)arg1;
- (void)setMeanAcceptedRangeFrequencyWhileConverging:(id)arg1;
- (void)setMeanRawRangeFrequencyDuringRevoke:(id)arg1;
- (void)setMeanRawRangeFrequencyThroughoutSession:(id)arg1;
- (void)setMeanRawRangeFrequencyWhileConverging:(id)arg1;
- (void)setPercentOfSessionInWristDown:(id)arg1;
- (void)setPercentOfSessionInWristUp:(id)arg1;
- (void)setTimeFromFirstRangeToFirstAcceptedRange:(id)arg1;
- (id)timeFromFirstRangeToFirstAcceptedRange;

@end
