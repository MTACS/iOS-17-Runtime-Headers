
@interface GEOViewportFrame : NSObject {
    double  _altitude;
    float  _distance;
    float  _heading;
    double  _latitude;
    double  _longitude;
    float  _pitch;
}

@property (nonatomic, readonly) double altitude;
@property (nonatomic, readonly) float distance;
@property (nonatomic, readonly) float heading;
@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) double longitude;
@property (nonatomic, readonly) float pitch;

- (double)altitude;
- (float)distance;
- (float)heading;
- (id)initWithAltitude:(double)arg1 latitude:(double)arg2 longitude:(double)arg3 heading:(float)arg4 pitch:(float)arg5 distance:(float)arg6;
- (id)initWithGEOPDViewportFrame:(id)arg1;
- (double)latitude;
- (double)longitude;
- (float)pitch;

@end
