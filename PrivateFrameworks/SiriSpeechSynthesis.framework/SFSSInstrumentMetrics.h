
@interface SFSSInstrumentMetrics : NSObject {
    double  _audioDuration;
    NSString * _audioOutputRoute;
    NSString * _clientBundleIdentifier;
    long long  _errorCode;
    bool  _isSpeechRequest;
    long long  _requestCreatedTimestamp;
    NSString * _resourceAssetKey;
    long long  _sourceOfTTS;
    long long  _speakBeginTimestamp;
    long long  _speakEndTimestamp;
    long long  _synthesisBeginTimestamp;
    long long  _synthesisEndTimestamp;
    NSString * _text;
    NSString * _voiceAssetKey;
}

@property double audioDuration;
@property (copy) NSString *audioOutputRoute;
@property (copy) NSString *clientBundleIdentifier;
@property long long errorCode;
@property bool isSpeechRequest;
@property long long requestCreatedTimestamp;
@property (copy) NSString *resourceAssetKey;
@property long long sourceOfTTS;
@property long long speakBeginTimestamp;
@property long long speakEndTimestamp;
@property long long synthesisBeginTimestamp;
@property long long synthesisEndTimestamp;
@property (copy) NSString *text;
@property (copy) NSString *voiceAssetKey;

- (void).cxx_destruct;
- (double)audioDuration;
- (id)audioOutputRoute;
- (id)clientBundleIdentifier;
- (double)clockFactor;
- (id)description;
- (id)dictionaryMetrics;
- (long long)errorCode;
- (bool)isSpeechRequest;
- (double)playbackDuration;
- (long long)requestCreatedTimestamp;
- (id)resourceAssetKey;
- (void)setAudioDuration:(double)arg1;
- (void)setAudioOutputRoute:(id)arg1;
- (void)setClientBundleIdentifier:(id)arg1;
- (void)setErrorCode:(long long)arg1;
- (void)setIsSpeechRequest:(bool)arg1;
- (void)setRequestCreatedTimestamp:(long long)arg1;
- (void)setResourceAssetKey:(id)arg1;
- (void)setSourceOfTTS:(long long)arg1;
- (void)setSpeakBeginTimestamp:(long long)arg1;
- (void)setSpeakEndTimestamp:(long long)arg1;
- (void)setSynthesisBeginTimestamp:(long long)arg1;
- (void)setSynthesisEndTimestamp:(long long)arg1;
- (void)setText:(id)arg1;
- (void)setVoiceAssetKey:(id)arg1;
- (long long)sourceOfTTS;
- (long long)speakBeginTimestamp;
- (long long)speakEndTimestamp;
- (double)speakLatency;
- (long long)synthesisBeginTimestamp;
- (long long)synthesisEndTimestamp;
- (double)synthesisLatency;
- (id)text;
- (id)voiceAssetKey;

@end
