
@interface PHASESource : PHASEObject {
    double  _dopplerFactor;
    double  _gain;
    NSArray * _shapes;
    double  _spatialResolution;
    void _velocity;
}

@property (nonatomic) double dopplerFactor;
@property (nonatomic) double gain;
@property (nonatomic, readonly, copy) NSArray *shapes;
@property (nonatomic) double spatialResolution;
@property (nonatomic) void velocity;

+ (id)new;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)dopplerFactor;
- (double)gain;
- (id)init;
- (id)initWithEngine:(id)arg1;
- (id)initWithEngine:(id)arg1 shapes:(id)arg2;
- (void)setDopplerFactor:(double)arg1;
- (void)setGain:(double)arg1;
- (void)setSpatialResolution:(double)arg1;
- (void)setVelocity;
- (id)shapes;
- (double)spatialResolution;
- (void)velocity;

@end
