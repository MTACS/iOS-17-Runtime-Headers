
@interface EARSpeechRecognitionResultPackage : NSObject <NSCopying, NSSecureCoding> {
    EARAudioAnalytics * _audioAnalytics;
    NSArray * _correctPartialResultIndexList;
    bool  _firstResultAfterResume;
    bool  _isFinal;
    NSArray * _nBestVoiceCommandInterpretations;
    NSArray * _preITNNBestVoiceCommandInterpretations;
    EARSpeechRecognition * _preITNRecognition;
    EARSpeechRecognition * _recognition;
    bool  _recognitionPaused;
    EARSpeechRecognition * _unrepairedRecognition;
    double  _utteranceStart;
}

@property (nonatomic, readonly, copy) EARAudioAnalytics *audioAnalytics;
@property (nonatomic, readonly, copy) NSArray *correctPartialResultIndexList;
@property (nonatomic, readonly) bool firstResultAfterResume;
@property (nonatomic, readonly) bool isFinal;
@property (nonatomic, readonly, copy) NSArray *nBestVoiceCommandInterpretations;
@property (nonatomic, readonly, copy) NSArray *preITNNBestVoiceCommandInterpretations;
@property (nonatomic, readonly, copy) EARSpeechRecognition *preITNRecognition;
@property (nonatomic, readonly, copy) EARSpeechRecognition *recognition;
@property (nonatomic, readonly) bool recognitionPaused;
@property (nonatomic, readonly, copy) EARSpeechRecognition *unrepairedRecognition;
@property (nonatomic, readonly) double utteranceStart;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)audioAnalytics;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)correctPartialResultIndexList;
- (void)encodeWithCoder:(id)arg1;
- (bool)firstResultAfterResume;
- (id)initWithCoder:(id)arg1;
- (id)initWithPackage:(id)arg1;
- (bool)isFinal;
- (id)nBestVoiceCommandInterpretations;
- (id)preITNNBestVoiceCommandInterpretations;
- (id)preITNRecognition;
- (id)recognition;
- (bool)recognitionPaused;
- (id)unrepairedRecognition;
- (double)utteranceStart;

@end
