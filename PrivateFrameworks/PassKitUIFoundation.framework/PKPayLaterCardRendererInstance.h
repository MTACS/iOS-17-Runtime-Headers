
@interface PKPayLaterCardRendererInstance : NSObject {
    double  _angle;
    double  _angularyVelocity;
    void _axis;
    long long  _category;
    double  _explodeTime;
    void _forces;
    double  _mass;
    void _position;
    double  _scale;
    double  _size;
    void _smoothedPosition;
    void _velocity;
}

@property (nonatomic, readonly) double angle;
@property (nonatomic, readonly) double angularyVelocity;
@property (nonatomic, readonly) void axis;
@property (nonatomic, readonly) long long category;
@property (nonatomic, readonly) double explodeTime;
@property (nonatomic, readonly) void forces;
@property (nonatomic, readonly) double mass;
@property (nonatomic, readonly) void position;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) double size;
@property (nonatomic, readonly) void smoothedPosition;
@property (nonatomic, readonly) void velocity;

- (void)addForces;
- (double)angle;
- (double)angularyVelocity;
- (void)applyForces;
- (void)axis;
- (long long)category;
- (void)explodeAtTime:(double)arg1;
- (double)explodeTime;
- (void)forces;
- (id)initWithPosition:(void *)arg1 scale:(void *)arg2 category:(void *)arg3; // needs 3 arg types, found 2: double, long long
- (bool)isIgnoredAtTime:(double)arg1;
- (double)mass;
- (void)position;
- (double)scale;
- (void)setPositionandVelocity;
- (double)size;
- (void)smoothedPosition;
- (struct PayLaterInstanceUniform { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[4]; } x1; })uniformWithSkew:(void *)arg1 now:(void *)arg2 waveAmplitude:(void *)arg3; // needs 3 arg types, found 2: double, double
- (void)velocity;

@end
