
@interface MOVStreamOutputSettings : NSObject {
    MOVStreamEncoderConfig * _config;
    double  _expectedFrameRate;
    NSDictionary * _settings;
    bool  _useCustomEncoderConfig;
}

@property (readonly) MOVStreamEncoderConfig *config;
@property (readonly) double expectedFrameRate;
@property (readonly) NSDictionary *settings;
@property (readonly) bool useCustomEncoderConfig;

+ (unsigned long long)applyBitrateModifiersTo:(unsigned long long)arg1;
+ (id)audioSettings:(struct StreamRecordingData { struct opaqueCMFormatDescription {} *x1; bool x2; id x3; id x4; id x5; id x6; id x7; id x8; unsigned long long x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; struct { long long x_17_1_1; int x_17_1_2; unsigned int x_17_1_3; long long x_17_1_4; } x17; unsigned long long x18; id x19; long long x20; }*)arg1;
+ (long long)chromaSamplingEncoding:(int)arg1;
+ (id)customEncoderSettings:(struct StreamRecordingData { struct opaqueCMFormatDescription {} *x1; bool x2; id x3; id x4; id x5; id x6; id x7; id x8; unsigned long long x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; struct { long long x_17_1_1; int x_17_1_2; unsigned int x_17_1_3; long long x_17_1_4; } x17; unsigned long long x18; id x19; long long x20; }*)arg1 frameRate:(double)arg2 enableAVEHighPerformanceProfile:(bool)arg3;
+ (id)generalHEVCColorSettings:(struct StreamRecordingData { struct opaqueCMFormatDescription {} *x1; bool x2; id x3; id x4; id x5; id x6; id x7; id x8; unsigned long long x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; struct { long long x_17_1_1; int x_17_1_2; unsigned int x_17_1_3; long long x_17_1_4; } x17; unsigned long long x18; id x19; long long x20; }*)arg1 frameRate:(double)arg2 enableAVEHighPerformanceProfile:(bool)arg3;
+ (unsigned long long)getBitsPerSecondForColorStream:(struct StreamRecordingData { struct opaqueCMFormatDescription {} *x1; bool x2; id x3; id x4; id x5; id x6; id x7; id x8; unsigned long long x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; struct { long long x_17_1_1; int x_17_1_2; unsigned int x_17_1_3; long long x_17_1_4; } x17; unsigned long long x18; id x19; long long x20; }*)arg1 frameRate:(double)arg2;
+ (double)getQualitySetting:(struct StreamRecordingData { struct opaqueCMFormatDescription {} *x1; bool x2; id x3; id x4; id x5; id x6; id x7; id x8; unsigned long long x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; struct { long long x_17_1_1; int x_17_1_2; unsigned int x_17_1_3; long long x_17_1_4; } x17; unsigned long long x18; id x19; long long x20; }*)arg1;
+ (id)h264Settings:(struct StreamRecordingData { struct opaqueCMFormatDescription {} *x1; bool x2; id x3; id x4; id x5; id x6; id x7; id x8; unsigned long long x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; struct { long long x_17_1_1; int x_17_1_2; unsigned int x_17_1_3; long long x_17_1_4; } x17; unsigned long long x18; id x19; long long x20; }*)arg1 frameRate:(double)arg2 enableAVEHighPerformanceProfile:(bool)arg3;
+ (id)hevc10bitMonochromeLosslessSettings:(struct StreamRecordingData { struct opaqueCMFormatDescription {} *x1; bool x2; id x3; id x4; id x5; id x6; id x7; id x8; unsigned long long x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; struct { long long x_17_1_1; int x_17_1_2; unsigned int x_17_1_3; long long x_17_1_4; } x17; unsigned long long x18; id x19; long long x20; }*)arg1 frameRate:(double)arg2 enableAVEHighPerformanceProfile:(bool)arg3;
+ (id)hevc10bitMonochromeSettings:(struct StreamRecordingData { struct opaqueCMFormatDescription {} *x1; bool x2; id x3; id x4; id x5; id x6; id x7; id x8; unsigned long long x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; struct { long long x_17_1_1; int x_17_1_2; unsigned int x_17_1_3; long long x_17_1_4; } x17; unsigned long long x18; id x19; long long x20; }*)arg1 frameRate:(double)arg2 enableAVEHighPerformanceProfile:(bool)arg3;
+ (id)hevc8bitMonochromeLosslessSettings:(struct StreamRecordingData { struct opaqueCMFormatDescription {} *x1; bool x2; id x3; id x4; id x5; id x6; id x7; id x8; unsigned long long x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; struct { long long x_17_1_1; int x_17_1_2; unsigned int x_17_1_3; long long x_17_1_4; } x17; unsigned long long x18; id x19; long long x20; }*)arg1 frameRate:(double)arg2 enableAVEHighPerformanceProfile:(bool)arg3;
+ (id)hevc8bitMonochromeSettings:(struct StreamRecordingData { struct opaqueCMFormatDescription {} *x1; bool x2; id x3; id x4; id x5; id x6; id x7; id x8; unsigned long long x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; struct { long long x_17_1_1; int x_17_1_2; unsigned int x_17_1_3; long long x_17_1_4; } x17; unsigned long long x18; id x19; long long x20; }*)arg1 frameRate:(double)arg2 enableAVEHighPerformanceProfile:(bool)arg3;
+ (id)hevc8bitWithAlphaLosslessSettings:(struct StreamRecordingData { struct opaqueCMFormatDescription {} *x1; bool x2; id x3; id x4; id x5; id x6; id x7; id x8; unsigned long long x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; struct { long long x_17_1_1; int x_17_1_2; unsigned int x_17_1_3; long long x_17_1_4; } x17; unsigned long long x18; id x19; long long x20; }*)arg1 frameRate:(double)arg2 enableAVEHighPerformanceProfile:(bool)arg3;
+ (id)hevc8bitWithAlphaSettings:(struct StreamRecordingData { struct opaqueCMFormatDescription {} *x1; bool x2; id x3; id x4; id x5; id x6; id x7; id x8; unsigned long long x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; struct { long long x_17_1_1; int x_17_1_2; unsigned int x_17_1_3; long long x_17_1_4; } x17; unsigned long long x18; id x19; long long x20; }*)arg1 frameRate:(double)arg2 enableAVEHighPerformanceProfile:(bool)arg3;
+ (id)hevcColorLosslessSettings:(struct StreamRecordingData { struct opaqueCMFormatDescription {} *x1; bool x2; id x3; id x4; id x5; id x6; id x7; id x8; unsigned long long x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; struct { long long x_17_1_1; int x_17_1_2; unsigned int x_17_1_3; long long x_17_1_4; } x17; unsigned long long x18; id x19; long long x20; }*)arg1 frameRate:(double)arg2 enableAVEHighPerformanceProfile:(bool)arg3;
+ (id)hevcColorSettings:(struct StreamRecordingData { struct opaqueCMFormatDescription {} *x1; bool x2; id x3; id x4; id x5; id x6; id x7; id x8; unsigned long long x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; struct { long long x_17_1_1; int x_17_1_2; unsigned int x_17_1_3; long long x_17_1_4; } x17; unsigned long long x18; id x19; long long x20; }*)arg1 frameRate:(double)arg2 enableAVEHighPerformanceProfile:(bool)arg3;
+ (id)hevcColorSettingsLossless:(bool)arg1 quality:(double)arg2 bitsPerSecond:(unsigned long long)arg3 bitDepth10:(bool)arg4 chromaSampling:(long long)arg5 frameRate:(double)arg6 dimensions:(struct { int x1; int x2; })arg7 enableAVEHighPerformanceProfile:(bool)arg8;
+ (bool)isBitDepth10Encoding:(int)arg1;
+ (bool)isLosslessColorEncoding:(int)arg1;
+ (int)matchDeprecatedType:(int)arg1;
+ (id)outputSettingsForStream:(struct StreamRecordingData { struct opaqueCMFormatDescription {} *x1; bool x2; id x3; id x4; id x5; id x6; id x7; id x8; unsigned long long x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; struct { long long x_17_1_1; int x_17_1_2; unsigned int x_17_1_3; long long x_17_1_4; } x17; unsigned long long x18; id x19; long long x20; }*)arg1 defaultFrameRate:(double)arg2 enableAVEHighPerformanceProfile:(bool)arg3;
+ (id)prores422Settings:(struct StreamRecordingData { struct opaqueCMFormatDescription {} *x1; bool x2; id x3; id x4; id x5; id x6; id x7; id x8; unsigned long long x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; struct { long long x_17_1_1; int x_17_1_2; unsigned int x_17_1_3; long long x_17_1_4; } x17; unsigned long long x18; id x19; long long x20; }*)arg1 frameRate:(double)arg2;
+ (id)prores4444Settings:(struct StreamRecordingData { struct opaqueCMFormatDescription {} *x1; bool x2; id x3; id x4; id x5; id x6; id x7; id x8; unsigned long long x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; struct { long long x_17_1_1; int x_17_1_2; unsigned int x_17_1_3; long long x_17_1_4; } x17; unsigned long long x18; id x19; long long x20; }*)arg1 frameRate:(double)arg2;
+ (id)slimSettings:(struct StreamRecordingData { struct opaqueCMFormatDescription {} *x1; bool x2; id x3; id x4; id x5; id x6; id x7; id x8; unsigned long long x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; struct { long long x_17_1_1; int x_17_1_2; unsigned int x_17_1_3; long long x_17_1_4; } x17; unsigned long long x18; id x19; long long x20; }*)arg1 frameRate:(double)arg2;

- (void).cxx_destruct;
- (id)config;
- (double)expectedFrameRate;
- (id)init;
- (id)initWithConfig:(id)arg1;
- (id)initWithFrameRate:(double)arg1;
- (id)initWithFrameRate:(double)arg1 useCustomEncoderConfig:(bool)arg2;
- (id)initWithSettings:(id)arg1;
- (id)settings;
- (bool)useCustomEncoderConfig;

@end
