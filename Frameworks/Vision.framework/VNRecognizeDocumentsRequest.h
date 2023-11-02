
@interface VNRecognizeDocumentsRequest : VNStatefulRequest <VNDocumentObservationsAccepting, VNRequestProgressProviding> {
    VNDetectBarcodesRequest * _barcodeRequest;
    CRImageReaderTrackingSession * _trackingSession;
    bool  indeterminate;
    NSArray * inputTextBlocks;
    id /* block */  progressHandler;
}

@property (nonatomic, retain) VNDetectBarcodesRequest *barcodeRequest;
@property (nonatomic, copy) NSArray *customWords;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool detectionOnly;
@property (readonly) unsigned long long hash;
@property (readonly) bool indeterminate;
@property (nonatomic, copy) NSArray *inputTextBlocks;
@property (nonatomic) unsigned long long maximumCandidateCount;
@property (nonatomic) float minimumTextHeight;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic, copy) NSArray *recognitionLanguages;
@property (nonatomic) long long recognitionLevel;
@property (readonly, copy) NSArray *results;
@property (readonly) Class superclass;
@property (nonatomic) bool usesAlternateLineGrouping;
@property (nonatomic) bool usesFormFieldDetection;
@property (nonatomic) bool usesLanguageCorrection;
@property (nonatomic) bool usesLanguageDetection;

// Image: /System/Library/Frameworks/Vision.framework/Vision

+ (Class)configurationClass;
+ (id)supportedRecognitionLanguagesForTextRecognitionLevel:(long long)arg1 revision:(unsigned long long)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (unsigned long long)_CRImageReaderRevisionForRevision:(unsigned long long)arg1;
- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id*)arg2;
- (id)barcodeRequest;
- (id)customWords;
- (bool)detectionOnly;
- (bool)hasCancellationHook;
- (bool)indeterminate;
- (id)initWithFrameAnalysisSpacing:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 trackingLevelBlockType:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)inputTextBlocks;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (unsigned long long)maximumCandidateCount;
- (float)minimumTextHeight;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2;
- (id /* block */)progressHandler;
- (id)recognitionLanguages;
- (long long)recognitionLevel;
- (id)sequencedRequestPreviousObservationsKey;
- (void)setBarcodeRequest:(id)arg1;
- (void)setCustomWords:(id)arg1;
- (void)setDetectionOnly:(bool)arg1;
- (void)setInputTextBlocks:(id)arg1;
- (void)setMaximumCandidateCount:(unsigned long long)arg1;
- (void)setMinimumTextHeight:(float)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setRecognitionLanguages:(id)arg1;
- (void)setRecognitionLevel:(long long)arg1;
- (void)setUsesAlternateLineGrouping:(bool)arg1;
- (void)setUsesFormFieldDetection:(bool)arg1;
- (void)setUsesLanguageCorrection:(bool)arg1;
- (void)setUsesLanguageDetection:(bool)arg1;
- (id)supportedRecognitionLanguagesAndReturnError:(id*)arg1;
- (bool)usesAlternateLineGrouping;
- (bool)usesFormFieldDetection;
- (bool)usesLanguageCorrection;
- (bool)usesLanguageDetection;
- (bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis

+ (id)mad_defaultRequest;

@end
