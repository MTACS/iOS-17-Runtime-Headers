
@interface PredictionsBuffer : NSObject {
    AXPhoenixClassifierConfiguration * _configuration;
    NSMutableArray * _counts;
    NSMutableArray * _predictions;
}

- (void).cxx_destruct;
- (void)addPrediction:(id)arg1;
- (struct { unsigned long long x1; unsigned long long x2; })bestPredictionUsingPolicyOption:(int)arg1;
- (id)description;
- (id)initWithConfiguration:(id)arg1;
- (id)logBuffer;
- (id)predictionCounts;
- (void)reset;

@end
