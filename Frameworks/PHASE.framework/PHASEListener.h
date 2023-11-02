
@interface PHASEListener : PHASEObject {
    double  _dopplerFactor;
    double  _gain;
    void _velocity;
}

@property (nonatomic) double dopplerFactor;
@property (nonatomic) double gain;
@property (nonatomic) void velocity;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)dopplerFactor;
- (double)gain;
- (id)init;
- (id)initWithEngine:(id)arg1;
- (id)initWithEngine:(id)arg1 entityType:(unsigned int)arg2;
- (void)setDopplerFactor:(double)arg1;
- (void)setGain:(double)arg1;
- (void)setVelocity;
- (void)velocity;

@end
