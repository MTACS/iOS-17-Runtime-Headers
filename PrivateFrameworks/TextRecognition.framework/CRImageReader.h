
@interface CRImageReader : NSObject {
    NSObject<CREngine> * _engine;
    NSArray * _outputObjectTypes;
    bool  _shouldCancel;
    NSDictionary * _userOptions;
}

@property (nonatomic, retain) NSObject<CREngine> *engine;
@property (copy) NSArray *outputObjectTypes;
@property bool shouldCancel;
@property (nonatomic, retain) NSDictionary *userOptions;

+ (Class)_engineClassFromOptions:(id)arg1 error:(id*)arg2;
+ (id)_engineFromOptions:(id)arg1 error:(id*)arg2;
+ (id)_jsonStringFromOptions:(id)arg1;
+ (unsigned long long)_typeForFeature:(id)arg1 enginePreferredRegionType:(unsigned long long)arg2;
+ (id)defaultOptions;
+ (unsigned long long)defaultRevisionNumber;
+ (id)descriptionForErrorCode:(long long)arg1;
+ (struct CGSize { double x1; double x2; })detectorImageSizeForOptions:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)errorWithErrorCode:(long long)arg1;
+ (bool)languageIsChinese:(id)arg1;
+ (bool)languageIsCyrillic:(id)arg1;
+ (bool)languageIsJapanese:(id)arg1;
+ (bool)languageIsKorean:(id)arg1;
+ (bool)languageIsLatin:(id)arg1;
+ (bool)languageIsThai:(id)arg1;
+ (bool)languageIsVietnamese:(id)arg1;
+ (id)languageSetFromOptionsDictionary:(id)arg1;
+ (bool)languageSupportsFullWidthPunctuation:(id)arg1;
+ (bool)preheatModelsForOptions:(id)arg1 revision:(long long)arg2 error:(id*)arg3;
+ (id)prioritizationForOptions:(id)arg1;
+ (id)supportedChineseLanguages;
+ (id)supportedComputeDevicesForOptions:(id)arg1 revision:(long long)arg2 error:(id*)arg3;
+ (id)supportedLanguagesForOptions:(id)arg1 revision:(long long)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)cancel;
- (id)computeDevice;
- (id)confidenceThresholdProvider;
- (id)detectorInferenceStats;
- (id)detectorStats;
- (id)documentOutputRegionForImage:(id)arg1 options:(id)arg2 roi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 error:(id*)arg4 withProgressHandler:(id /* block */)arg5;
- (id)documentOutputRegionForImage:(id)arg1 options:(id)arg2 roi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 trackingSession:(id)arg4 error:(id*)arg5 withProgressHandler:(id /* block */)arg6;
- (id)documentOutputRegionForImage:(id)arg1 roi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 error:(id*)arg3 withProgressHandler:(id /* block */)arg4;
- (id)documentOutputRegionForTextFeatures:(id)arg1 image:(id)arg2;
- (id)engine;
- (id)formAnalyzerStats;
- (id)initWithOptions:(id)arg1;
- (id)initWithOptions:(id)arg1 error:(id*)arg2;
- (id)lineWrappingStats;
- (id)orientationCorrectionStats;
- (id)outputObjectTypes;
- (id)postProcStats;
- (bool)purgeCaches:(id)arg1;
- (id)recognizeDetectedBlocks:(id)arg1 inImage:(id)arg2 error:(id*)arg3 withProgressHandler:(id /* block */)arg4;
- (id)recognizerDecodingStats;
- (id)recognizerInferenceStats;
- (id)recognizerStats;
- (id)resultDocumentForImage:(id)arg1 roi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 options:(id)arg3 trackingSession:(id)arg4 error:(id*)arg5 withProgressHandler:(id /* block */)arg6;
- (id)resultsForCRImage:(id)arg1 roi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 options:(id)arg3 error:(id*)arg4 withProgressHandler:(id /* block */)arg5;
- (id)resultsForPixelBuffer:(struct __CVBuffer { }*)arg1 options:(id)arg2 error:(id*)arg3;
- (id)resultsForPixelBuffer:(struct __CVBuffer { }*)arg1 roi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 options:(id)arg3 error:(id*)arg4;
- (id)resultsForPixelBuffer:(struct __CVBuffer { }*)arg1 roi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 options:(id)arg3 error:(id*)arg4 withProgressHandler:(id /* block */)arg5;
- (void)setEngine:(id)arg1;
- (void)setOutputObjectTypes:(id)arg1;
- (void)setShouldCancel:(bool)arg1;
- (void)setUserOptions:(id)arg1;
- (bool)shouldCancel;
- (struct CGSize { double x1; double x2; })smallestImageSizeForTextWithRelativeHeight:(double)arg1 originalImageSize:(struct CGSize { double x1; double x2; })arg2;
- (id)tableStructureRecognitionStats;
- (id)textDetectorResultsForImage:(id)arg1 error:(id*)arg2;
- (id)textGroupingStats;
- (id)userOptions;

@end
