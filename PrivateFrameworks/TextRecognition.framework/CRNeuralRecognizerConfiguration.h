
@interface CRNeuralRecognizerConfiguration : CRRecognizerConfiguration {
    long long  _batchSize;
    NSURL * _customModelURL;
    NSArray * _customWords;
    bool  _decodeWithLM;
    float  _highConfidenceThreshold;
    double  _inputHeight;
    NSArray * _inputWidths;
    NSString * _locale;
    long long  _maxConcurrentBatches;
    float  _mediumConfidenceThreshold;
    unsigned long long  _paddingMode;
    float  _precisionThreshold;
    CRTitleParameters * _titleParameters;
}

@property (readonly) long long batchSize;
@property (readonly) CRConfidenceThresholds *confidenceThresholds;
@property (readonly) NSURL *customModelURL;
@property (readonly) NSArray *customWords;
@property (readonly) bool decodeWithLM;
@property (readonly) bool filterWithLM;
@property float highConfidenceThreshold;
@property (readonly) double inputHeight;
@property (readonly) NSArray *inputWidths;
@property (readonly) NSString *locale;
@property (readonly) long long maxConcurrentBatches;
@property float mediumConfidenceThreshold;
@property (readonly) unsigned long long paddingMode;
@property (readonly) float precisionThreshold;
@property (readonly) CRTitleParameters *titleParameters;

- (void).cxx_destruct;
- (long long)batchSize;
- (long long)bestFitWidthIndexForAspectRatio:(double)arg1;
- (id)confidenceThresholds;
- (id)customModelURL;
- (id)customWords;
- (bool)decodeWithLM;
- (bool)filterWithLM;
- (float)highConfidenceThreshold;
- (id)initV1DefaultConfigWithOptions:(id)arg1;
- (id)initV2DefaultConfigWithOptions:(id)arg1;
- (id)initV3DefaultConfigWithOptions:(id)arg1;
- (id)initWithLocale:(id)arg1 imageReaderOptions:(id)arg2 error:(id*)arg3;
- (double)inputHeight;
- (id)inputWidths;
- (id)locale;
- (long long)maxConcurrentBatches;
- (float)mediumConfidenceThreshold;
- (unsigned long long)paddingMode;
- (float)precisionThreshold;
- (void)setDefaultConfidenceThresholdsForRevision:(unsigned long long)arg1;
- (void)setHighConfidenceThreshold:(float)arg1;
- (void)setMediumConfidenceThreshold:(float)arg1;
- (id)textFeatureFilter;
- (id)titleParameters;
- (bool)usesAppleNeuralEngine;

@end
