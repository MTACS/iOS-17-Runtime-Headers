
@interface SNLPPommesServerClassifier : SNLPITFMClassifier {
    float  _confidenceThreshold;
}

@property (nonatomic) float confidenceThreshold;

+ (id /* block */)_initializationBlock;
+ (id)classifierWithPathURL:(id)arg1 error:(id*)arg2;

- (float)confidenceThreshold;
- (id)responseForRequest:(id)arg1 error:(id*)arg2;
- (void)setConfidenceThreshold:(float)arg1;

@end
