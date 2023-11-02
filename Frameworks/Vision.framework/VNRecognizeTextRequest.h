
@interface VNRecognizeTextRequest : VNImageBasedRequest <VNRequestProgressProviding> {
    bool  indeterminate;
    id /* block */  progressHandler;
}

@property (nonatomic) bool automaticallyDetectsLanguage;
@property (nonatomic, copy) NSArray *customWords;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool indeterminate;
@property (nonatomic) float minimumTextHeight;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic, copy) NSArray *recognitionLanguages;
@property (nonatomic) long long recognitionLevel;
@property (readonly, copy) NSArray *results;
@property (readonly) Class superclass;
@property (nonatomic) bool usesLanguageCorrection;

+ (Class)configurationClass;
+ (const struct { unsigned long long x1; struct { int x_2_1_1; int x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; struct { int x_4_1_1; int x_4_1_2; } x4; }*)revisionAvailability;
+ (id)supportedRecognitionLanguagesForTextRecognitionLevel:(long long)arg1 revision:(unsigned long long)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (unsigned long long)_CRImageReaderRevisionForRevision:(unsigned long long)arg1;
- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id*)arg2;
- (void)applyConfigurationOfRequest:(id)arg1;
- (bool)automaticallyDetectsLanguage;
- (id)customWords;
- (bool)hasCancellationHook;
- (bool)indeterminate;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (float)minimumTextHeight;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2;
- (id /* block */)progressHandler;
- (id)recognitionLanguages;
- (long long)recognitionLevel;
- (id)sequencedRequestPreviousObservationsKey;
- (void)setAutomaticallyDetectsLanguage:(bool)arg1;
- (void)setCustomWords:(id)arg1;
- (void)setMinimumTextHeight:(float)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setRecognitionLanguages:(id)arg1;
- (void)setRecognitionLevel:(long long)arg1;
- (void)setUsesLanguageCorrection:(bool)arg1;
- (id)supportedRecognitionLanguagesAndReturnError:(id*)arg1;
- (bool)usesLanguageCorrection;
- (bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

@end
