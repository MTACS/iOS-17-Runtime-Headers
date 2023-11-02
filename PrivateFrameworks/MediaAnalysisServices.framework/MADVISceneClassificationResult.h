
@interface MADVISceneClassificationResult : MADResult {
    NSArray * _classificationObservations;
    NSArray * _nsfwObservations;
    NSArray * _recognizedObjectObservations;
    NSArray * _saliencyObservations;
    NSArray * _significantEventObservations;
}

@property (nonatomic, readonly) NSArray *classificationObservations;
@property (readonly) unsigned long long executionNanoseconds;
@property (readonly) double executionTimeInterval;
@property (nonatomic, readonly) NSArray *nsfwObservations;
@property (nonatomic, readonly) NSArray *recognizedObjectObservations;
@property (nonatomic, readonly) NSArray *saliencyObservations;
@property (nonatomic, readonly) NSArray *significantEventObservations;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)classificationObservations;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)executionNanoseconds;
- (double)executionTimeInterval;
- (id)initWithCoder:(id)arg1;
- (id)nsfwObservations;
- (id)recognizedObjectObservations;
- (id)saliencyObservations;
- (void)setClassificationObservations:(id)arg1;
- (void)setNSFWObservations:(id)arg1;
- (void)setRecognizedObjectObservations:(id)arg1;
- (void)setSaliencyObservations:(id)arg1;
- (void)setSignificantEventObservations:(id)arg1;
- (id)significantEventObservations;

@end
