
@interface MADVIDocumentRecognitionRequest : MADRequest {
    NSArray * _languages;
    unsigned long long  _maximumCandidateCount;
    float  _minimumTextHeight;
    long long  _recognitionLevel;
    bool  _usesFormFieldDetection;
    bool  _usesLanguageCorrection;
    bool  _usesLanguageDetection;
}

@property (nonatomic, copy) NSArray *languages;
@property (nonatomic) unsigned long long maximumCandidateCount;
@property (nonatomic) float minimumTextHeight;
@property (nonatomic) long long recognitionLevel;
@property (nonatomic) bool usesFormFieldDetection;
@property (nonatomic) bool usesLanguageCorrection;
@property (nonatomic) bool usesLanguageDetection;

+ (bool)supportsSecureCoding;
+ (unsigned long long)targetResolution;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLanguages:(id)arg1;
- (id)languages;
- (unsigned long long)maximumCandidateCount;
- (float)minimumTextHeight;
- (long long)recognitionLevel;
- (void)setLanguages:(id)arg1;
- (void)setMaximumCandidateCount:(unsigned long long)arg1;
- (void)setMinimumTextHeight:(float)arg1;
- (void)setRecognitionLevel:(long long)arg1;
- (void)setUsesFormFieldDetection:(bool)arg1;
- (void)setUsesLanguageCorrection:(bool)arg1;
- (void)setUsesLanguageDetection:(bool)arg1;
- (bool)usesFormFieldDetection;
- (bool)usesLanguageCorrection;
- (bool)usesLanguageDetection;

@end
