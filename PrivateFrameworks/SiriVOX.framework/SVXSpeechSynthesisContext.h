
@interface SVXSpeechSynthesisContext : NSObject {
    NSDictionary * _analyticsContext;
    unsigned long long  _audioChunkCount;
    id /* block */  _audioChunkHandler;
    SVXAudioSessionAssertion * _audioSessionAssertion;
    unsigned int  _audioSessionID;
    id /* block */  _finalization;
    long long  _gender;
    bool  _handledPresynthesizedAudioRequest;
    bool  _handledSpeechRequest;
    SiriTTSInstrumentationMetrics * _instrumentMetrics;
    bool  _isStreamingSynthesisRequest;
    NSString * _languageCode;
    long long  _operationType;
    id /* block */  _preparation;
    SiriTTSAudioRequest * _presynthesizedAudioRequest;
    SVXSpeechSynthesisRequest * _request;
    SiriTTSSpeechRequest * _speechRequest;
    NSArray * _speechWordTimingInfoArray;
    SiriTTSSynthesisRequest * _synthesisRequest;
    <SVXTaskTracking> * _taskTracker;
    NSString * _voiceName;
}

@property (nonatomic, readonly, copy) NSDictionary *analyticsContext;
@property (nonatomic, retain) SVXAudioSessionAssertion *audioSessionAssertion;
@property (nonatomic, readonly) unsigned int audioSessionID;
@property (nonatomic, readonly) long long gender;
@property (nonatomic) bool handledPresynthesizedAudioRequest;
@property (nonatomic) bool handledSpeechRequest;
@property (nonatomic, retain) SiriTTSInstrumentationMetrics *instrumentMetrics;
@property (nonatomic) bool isStreamingSynthesisRequest;
@property (nonatomic, readonly, copy) NSString *languageCode;
@property (nonatomic, readonly) long long operationType;
@property (nonatomic, retain) SiriTTSAudioRequest *presynthesizedAudioRequest;
@property (nonatomic, readonly, copy) SVXSpeechSynthesisRequest *request;
@property (nonatomic, retain) SiriTTSSpeechRequest *speechRequest;
@property (nonatomic, copy) NSArray *speechWordTimingInfoArray;
@property (nonatomic, retain) SiriTTSSynthesisRequest *synthesisRequest;
@property (nonatomic, readonly) <SVXTaskTracking> *taskTracker;
@property (nonatomic, readonly, copy) NSString *voiceName;

- (void).cxx_destruct;
- (id)analyticsContext;
- (id)audioSessionAssertion;
- (unsigned int)audioSessionID;
- (void)dealloc;
- (id)description;
- (void)finalizeWithResultType:(long long)arg1 utteranceInfo:(id)arg2 error:(id)arg3;
- (long long)gender;
- (void)handleAudioChunkData:(id)arg1;
- (bool)handledPresynthesizedAudioRequest;
- (bool)handledSpeechRequest;
- (id)initWithOperationType:(long long)arg1 request:(id)arg2 languageCode:(id)arg3 voiceName:(id)arg4 gender:(long long)arg5 audioSessionID:(unsigned int)arg6 preparation:(id /* block */)arg7 audioChunkHandler:(id /* block */)arg8 finalization:(id /* block */)arg9 taskTracker:(id)arg10 analyticsContext:(id)arg11;
- (id)instrumentMetrics;
- (bool)isStreamingSynthesisRequest;
- (id)languageCode;
- (long long)operationType;
- (void)prepare;
- (id)presynthesizedAudioRequest;
- (id)request;
- (void)setAudioSessionAssertion:(id)arg1;
- (void)setHandledPresynthesizedAudioRequest:(bool)arg1;
- (void)setHandledSpeechRequest:(bool)arg1;
- (void)setInstrumentMetrics:(id)arg1;
- (void)setIsStreamingSynthesisRequest:(bool)arg1;
- (void)setPresynthesizedAudioRequest:(id)arg1;
- (void)setSpeechRequest:(id)arg1;
- (void)setSpeechWordTimingInfoArray:(id)arg1;
- (void)setSynthesisRequest:(id)arg1;
- (id)speechRequest;
- (id)speechWordTimingInfoArray;
- (id)synthesisRequest;
- (id)taskTracker;
- (id)voiceName;

@end
