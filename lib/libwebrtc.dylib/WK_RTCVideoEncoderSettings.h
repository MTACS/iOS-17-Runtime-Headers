
@interface WK_RTCVideoEncoderSettings : NSObject {
    unsigned short  _height;
    unsigned int  _maxBitrate;
    unsigned int  _maxFramerate;
    unsigned int  _minBitrate;
    unsigned long long  _mode;
    NSString * _name;
    unsigned int  _qpMax;
    unsigned int  _startBitrate;
    unsigned short  _width;
}

@property (nonatomic) unsigned short height;
@property (nonatomic) unsigned int maxBitrate;
@property (nonatomic) unsigned int maxFramerate;
@property (nonatomic) unsigned int minBitrate;
@property (nonatomic) unsigned long long mode;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) unsigned int qpMax;
@property (nonatomic) unsigned int startBitrate;
@property (nonatomic) unsigned short width;

- (void).cxx_destruct;
- (unsigned short)height;
- (id)initWithNativeVideoCodec:(const void*)arg1;
- (unsigned int)maxBitrate;
- (unsigned int)maxFramerate;
- (unsigned int)minBitrate;
- (unsigned long long)mode;
- (id)name;
- (struct VideoCodec { int x1; unsigned short x2; unsigned short x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; bool x8; unsigned int x9; unsigned char x10; struct SimulcastStream { int x_11_1_1; int x_11_1_2; float x_11_1_3; unsigned char x_11_1_4; unsigned int x_11_1_5; unsigned int x_11_1_6; unsigned int x_11_1_7; unsigned int x_11_1_8; bool x_11_1_9; } x11[3]; struct SpatialLayer { unsigned short x_12_1_1; unsigned short x_12_1_2; float x_12_1_3; unsigned char x_12_1_4; unsigned int x_12_1_5; unsigned int x_12_1_6; unsigned int x_12_1_7; unsigned int x_12_1_8; bool x_12_1_9; } x12[5]; int x13; bool x14; struct TimingFrameTriggerThresholds { long long x_15_1_1; unsigned short x_15_1_2; } x15; bool x16; union VideoCodecUnion { struct VideoCodecVP8 { unsigned char x_1_2_1; bool x_1_2_2; bool x_1_2_3; int x_1_2_4; } x_17_1_1; struct VideoCodecVP9 { unsigned char x_2_2_1; bool x_2_2_2; int x_2_2_3; bool x_2_2_4; bool x_2_2_5; unsigned char x_2_2_6; bool x_2_2_7; int x_2_2_8; } x_17_1_2; struct VideoCodecH264 { int x_3_2_1; unsigned char x_3_2_2; } x_17_1_3; } x17; })nativeVideoCodec;
- (unsigned int)qpMax;
- (void)setHeight:(unsigned short)arg1;
- (void)setMaxBitrate:(unsigned int)arg1;
- (void)setMaxFramerate:(unsigned int)arg1;
- (void)setMinBitrate:(unsigned int)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setQpMax:(unsigned int)arg1;
- (void)setStartBitrate:(unsigned int)arg1;
- (void)setWidth:(unsigned short)arg1;
- (unsigned int)startBitrate;
- (unsigned short)width;

@end
