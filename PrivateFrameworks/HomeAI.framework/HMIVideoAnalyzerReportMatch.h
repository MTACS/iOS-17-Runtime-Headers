
@interface HMIVideoAnalyzerReportMatch : HMFObject {
    NSNumber * _prediction;
    float  _score;
    NSNumber * _truth;
}

@property (readonly) NSNumber *prediction;
@property (readonly) float score;
@property (readonly) NSNumber *truth;

- (void).cxx_destruct;
- (id)initWithTruth:(id)arg1 prediction:(id)arg2 score:(float)arg3;
- (id)prediction;
- (float)score;
- (id)truth;

@end
