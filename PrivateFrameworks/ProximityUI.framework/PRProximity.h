
@interface PRProximity : NSObject {
    float  _azimuth;
    bool  _azimuthIsValid;
    float  _elevation;
    bool  _elevationIsValid;
    float  _range;
    double  _timestamp;
}

@property (nonatomic, readonly) float azimuth;
@property (nonatomic, readonly) bool azimuthIsValid;
@property (nonatomic, readonly) float elevation;
@property (nonatomic, readonly) bool elevationIsValid;
@property (nonatomic, readonly) float range;
@property (nonatomic, readonly) double timestamp;

- (float)azimuth;
- (bool)azimuthIsValid;
- (float)elevation;
- (bool)elevationIsValid;
- (id)initWithTime:(double)arg1 range:(float)arg2;
- (id)initWithTime:(double)arg1 range:(float)arg2 azimuth:(float)arg3 elevation:(float)arg4;
- (float)range;
- (double)timestamp;
- (void)vector;

@end
