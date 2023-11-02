
@interface VCAudioUnitProperties : NSObject {
    bool  _allowAudioRecording;
    unsigned int  _audioSessionId;
    unsigned int  _audioUnitType;
    int  _deviceRole;
    bool  _enableDNNVAD;
    struct VoiceIOFarEndVersionInfo { 
        unsigned char farEndHwModel[64]; 
        unsigned char farEndOSVersion[64]; 
        unsigned int farEndAUVersion; 
    }  _farEndVersionInfo;
    struct tagVCAudioFrameFormat { 
        struct AudioStreamBasicDescription { 
            double mSampleRate; 
            unsigned int mFormatID; 
            unsigned int mFormatFlags; 
            unsigned int mBytesPerPacket; 
            unsigned int mFramesPerPacket; 
            unsigned int mBytesPerFrame; 
            unsigned int mChannelsPerFrame; 
            unsigned int mBitsPerChannel; 
            unsigned int mReserved; 
        } format; 
        unsigned int samplesPerFrame; 
    }  _frameFormatMic;
    struct tagVCAudioFrameFormat { 
        struct AudioStreamBasicDescription { 
            double mSampleRate; 
            unsigned int mFormatID; 
            unsigned int mFormatFlags; 
            unsigned int mBytesPerPacket; 
            unsigned int mFramesPerPacket; 
            unsigned int mBytesPerFrame; 
            unsigned int mChannelsPerFrame; 
            unsigned int mBitsPerChannel; 
            unsigned int mReserved; 
        } format; 
        unsigned int samplesPerFrame; 
    }  _frameFormatSpeaker;
    bool  _isFarEndVersionInfoValid;
    int  _operatingMode;
    double  _remoteCodecSampleRate;
    unsigned int  _remoteCodecType;
    VCAudioUnitSpatialContext * _spatialContext;
    bool  _vpEnableSpatialChat;
    unsigned int  _vpOperatingMode;
}

@property (nonatomic) bool allowAudioRecording;
@property (nonatomic) unsigned int audioSessionId;
@property (nonatomic) unsigned int audioUnitType;
@property (nonatomic) int deviceRole;
@property (nonatomic) bool enableDNNVAD;
@property (nonatomic) struct VoiceIOFarEndVersionInfo { unsigned char x1[64]; unsigned char x2[64]; unsigned int x3; } farEndVersionInfo;
@property (nonatomic, readonly) struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned int x_1_1_9; } x1; unsigned int x2; }*frameFormatMic;
@property (nonatomic, readonly) struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned int x_1_1_9; } x1; unsigned int x2; }*frameFormatSpeaker;
@property (nonatomic, readonly) bool isFarEndVersionInfoValid;
@property (nonatomic) int operatingMode;
@property (nonatomic) double remoteCodecSampleRate;
@property (nonatomic) unsigned int remoteCodecType;
@property (nonatomic, retain) VCAudioUnitSpatialContext *spatialContext;
@property (nonatomic) bool vpEnableSpatialChat;
@property (nonatomic) unsigned int vpOperatingMode;

- (bool)allowAudioRecording;
- (unsigned int)audioSessionId;
- (unsigned int)audioUnitType;
- (void)dealloc;
- (id)description;
- (int)deviceRole;
- (bool)enableDNNVAD;
- (struct VoiceIOFarEndVersionInfo { unsigned char x1[64]; unsigned char x2[64]; unsigned int x3; })farEndVersionInfo;
- (struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned int x_1_1_9; } x1; unsigned int x2; }*)frameFormatMic;
- (struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned int x_1_1_9; } x1; unsigned int x2; }*)frameFormatSpeaker;
- (bool)isFarEndVersionInfoValid;
- (int)operatingMode;
- (double)remoteCodecSampleRate;
- (unsigned int)remoteCodecType;
- (void)setAllowAudioRecording:(bool)arg1;
- (void)setAudioSessionId:(unsigned int)arg1;
- (void)setAudioUnitType:(unsigned int)arg1;
- (void)setDeviceRole:(int)arg1;
- (void)setEnableDNNVAD:(bool)arg1;
- (void)setFarEndVersionInfo:(struct VoiceIOFarEndVersionInfo { unsigned char x1[64]; unsigned char x2[64]; unsigned int x3; })arg1;
- (void)setOperatingMode:(int)arg1;
- (void)setRemoteCodecSampleRate:(double)arg1;
- (void)setRemoteCodecType:(unsigned int)arg1;
- (void)setSpatialContext:(id)arg1;
- (void)setVpEnableSpatialChat:(bool)arg1;
- (void)setVpOperatingMode:(unsigned int)arg1;
- (id)spatialContext;
- (bool)vpEnableSpatialChat;
- (unsigned int)vpOperatingMode;

@end
