
@interface VCAudioStreamGroupCommonConfig : NSObject {
    unsigned int  _audioChannelIndex;
    unsigned int  _audioSessionID;
    VCAudioCaptionsCoordinator * _captionsCoordinator;
    int (* _didProcessSamplesCallback;
    void * _didProcessSamplesCallbackContext;
    bool  _isGKVoiceChat;
    bool  _isMuted;
    long long  _powerSpectrumStreamToken;
    unsigned int  _preferredIOSampleRate;
    unsigned int  _preferredIOSamplesPerFrame;
    int  _processID;
    unsigned long long  _spatialAudioSourceID;
}

@property (nonatomic) unsigned int audioChannelIndex;
@property (nonatomic) unsigned int audioSessionID;
@property (nonatomic, retain) VCAudioCaptionsCoordinator *captionsCoordinator;
@property (nonatomic) int (*didProcessSamplesCallback;
@property (nonatomic) void*didProcessSamplesCallbackContext;
@property (nonatomic) bool isGKVoiceChat;
@property (nonatomic) bool isMuted;
@property (nonatomic) long long powerSpectrumStreamToken;
@property (nonatomic) unsigned int preferredIOSampleRate;
@property (nonatomic) unsigned int preferredIOSamplesPerFrame;
@property (nonatomic) int processID;
@property (nonatomic) unsigned long long spatialAudioSourceID;

- (unsigned int)audioChannelIndex;
- (unsigned int)audioSessionID;
- (id)captionsCoordinator;
- (void)dealloc;
- (int (*)didProcessSamplesCallback;
- (void*)didProcessSamplesCallbackContext;
- (bool)isGKVoiceChat;
- (bool)isMuted;
- (long long)powerSpectrumStreamToken;
- (unsigned int)preferredIOSampleRate;
- (unsigned int)preferredIOSamplesPerFrame;
- (int)processID;
- (void)setAudioChannelIndex:(unsigned int)arg1;
- (void)setAudioSessionID:(unsigned int)arg1;
- (void)setCaptionsCoordinator:(id)arg1;
- (void)setDidProcessSamplesCallback:(int (*)arg1;
- (void)setDidProcessSamplesCallbackContext:(void*)arg1;
- (void)setIsGKVoiceChat:(bool)arg1;
- (void)setIsMuted:(bool)arg1;
- (void)setPowerSpectrumStreamToken:(long long)arg1;
- (void)setPreferredIOSampleRate:(unsigned int)arg1;
- (void)setPreferredIOSamplesPerFrame:(unsigned int)arg1;
- (void)setProcessID:(int)arg1;
- (void)setSpatialAudioSourceID:(unsigned long long)arg1;
- (unsigned long long)spatialAudioSourceID;

@end
