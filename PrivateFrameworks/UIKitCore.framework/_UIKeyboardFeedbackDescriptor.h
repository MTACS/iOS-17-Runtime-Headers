
@interface _UIKeyboardFeedbackDescriptor : NSObject {
    NSString * _audioFile;
    float  _audioVolume;
    float  _hapticIntensity;
    float  _hapticSharpness;
}

@property (nonatomic, copy) NSString *audioFile;
@property (nonatomic) float audioVolume;
@property (nonatomic) float hapticIntensity;
@property (nonatomic) float hapticSharpness;

+ (id)descriptorWithIntensity:(float)arg1 sharpness:(float)arg2 audio:(id)arg3 volume:(float)arg4;

- (void).cxx_destruct;
- (id)audioFile;
- (float)audioVolume;
- (float)hapticIntensity;
- (float)hapticSharpness;
- (void)setAudioFile:(id)arg1;
- (void)setAudioVolume:(float)arg1;
- (void)setHapticIntensity:(float)arg1;
- (void)setHapticSharpness:(float)arg1;

@end
