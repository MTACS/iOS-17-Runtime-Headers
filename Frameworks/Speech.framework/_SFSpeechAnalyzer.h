
@interface _SFSpeechAnalyzer : NSObject {
    _TtC6Speech18ObjCSpeechAnalyzer * _implementation;
}

@property (readonly) _SFInputSequencer *inputSequence;

+ (id)modelDownloadRequestForClientIdentifier:(id)arg1 transcriberOptions:(id)arg2;

- (void).cxx_destruct;
- (void)cancelPendingResultsAndPauseWithCompletion:(id /* block */)arg1;
- (void)finalizeAndFinishThrough:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 completion:(id /* block */)arg2;
- (void)finalizeAndFinishThroughEndOfInputWithCompletion:(id /* block */)arg1;
- (void)finalizeAndFinishWithCompletion:(id /* block */)arg1;
- (void)finalizeThrough:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 completion:(id /* block */)arg2;
- (void)finalizeWithCompletion:(id /* block */)arg1;
- (void)getContextWithCompletion:(id /* block */)arg1;
- (void)getModelInfoLanguageWithCompletion:(id /* block */)arg1;
- (void)getModelInfoTasksWithCompletion:(id /* block */)arg1;
- (void)getNextBufferStartTimeWithCompletion:(id /* block */)arg1;
- (void)getRecognitionStatisticsWithCompletion:(id /* block */)arg1;
- (void)getRecognitionUtterenceStatisticsWithCompletion:(id /* block */)arg1;
- (id)initWithClientIdentifier:(id)arg1 inputSequence:(id)arg2 audioFormat:(id)arg3 transcriberResultDelegate:(id)arg4 endpointingResultDelegate:(id)arg5 queue:(id)arg6 transcriberOptions:(id)arg7 commandRecognizerOptions:(id)arg8 options:(id)arg9 restrictedLogging:(bool)arg10 geoLMRegionID:(id)arg11 contextualNamedEntities:(id)arg12 didChangeVolatileRange:(id /* block */)arg13;
- (id)initWithClientIdentifier:(id)arg1 inputSequence:(id)arg2 audioFormat:(id)arg3 transcriberResultDelegate:(id)arg4 endpointingResultDelegate:(id)arg5 queue:(id)arg6 transcriberOptions:(id)arg7 commandRecognizerOptions:(id)arg8 options:(id)arg9 restrictedLogging:(bool)arg10 geoLMRegionID:(id)arg11 contextualNamedEntities:(id)arg12 personalizedLMPath:(id)arg13 didChangeVolatileRange:(id /* block */)arg14;
- (id)initWithClientIdentifier:(id)arg1 inputSequence:(id)arg2 audioFormat:(id)arg3 transcriberResultDelegate:(id)arg4 endpointingResultDelegate:(id)arg5 queue:(id)arg6 transcriberOptions:(id)arg7 commandRecognizerOptions:(id)arg8 options:(id)arg9 restrictedLogging:(bool)arg10 geoLMRegionID:(id)arg11 personalizedLMPath:(id)arg12 didChangeVolatileRange:(id /* block */)arg13;
- (id)inputSequence;
- (void)prepareToAnalyzeReportingInto:(id)arg1 completion:(id /* block */)arg2;
- (void)requestResultAtEndpointTimes:(id)arg1;
- (void)resumeWithCompletion:(id /* block */)arg1;
- (void)setDidChangeVolatileRange:(id /* block */)arg1 completion:(id /* block */)arg2;

@end
