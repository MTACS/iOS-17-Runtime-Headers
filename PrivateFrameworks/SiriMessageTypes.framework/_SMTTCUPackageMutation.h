
@interface _SMTTCUPackageMutation : NSObject <SMTTCUPackageMutating> {
    SMTTCUPackage * _base;
    double  _endAudioTimeStampInMs;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasTcuId : 1; 
        unsigned int hasRequestId : 1; 
        unsigned int hasTcuState : 1; 
        unsigned int hasSpeechEvent : 1; 
        unsigned int hasVoiceTriggerPhraseType : 1; 
        unsigned int hasSiriIntendedInfo : 1; 
        unsigned int hasPrevTCUIds : 1; 
        unsigned int hasStartAudioTimeStampInMs : 1; 
        unsigned int hasEndAudioTimeStampInMs : 1; 
        unsigned int hasSpeechPackage : 1; 
    }  _mutationFlags;
    NSArray * _prevTCUIds;
    NSString * _requestId;
    SMTSiriIntendedInfo * _siriIntendedInfo;
    long long  _speechEvent;
    AFSpeechPackage * _speechPackage;
    double  _startAudioTimeStampInMs;
    NSString * _tcuId;
    long long  _tcuState;
    long long  _voiceTriggerPhraseType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)getEndAudioTimeStampInMs;
- (id)getPrevTCUIds;
- (id)getRequestId;
- (id)getSiriIntendedInfo;
- (long long)getSpeechEvent;
- (id)getSpeechPackage;
- (double)getStartAudioTimeStampInMs;
- (id)getTcuId;
- (long long)getTcuState;
- (long long)getVoiceTriggerPhraseType;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setEndAudioTimeStampInMs:(double)arg1;
- (void)setPrevTCUIds:(id)arg1;
- (void)setRequestId:(id)arg1;
- (void)setSiriIntendedInfo:(id)arg1;
- (void)setSpeechEvent:(long long)arg1;
- (void)setSpeechPackage:(id)arg1;
- (void)setStartAudioTimeStampInMs:(double)arg1;
- (void)setTcuId:(id)arg1;
- (void)setTcuState:(long long)arg1;
- (void)setVoiceTriggerPhraseType:(long long)arg1;

@end
