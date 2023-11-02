
@interface AXMTextDetectionOptions : NSObject <NSSecureCoding> {
    double  _normalizedMinimumTextHeightRatio;
    unsigned long long  _postProcessingOptions;
    unsigned long long  _recognitionLevel;
    NSArray * _textDetectionLocales;
    bool  _usesLanguageCorrection;
}

@property (nonatomic) double normalizedMinimumTextHeightRatio;
@property (nonatomic) unsigned long long postProcessingOptions;
@property (nonatomic) unsigned long long recognitionLevel;
@property (nonatomic, readonly) bool shouldApplySemanticTextFiltering;
@property (nonatomic, retain) NSArray *textDetectionLocales;
@property (nonatomic) bool usesLanguageCorrection;

+ (id)defaultOptions;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)normalizedMinimumTextHeightRatio;
- (unsigned long long)postProcessingOptions;
- (unsigned long long)recognitionLevel;
- (void)setNormalizedMinimumTextHeightRatio:(double)arg1;
- (void)setPostProcessingOptions:(unsigned long long)arg1;
- (void)setRecognitionLevel:(unsigned long long)arg1;
- (void)setTextDetectionLocales:(id)arg1;
- (void)setUsesLanguageCorrection:(bool)arg1;
- (bool)shouldApplySemanticTextFiltering;
- (id)textDetectionLocales;
- (bool)usesLanguageCorrection;

@end
