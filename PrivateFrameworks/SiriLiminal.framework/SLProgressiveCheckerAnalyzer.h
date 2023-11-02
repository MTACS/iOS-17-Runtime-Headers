
@interface SLProgressiveCheckerAnalyzer : NSObject {
    NSMutableArray * _activeRecognizers;
    unsigned long long  _analyzedSamplesSoFar;
    NSMutableArray * _checkerEndSamples;
    unsigned long long  _checkerType;
    CSAudioCircularBuffer * _circBuffer;
    SLProgressiveCheckerContext * _context;
    <SLProgressiveCheckerAnalyzerDelegate> * _delegate;
    NSDictionary * _invocationToPhraseMap;
    double  _latestScore;
    unsigned long long  _numSamplesAddedToBufferSinceLastFlush;
    unsigned long long  _numSamplesInStride;
    bool  _shouldUseMultiPhrasesCheckerOutput;
}

- (void).cxx_destruct;
- (void)_addAudio:(id)arg1;
- (void)_endAudio;
- (id)_getTokenByInvocationType:(id)arg1;
- (bool)_setUpAnalyzerWithConfig:(id)arg1 error:(id*)arg2;
- (void)_startNewRequestWithContext:(id)arg1;
- (void)addAudio:(id)arg1;
- (void)endAudio;
- (id)initWithConfig:(id)arg1 withDelegate:(id)arg2 error:(id*)arg3;
- (void)startNewRequestWithContext:(id)arg1;

@end
