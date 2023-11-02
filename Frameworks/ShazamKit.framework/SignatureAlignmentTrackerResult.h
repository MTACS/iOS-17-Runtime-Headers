
@interface SignatureAlignmentTrackerResult : NSObject {
    float  _confidence;
    double  _queryEnd;
    double  _queryStart;
    double  _referenceEnd;
    double  _referenceStart;
}

@property (nonatomic, readonly) float confidence;
@property (nonatomic, readonly) double queryEnd;
@property (nonatomic, readonly) double queryStart;
@property (nonatomic, readonly) double referenceEnd;
@property (nonatomic, readonly) double referenceStart;

- (float)confidence;
- (id)initWithQueryStart:(double)arg1 queryEnd:(double)arg2 referenceStart:(double)arg3 referenceEnd:(double)arg4 confidence:(float)arg5;
- (double)queryEnd;
- (double)queryStart;
- (double)referenceEnd;
- (double)referenceStart;

@end
