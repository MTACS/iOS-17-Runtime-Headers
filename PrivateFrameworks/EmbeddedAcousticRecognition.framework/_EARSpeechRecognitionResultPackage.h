
@interface _EARSpeechRecognitionResultPackage : NSObject <NSCopying> {
    _EARAudioAnalytics * _audioAnalytics;
    NSArray * _correctPartialResultIndexList;
    NSNumber * _endOfSentenceLikelihood;
    bool  _firstResultAfterResume;
    bool  _isFinal;
    _EARLatticeMitigatorResult * _latticeMitigatorResult;
    NSArray * _nBestVoiceCommandInterpretations;
    long long  _numTokensExcludingTriggerPhrase;
    NSArray * _preITNNBestVoiceCommandInterpretations;
    _EARSpeechRecognition * _preITNRecognition;
    _EARSpeechRecognition * _recognition;
    bool  _recognitionIsFormatted;
    bool  _recognitionPaused;
    _EARSpeechRecognition * _unrepairedRecognition;
    double  _utteranceStart;
}

@property (nonatomic, readonly, copy) _EARAudioAnalytics *audioAnalytics;
@property (nonatomic, readonly, copy) NSArray *correctPartialResultIndexList;
@property (nonatomic, readonly, copy) NSNumber *endOfSentenceLikelihood;
@property (nonatomic) bool firstResultAfterResume;
@property (nonatomic, readonly) bool hasNonEmptyToken;
@property (nonatomic) bool isFinal;
@property (nonatomic, readonly, copy) _EARLatticeMitigatorResult *latticeMitigatorResult;
@property (nonatomic, readonly, copy) NSArray *nBestVoiceCommandInterpretations;
@property (nonatomic, readonly) long long numTokensExcludingTriggerPhrase;
@property (nonatomic, readonly, copy) NSArray *preITNNBestVoiceCommandInterpretations;
@property (nonatomic, readonly, copy) _EARSpeechRecognition *preITNRecognition;
@property (nonatomic, readonly, copy) _EARSpeechRecognition *recognition;
@property (nonatomic, readonly) bool recognitionIsFormatted;
@property (nonatomic, readonly) bool recognitionPaused;
@property (nonatomic, readonly, copy) _EARSpeechRecognition *unrepairedRecognition;
@property (nonatomic, readonly) double utteranceStart;

- (void).cxx_destruct;
- (id)_initWithRecognition:(id)arg1 preITNRecognition:(id)arg2 unrepairedRecognition:(id)arg3 recognitionIsFormatted:(bool)arg4 isFinal:(bool)arg5;
- (id)_initWithRecognition:(id)arg1 preITNRecognition:(id)arg2 unrepairedRecognition:(id)arg3 recognitionIsFormatted:(bool)arg4 isFinal:(bool)arg5 audioAnalytics:(id)arg6;
- (id)_initWithRecognition:(id)arg1 preITNRecognition:(id)arg2 unrepairedRecognition:(id)arg3 recognitionIsFormatted:(bool)arg4 isFinal:(bool)arg5 audioAnalytics:(id)arg6 utteranceStart:(double)arg7;
- (id)_initWithRecognition:(id)arg1 preITNRecognition:(id)arg2 unrepairedRecognition:(id)arg3 recognitionIsFormatted:(bool)arg4 isFinal:(bool)arg5 audioAnalytics:(id)arg6 utteranceStart:(double)arg7 latticeMitigatorResult:(id)arg8;
- (id)_initWithRecognition:(id)arg1 preITNRecognition:(id)arg2 unrepairedRecognition:(id)arg3 recognitionIsFormatted:(bool)arg4 isFinal:(bool)arg5 audioAnalytics:(id)arg6 utteranceStart:(double)arg7 latticeMitigatorResult:(id)arg8 nBestVoiceCommandInterpretations:(id)arg9 preITNNBestVoiceCommandInterpretations:(id)arg10 recognitionPaused:(bool)arg11;
- (id)_initWithRecognition:(id)arg1 preITNRecognition:(id)arg2 unrepairedRecognition:(id)arg3 recognitionIsFormatted:(bool)arg4 isFinal:(bool)arg5 audioAnalytics:(id)arg6 utteranceStart:(double)arg7 latticeMitigatorResult:(id)arg8 nBestVoiceCommandInterpretations:(id)arg9 preITNNBestVoiceCommandInterpretations:(id)arg10 recognitionPaused:(bool)arg11 firstResultAfterResume:(bool)arg12 endOfSentenceLikelihood:(id)arg13;
- (id)_initWithRecognition:(id)arg1 preITNRecognition:(id)arg2 unrepairedRecognition:(id)arg3 recognitionIsFormatted:(bool)arg4 isFinal:(bool)arg5 audioAnalytics:(id)arg6 utteranceStart:(double)arg7 latticeMitigatorResult:(id)arg8 nBestVoiceCommandInterpretations:(id)arg9 preITNNBestVoiceCommandInterpretations:(id)arg10 recognitionPaused:(bool)arg11 firstResultAfterResume:(bool)arg12 endOfSentenceLikelihood:(id)arg13 numTokensExcludingTriggerPhrase:(long long)arg14;
- (id)audioAnalytics;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)correctPartialResultIndexList;
- (id)endOfSentenceLikelihood;
- (bool)firstResultAfterResume;
- (bool)hasNonEmptyToken;
- (bool)isFinal;
- (id)latticeMitigatorResult;
- (id)nBestResults;
- (id)nBestVoiceCommandInterpretations;
- (long long)numTokensExcludingTriggerPhrase;
- (id)preITNNBestVoiceCommandInterpretations;
- (id)preITNRecognition;
- (id)recognition;
- (bool)recognitionIsFormatted;
- (bool)recognitionPaused;
- (void)setCorrectPartialResultIndexList:(const void*)arg1 oneBestFinalResult:(const void*)arg2 partialResultIndexOffset:(int)arg3;
- (void)setFirstResultAfterResume:(bool)arg1;
- (void)setIsFinal:(bool)arg1;
- (id)unrepairedRecognition;
- (double)utteranceStart;

@end
