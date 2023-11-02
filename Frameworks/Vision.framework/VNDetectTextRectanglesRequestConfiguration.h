
@interface VNDetectTextRectanglesRequestConfiguration : VNImageBasedRequestConfiguration {
    NSString * _additionalCharacters;
    unsigned long long  _algorithm;
    bool  _detectDiacritics;
    bool  _minimizeFalseDetections;
    unsigned long long  _minimumCharacterPixelHeight;
    bool  _reportCharacterBoxes;
    NSString * _textRecognition;
}

@property (nonatomic, copy) NSString *additionalCharacters;
@property (nonatomic) unsigned long long algorithm;
@property (nonatomic) bool detectDiacritics;
@property (nonatomic) bool minimizeFalseDetections;
@property (nonatomic) unsigned long long minimumCharacterPixelHeight;
@property (nonatomic) bool reportCharacterBoxes;
@property (nonatomic, copy) NSString *textRecognition;

- (void).cxx_destruct;
- (id)additionalCharacters;
- (unsigned long long)algorithm;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)detectDiacritics;
- (id)initWithRequestClass:(Class)arg1;
- (bool)minimizeFalseDetections;
- (unsigned long long)minimumCharacterPixelHeight;
- (bool)reportCharacterBoxes;
- (void)setAdditionalCharacters:(id)arg1;
- (void)setAlgorithm:(unsigned long long)arg1;
- (void)setDetectDiacritics:(bool)arg1;
- (void)setMinimizeFalseDetections:(bool)arg1;
- (void)setMinimumCharacterPixelHeight:(unsigned long long)arg1;
- (void)setReportCharacterBoxes:(bool)arg1;
- (void)setTextRecognition:(id)arg1;
- (id)textRecognition;

@end
