
@interface VKAnalysisExecutionDurations : NSObject {
    double  _madDocumentDuration;
    double  _madMRCDuration;
    double  _madRectangleDuration;
    double  _madRoundTripAnalysisDuration;
    double  _madVisualSearchDuration;
    double  _mrcParseDuration;
}

@property (nonatomic) double madDocumentDuration;
@property (nonatomic) double madMRCDuration;
@property (nonatomic) double madRectangleDuration;
@property (nonatomic) double madRoundTripAnalysisDuration;
@property (nonatomic) double madVisualSearchDuration;
@property (nonatomic) double mrcParseDuration;

- (double)madDocumentDuration;
- (double)madMRCDuration;
- (double)madRectangleDuration;
- (double)madRoundTripAnalysisDuration;
- (double)madVisualSearchDuration;
- (double)mrcParseDuration;
- (void)setMadDocumentDuration:(double)arg1;
- (void)setMadMRCDuration:(double)arg1;
- (void)setMadRectangleDuration:(double)arg1;
- (void)setMadRoundTripAnalysisDuration:(double)arg1;
- (void)setMadVisualSearchDuration:(double)arg1;
- (void)setMrcParseDuration:(double)arg1;

@end
