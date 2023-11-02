
@interface PTCinematographyFocusPuller : NSObject {
    float  _alpha;
    float  _focusDistance;
    float  _maximumAcceleration;
    float  _maximumVelocity;
    float  _resistance;
    unsigned long long  _sampleCount;
    unsigned long long  _strategy;
    float  _targetDistance;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _time;
    float  _velocity;
}

@property float alpha;
@property float focusDistance;
@property (readonly) float maximumAcceleration;
@property (readonly) float maximumVelocity;
@property (readonly) float resistance;
@property unsigned long long sampleCount;
@property (readonly) unsigned long long strategy;
@property float targetDistance;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } time;
@property float velocity;

+ (float)defaultEMASampleCount;
+ (float)defaultMaximumVelocity;
+ (float)defaultResistance;
+ (unsigned long long)defaultStrategy;

- (id)_asCinematographyDictionary;
- (float)_emaDelta:(float)arg1;
- (id)_initWithCinematographyDictionary:(id)arg1;
- (float)_minimumTimestepsToMoveBy:(float)arg1 maxddx:(float)arg2;
- (float)_weightedDialDelta:(float)arg1 timeDelta:(float)arg2;
- (float)alpha;
- (float)focusDistance;
- (id)init;
- (id)initWithExponentialMovingAverageAlpha:(float)arg1;
- (id)initWithExponentialMovingAverageSampleCount:(unsigned long long)arg1;
- (id)initWithMaximumVelocity:(float)arg1 resistance:(float)arg2;
- (float)maximumAcceleration;
- (float)maximumVelocity;
- (float)pullTowardFocusDistance:(float)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (float)pullTowardFocusDistance:(float)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 missing:(bool)arg3;
- (void)reset;
- (float)resistance;
- (unsigned long long)sampleCount;
- (void)setAlpha:(float)arg1;
- (void)setFocusDistance:(float)arg1;
- (void)setFocusDistance:(float)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)setSampleCount:(unsigned long long)arg1;
- (void)setTargetDistance:(float)arg1;
- (void)setTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setVelocity:(float)arg1;
- (unsigned long long)strategy;
- (float)targetDistance;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;
- (float)velocity;

@end
