
@interface AVCMediaStreamNegotiatorSettingsRemoteMic : AVCMediaStreamNegotiatorSettings {
    unsigned long long  _channelCount;
    int  _preferredAudioPayload;
}

- (long long)audioStreamMode;
- (id)initWithOptions:(id)arg1 deviceRole:(unsigned char)arg2 error:(id*)arg3;
- (int)operatingMode;
- (int)preferredAudioCodec;
- (unsigned long long)ptime;

@end
