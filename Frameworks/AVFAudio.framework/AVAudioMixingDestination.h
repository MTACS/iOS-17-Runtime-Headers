
@interface AVAudioMixingDestination : NSObject <AVAudioMixing> {
    void * _impl;
}

@property (nonatomic, readonly) AVAudioConnectionPoint *connectionPoint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) float volume;

- (id)connectionPoint;
- (void)dealloc;
- (id)destinationForMixer:(id)arg1 bus:(unsigned long long)arg2;
- (struct AVAudioMixingImpl { int (**x1)(); struct AVAudioNodeImplBase {} *x2; float x3; float x4; unsigned int x5; unsigned int x6; unsigned int x7; float x8; float x9; struct AVAudio3DPoint { float x_10_1_1; float x_10_1_2; float x_10_1_3; } x10; float x11; float x12; }*)implementation;
- (id)init;
- (id)initWithImpl:(struct AVAudioMixingImpl { int (**x1)(); struct AVAudioNodeImplBase {} *x2; float x3; float x4; unsigned int x5; unsigned int x6; unsigned int x7; float x8; float x9; struct AVAudio3DPoint { float x_10_1_1; float x_10_1_2; float x_10_1_3; } x10; float x11; float x12; }*)arg1;
- (float)obstruction;
- (float)occlusion;
- (float)pan;
- (long long)pointSourceInHeadMode;
- (struct AVAudio3DPoint { float x1; float x2; float x3; })position;
- (float)rate;
- (long long)renderingAlgorithm;
- (float)reverbBlend;
- (void)setObstruction:(float)arg1;
- (void)setOcclusion:(float)arg1;
- (void)setPan:(float)arg1;
- (void)setPointSourceInHeadMode:(long long)arg1;
- (void)setPosition:(struct AVAudio3DPoint { float x1; float x2; float x3; })arg1;
- (void)setRate:(float)arg1;
- (void)setRenderingAlgorithm:(long long)arg1;
- (void)setReverbBlend:(float)arg1;
- (void)setSourceMode:(long long)arg1;
- (void)setVolume:(float)arg1;
- (long long)sourceMode;
- (float)volume;

@end
