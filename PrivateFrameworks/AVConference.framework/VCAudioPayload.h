
@interface VCAudioPayload : NSObject {
    int  _bandwidth;
    unsigned int  _bitrate;
    VCAudioPayloadConfig * _config;
    struct SoundDec_t { struct AudioStreamBasicDescription { double x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned int x_1_1_9; } x1; struct AudioStreamBasicDescription { double x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; unsigned int x_2_1_5; unsigned int x_2_1_6; unsigned int x_2_1_7; unsigned int x_2_1_8; unsigned int x_2_1_9; } x2; int x3; int x4; struct OpaqueAudioConverter {} *x5; struct tagVCIndexedBuffer { char *x_6_1_1; unsigned long long x_6_1_2; unsigned long long x_6_1_3; } x6; bool x7; struct AudioStreamPacketDescription { long long x_8_1_1; unsigned int x_8_1_2; unsigned int x_8_1_3; } x8; struct AudioBufferList {} *x9; struct AudioBufferList {} *x10; char *x11; int x12; int x13; int x14; int x15; unsigned char x16; int x17; int x18; unsigned int x19; unsigned int x20; struct CMRData { unsigned int x_21_1_1; unsigned int x_21_1_2; struct EVSRFParams { unsigned int x_3_2_1; unsigned int x_3_2_2; } x_21_1_3; } x21; } * _encoder;
    bool  _ramStadSRCEnabled;
    bool  _shouldReset;
}

@property (nonatomic, readonly) int bandwidth;
@property (nonatomic, readonly) unsigned int bitrate;
@property (nonatomic, readonly) VCAudioPayloadConfig *config;

- (int)bandwidth;
- (unsigned int)bitrate;
- (id)config;
- (bool)createEncoderWithInputFormat:(const struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned int x_1_1_9; } x1; unsigned int x2; }*)arg1;
- (void)dealloc;
- (id)description;
- (int)encodeAudio:(struct opaqueVCAudioBufferList { }*)arg1 numInputSamples:(int)arg2 outputBytes:(void*)arg3 numOutputBytes:(int)arg4;
- (bool)getMagicCookie:(char *)arg1 withLength:(unsigned int*)arg2;
- (id)initWithConfig:(id)arg1;
- (bool)isDTXEmptyPacket:(unsigned int)arg1;
- (void)resetEncoder;
- (void)resetEncoderWithSampleBuffer:(char *)arg1 numBytes:(int)arg2;
- (bool)setBandwidth:(int)arg1;
- (bool)setBitrate:(unsigned int)arg1;
- (bool)setCodecModeRequest:(struct _VCAudioCodecModeChangeEvent { int x1; int x2; int x3; unsigned int x4; struct EVSRFParams { unsigned int x_5_1_1; unsigned int x_5_1_2; } x5; })arg1;
- (void)setCurrentDTXEnable:(bool)arg1;
- (bool)setEVSRFParams:(struct EVSRFParams { unsigned int x1; unsigned int x2; }*)arg1;
- (void)setRamStadSRCEnabled:(bool)arg1;

@end
