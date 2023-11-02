
@interface CREngineFast : NSObject <CREngine> {
    CRLanguageCorrection * _languageCorrection;
    CRPerformanceStatistics * _languageCorrectionStats;
    NSDictionary * _options;
    unsigned long long  _revision;
    bool  _shouldCancel;
    CRPerformanceStatistics * _textRecognitionStats;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CRLanguageCorrection *languageCorrection;
@property (retain) CRPerformanceStatistics *languageCorrectionStats;
@property (retain) NSDictionary *options;
@property unsigned long long revision;
@property bool shouldCancel;
@property (readonly) Class superclass;
@property (retain) CRPerformanceStatistics *textRecognitionStats;

+ (struct CGSize { double x1; double x2; })detectorImageSizeForOptions:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;
+ (bool)preheatModelsForOptions:(id)arg1 revision:(long long)arg2 error:(id*)arg3;
+ (id)supportedComputeDevicesForRevision:(long long)arg1;
+ (id)supportedLanguagesForRevision:(long long)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)applyLanguageCorrectionToResults:(id)arg1 image:(id)arg2 latticeResults:(id*)arg3 progressHandler:(id /* block */)arg4;
- (void)cancel;
- (id)computeDevice;
- (id)filterResultsForTextFeatures:(id)arg1;
- (float)highConfidenceThreshold;
- (id)initWithOptions:(id)arg1 error:(id*)arg2;
- (id)languageCorrection;
- (id)languageCorrectionStats;
- (bool)lmValidateProbability:(id)arg1 options:(id)arg2;
- (float)mediumConfidenceThreshold;
- (bool)noLMValidateProbability:(id)arg1 options:(id)arg2;
- (id)options;
- (id)resultDocumentInImage:(id)arg1 options:(id)arg2 trackingSession:(id)arg3 withProgressHandler:(id /* block */)arg4 error:(id*)arg5;
- (unsigned long long)revision;
- (void)setLanguageCorrection:(id)arg1;
- (void)setLanguageCorrectionStats:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setRevision:(unsigned long long)arg1;
- (void)setShouldCancel:(bool)arg1;
- (void)setTextRecognitionStats:(id)arg1;
- (bool)shouldCancel;
- (struct CGSize { double x1; double x2; })smallestImageSizeForTextWithRelativeHeight:(double)arg1 originalImageSize:(struct CGSize { double x1; double x2; })arg2;
- (unsigned long long)subfeatureOutputType;
- (id)textRecognitionStats;
- (id)thresholdsForTextRegion:(id)arg1 withLocale:(id)arg2;
- (bool)validateProbability:(id)arg1 validRangeMin:(double)arg2 validRangeMax:(double)arg3 options:(id)arg4;

@end
