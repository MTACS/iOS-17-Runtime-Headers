
@interface AVCMediaStreamNegotiatorSettingsCoreDeviceSystemAudio : AVCMediaStreamNegotiatorSettings {
    int  _preferredAudioPayload;
}

- (unsigned long long)audioChannelCount;
- (long long)audioStreamMode;
- (id)initWithOptions:(id)arg1 deviceRole:(unsigned char)arg2 error:(id*)arg3;
- (unsigned int)jitterBufferMode;
- (int)operatingMode;
- (int)preferredAudioCodec;
- (unsigned long long)preferredMediaBitRate;
- (unsigned long long)ptime;

@end
