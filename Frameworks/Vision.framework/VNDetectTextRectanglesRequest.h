
@interface VNDetectTextRectanglesRequest : VNImageBasedRequest

@property (nonatomic, copy) NSString *additionalCharacters;
@property (nonatomic) unsigned long long algorithm;
@property (nonatomic) bool detectDiacritics;
@property (nonatomic) bool minimizeFalseDetections;
@property (nonatomic) unsigned long long minimumCharacterPixelHeight;
@property (nonatomic) bool reportCharacterBoxes;
@property (readonly, copy) NSArray *results;
@property (nonatomic, copy) NSString *textRecognition;

+ (Class)configurationClass;
+ (void)initialize;

- (bool)_detectCreditCardTextWithRequestPerformingContext:(id)arg1 requestRevision:(unsigned long long)arg2 error:(id*)arg3;
- (bool)_detectTextWithRequestPerformingContext:(id)arg1 requestRevision:(unsigned long long)arg2 error:(id*)arg3;
- (id)_futharkRecognitionLanguage;
- (id)additionalCharacters;
- (unsigned long long)algorithm;
- (void)applyConfigurationOfRequest:(id)arg1;
- (bool)detectDiacritics;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
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
- (id)supportedComputeStageDevicesAndReturnError:(id*)arg1;
- (id)textRecognition;
- (bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

@end
