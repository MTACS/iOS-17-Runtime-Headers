
@interface PKSpringAnimationFactory : NSObject <NSCopying, PKSpringAnimationFactory> {
    double  _duration;
    id /* block */  _dynamicDurationProvider;
    bool  _needsDurationUpdate;
    double  _speed;
    struct { 
        double mass; 
        double stiffness; 
        double damping; 
        double velocity; 
    }  _state;
    CAMediaTimingFunction * _timing;
}

@property (nonatomic) double damping;
@property (nonatomic, readonly) double duration;
@property (nonatomic) double mass;
@property (nonatomic) double speed;
@property (nonatomic) double stiffness;
@property (nonatomic, retain) CAMediaTimingFunction *timing;
@property (nonatomic) double velocity;

+ (id)createDefaultFactory;
+ (double)defaultDuration;
+ (id)highFrameRateSpringAnimationWithKeyPath:(id)arg1 reason:(unsigned short)arg2;
+ (id)sharedDefaultFactory;
+ (id)springAnimationWithKeyPath:(id)arg1;

- (void).cxx_destruct;
- (id)_createSpringAnimationWithKeyPath:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)damping;
- (void)dealloc;
- (double)duration;
- (id)highFrameRateSpringAnimationWithKeyPath:(id)arg1 reason:(unsigned short)arg2;
- (id)init;
- (id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3;
- (id)initWithSpringState:(struct { double x1; double x2; double x3; double x4; })arg1;
- (double)mass;
- (void)setDamping:(double)arg1;
- (void)setMass:(double)arg1;
- (void)setSpeed:(double)arg1;
- (void)setStiffness:(double)arg1;
- (void)setTiming:(id)arg1;
- (void)setTiming:(id)arg1 withDynamicDurationProvider:(id /* block */)arg2;
- (void)setVelocity:(double)arg1;
- (double)speed;
- (id)springAnimationWithKeyPath:(id)arg1;
- (double)stiffness;
- (id)timing;
- (double)velocity;

@end
