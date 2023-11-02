
@interface REMLEntropyMetric : NSObject <REMLMetricsProvider> {
    long long  _arrayFeatureIndex;
    unsigned long long  _calibrationCurveNumBuckets;
    NSMutableArray * _calibrationCurveTotal;
    NSMutableArray * _calibrationCurveTrue;
    double  _logScore;
    NSString * _metricName;
    double  _normalizedLogScore;
    long long  _numExamples;
    NSString * _predictionFeatureName;
    double  _sumPrediction;
    double  _sumTruth;
    NSString * _truthFeatureName;
}

- (void).cxx_destruct;
- (unsigned long long)calibrationCurveNumBuckets;
- (id)calibrationCurveTotal;
- (id)calibrationCurveTrue;
- (void)createCheckpoint;
- (double)getDoubleFromFeatureValue:(id)arg1;
- (id)initWithName:(id)arg1 featureName:(id)arg2;
- (id)meanEntropy;
- (id)meanNormalizedEntropy;
- (id)meanPrediction;
- (id)meanTruth;
- (id)name;
- (long long)numberOfExamples;
- (void)reset;
- (void)resetToLastCheckpointBeforeDate:(id)arg1;
- (void)updateMetricsFromFeatures:(id)arg1 prediction:(id)arg2 truth:(id)arg3;

@end
