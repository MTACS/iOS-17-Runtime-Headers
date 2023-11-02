
@interface PowerUIRelevantDrainPredictionResult : NSObject {
    double  _confidence;
    bool  _significantDrainAhead;
    double  _threshold;
}

@property (nonatomic) double confidence;
@property (nonatomic) bool significantDrainAhead;
@property (nonatomic) double threshold;

- (double)confidence;
- (id)description;
- (id)init;
- (void)setConfidence:(double)arg1;
- (void)setSignificantDrainAhead:(bool)arg1;
- (void)setThreshold:(double)arg1;
- (bool)significantDrainAhead;
- (double)threshold;

@end
