
@interface Speech.ObjCSpeechAnalyzer : NSObject {
    void contextualizedCommandRecognizer;
    void contextualizedTranscriber;
    void endpointDetector;
    void inputSequence;
    void normalizedCommandRecognizer;
    void normalizedTranscriber;
    void queue;
    void speechAnalyzer;
}

@property (nonatomic, readonly) _SFInputSequencer *inputSequence;

+ (id)modelDownloadRequestForClientIdentifier:(id)arg1 transcriberOptions:(id)arg2;

- (void).cxx_destruct;
- (void)cancelPendingResultsAndPauseWithCompletion:(id /* block */)arg1;
- (void)finalizeAndFinishThroughEndOfInputWithCompletion:(id /* block */)arg1;
- (void)finalizeAndFinishWithThrough:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 completion:(id /* block */)arg2;
- (void)finalizeWithThrough:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 completion:(id /* block */)arg2;
- (void)getContextWithCompletion:(id /* block */)arg1;
- (void)getModelInfoLanguageWithCompletion:(id /* block */)arg1;
- (void)getModelInfoTasksWithCompletion:(id /* block */)arg1;
- (void)getNextBufferStartTimeWithCompletion:(id /* block */)arg1;
- (void)getRecognitionStatisticsWithCompletion:(id /* block */)arg1;
- (void)getRecognitionUtterenceStatisticsWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithObjCSpeechAnalyzer:(id)arg1 clientIdentifier:(id)arg2 inputSequence:(id)arg3 audioFormat:(id)arg4 transcriberResultDelegate:(id)arg5 endpointingResultDelegate:(id)arg6 queue:(id)arg7 transcriberOptions:(id)arg8 commandRecognizerOptions:(id)arg9 options:(id)arg10 restrictedLogging:(bool)arg11 geoLMRegionID:(id)arg12 contextualNamedEntities:(id)arg13 didChangeVolatileRange:(id /* block */)arg14;
- (id)inputSequence;
- (void)prepareToAnalyzeWithReportingInto:(id)arg1 completion:(id /* block */)arg2;
- (void)requestResultAtEndpointTimes:(id)arg1;
- (void)resumeWithCompletion:(id /* block */)arg1;
- (void)setDidChangeVolatileRange:(id /* block */)arg1 completion:(id /* block */)arg2;

@end
