
@interface MRMutableAudioDataBlock : MRAudioDataBlock

@property (nonatomic, retain) MRAudioBuffer *buffer;
@property (nonatomic) float gain;
@property (nonatomic) struct { double x1; double x2; } time;

- (void)setBuffer:(id)arg1;
- (void)setGain:(float)arg1;
- (void)setTime:(struct { double x1; double x2; })arg1;

@end
