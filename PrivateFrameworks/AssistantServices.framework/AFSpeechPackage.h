
@interface AFSpeechPackage : NSObject <NSCopying, NSSecureCoding> {
    NSString * _acousticModelVersion;
    AFSpeechAudioAnalytics * _audioAnalytics;
    NSNumber * _endOfSentenceLikelihood;
    bool  _isFinal;
    AFSpeechLatticeMitigatorResult * _latticeMitigatorResult;
    NSString * _modelVersion;
    long long  _numOneBestTokensExcludingTriggerPhrase;
    AFSpeechPackage * _potentialCommandPrecedingUtterance;
    AFSpeechPackage * _potentialCommandUtterance;
    AFSpeechRecognition * _rawRecognition;
    AFSpeechRecognition * _recognition;
    bool  _recognitionPaused;
    long long  _resultCandidateId;
    bool  _speechProfileUsed;
    AFSpeechRecognition * _unfilteredRecognition;
    double  _utteranceStart;
}

@property (nonatomic, readonly) NSString *acousticModelVersion;
@property (nonatomic, readonly) AFSpeechAudioAnalytics *audioAnalytics;
@property (nonatomic, readonly) NSNumber *endOfSentenceLikelihood;
@property (nonatomic, readonly) bool isFinal;
@property (nonatomic, readonly) AFSpeechLatticeMitigatorResult *latticeMitigatorResult;
@property (nonatomic, readonly) NSString *modelVersion;
@property (nonatomic, readonly) long long numOneBestTokensExcludingTriggerPhrase;
@property (nonatomic, readonly) AFSpeechPackage *potentialCommandPrecedingUtterance;
@property (nonatomic, readonly) AFSpeechPackage *potentialCommandUtterance;
@property (nonatomic, readonly) AFSpeechRecognition *rawRecognition;
@property (nonatomic, readonly) AFSpeechRecognition *recognition;
@property (nonatomic, readonly) bool recognitionPaused;
@property (nonatomic, readonly) long long resultCandidateId;
@property (nonatomic, readonly) bool speechProfileUsed;
@property (nonatomic, readonly) AFSpeechRecognition *unfilteredRecognition;
@property (nonatomic, readonly) double utteranceStart;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)acousticModelVersion;
- (id)audioAnalytics;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)endOfSentenceLikelihood;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecognition:(id)arg1 rawRecognition:(id)arg2 audioAnalytics:(id)arg3 isFinal:(bool)arg4 utteranceStart:(double)arg5;
- (id)initWithRecognition:(id)arg1 rawRecognition:(id)arg2 audioAnalytics:(id)arg3 isFinal:(bool)arg4 utteranceStart:(double)arg5 latticeMitigatorResult:(id)arg6;
- (id)initWithRecognition:(id)arg1 unfilteredRecognition:(id)arg2 rawRecognition:(id)arg3 audioAnalytics:(id)arg4 isFinal:(bool)arg5 utteranceStart:(double)arg6;
- (id)initWithRecognition:(id)arg1 unfilteredRecognition:(id)arg2 rawRecognition:(id)arg3 audioAnalytics:(id)arg4 isFinal:(bool)arg5 utteranceStart:(double)arg6 latticeMitigatorResult:(id)arg7;
- (id)initWithRecognition:(id)arg1 unfilteredRecognition:(id)arg2 rawRecognition:(id)arg3 audioAnalytics:(id)arg4 isFinal:(bool)arg5 utteranceStart:(double)arg6 latticeMitigatorResult:(id)arg7 recognitionPaused:(bool)arg8;
- (id)initWithRecognition:(id)arg1 unfilteredRecognition:(id)arg2 rawRecognition:(id)arg3 audioAnalytics:(id)arg4 isFinal:(bool)arg5 utteranceStart:(double)arg6 latticeMitigatorResult:(id)arg7 recognitionPaused:(bool)arg8 speechProfileUsed:(bool)arg9;
- (id)initWithRecognition:(id)arg1 unfilteredRecognition:(id)arg2 rawRecognition:(id)arg3 audioAnalytics:(id)arg4 isFinal:(bool)arg5 utteranceStart:(double)arg6 latticeMitigatorResult:(id)arg7 recognitionPaused:(bool)arg8 speechProfileUsed:(bool)arg9 resultCandidateId:(long long)arg10;
- (id)initWithRecognition:(id)arg1 unfilteredRecognition:(id)arg2 rawRecognition:(id)arg3 audioAnalytics:(id)arg4 isFinal:(bool)arg5 utteranceStart:(double)arg6 latticeMitigatorResult:(id)arg7 recognitionPaused:(bool)arg8 speechProfileUsed:(bool)arg9 resultCandidateId:(long long)arg10 endOfSentenceLikelihood:(id)arg11;
- (id)initWithRecognition:(id)arg1 unfilteredRecognition:(id)arg2 rawRecognition:(id)arg3 audioAnalytics:(id)arg4 isFinal:(bool)arg5 utteranceStart:(double)arg6 latticeMitigatorResult:(id)arg7 recognitionPaused:(bool)arg8 speechProfileUsed:(bool)arg9 resultCandidateId:(long long)arg10 endOfSentenceLikelihood:(id)arg11 modelVersion:(id)arg12 acousticModelVersion:(id)arg13;
- (id)initWithRecognition:(id)arg1 unfilteredRecognition:(id)arg2 rawRecognition:(id)arg3 audioAnalytics:(id)arg4 isFinal:(bool)arg5 utteranceStart:(double)arg6 latticeMitigatorResult:(id)arg7 recognitionPaused:(bool)arg8 speechProfileUsed:(bool)arg9 resultCandidateId:(long long)arg10 endOfSentenceLikelihood:(id)arg11 modelVersion:(id)arg12 acousticModelVersion:(id)arg13 potentialCommandPrecedingUtterance:(id)arg14 potentialCommandUtterance:(id)arg15;
- (id)initWithRecognition:(id)arg1 unfilteredRecognition:(id)arg2 rawRecognition:(id)arg3 audioAnalytics:(id)arg4 isFinal:(bool)arg5 utteranceStart:(double)arg6 latticeMitigatorResult:(id)arg7 recognitionPaused:(bool)arg8 speechProfileUsed:(bool)arg9 resultCandidateId:(long long)arg10 endOfSentenceLikelihood:(id)arg11 modelVersion:(id)arg12 acousticModelVersion:(id)arg13 potentialCommandPrecedingUtterance:(id)arg14 potentialCommandUtterance:(id)arg15 numOneBestTokensExcludingTriggerPhrase:(long long)arg16;
- (bool)isFinal;
- (id)latticeMitigatorResult;
- (id)modelVersion;
- (long long)numOneBestTokensExcludingTriggerPhrase;
- (id)potentialCommandPrecedingUtterance;
- (id)potentialCommandUtterance;
- (id)rawRecognition;
- (id)recognition;
- (bool)recognitionPaused;
- (long long)resultCandidateId;
- (void)setPotentialCommandPrecedingUtterance:(id)arg1;
- (void)setPotentialCommandUtterance:(id)arg1;
- (bool)speechProfileUsed;
- (id)unfilteredRecognition;
- (double)utteranceStart;

@end
