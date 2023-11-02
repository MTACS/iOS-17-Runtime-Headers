
@interface CCUIMutableC2AnimationParameters : CCUIC2AnimationParameters

@property (nonatomic) struct CAFrameRateRange { float x1; float x2; float x3; } frameRateRange;
@property (nonatomic) double friction;
@property (nonatomic) unsigned int highFrameRateReason;
@property (getter=isInteractive, nonatomic) bool interactive;
@property (nonatomic) double tension;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setFrameRateRange:(struct CAFrameRateRange { float x1; float x2; float x3; })arg1;
- (void)setFriction:(double)arg1;
- (void)setHighFrameRateReason:(unsigned int)arg1;
- (void)setInteractive:(bool)arg1;
- (void)setTension:(double)arg1;

@end
