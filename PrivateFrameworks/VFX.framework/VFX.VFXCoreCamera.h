
@interface VFX.VFXCoreCamera : NSObject {
    void instance;
}

@property (nonatomic, readonly) float aperture;
@property (nonatomic, readonly) float exposure;
@property (nonatomic, readonly) float fStop;
@property (nonatomic, readonly) float fieldOfView;
@property (nonatomic, readonly) void filmOffset;
@property (nonatomic, readonly) float focalLength;
@property (nonatomic, readonly) float focusDistance;
@property (nonatomic) bool isOrthographic;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) struct { } orientation;
@property (nonatomic) void position;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } projection;
@property (nonatomic, readonly) BOOL projectionDirection;
@property (nonatomic, readonly) bool reverseZ;
@property (nonatomic, readonly) float scale;
@property (nonatomic, readonly) float sensorSize;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } worldTransform;
@property (nonatomic, readonly) float zFar;
@property (nonatomic, readonly) float zNear;

- (float)aperture;
- (float)exposure;
- (float)fStop;
- (float)fieldOfView;
- (void)filmOffset;
- (float)focalLength;
- (float)focusDistance;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isOrthographic;
- (id)name;
- (struct { })orientation;
- (void)position;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })projection;
- (BOOL)projectionDirection;
- (bool)reverseZ;
- (float)scale;
- (float)sensorSize;
- (void)setIsOrthographic:(bool)arg1;
- (void)setOrientation:(struct { })arg1;
- (void)setPosition;
- (void)setProjection:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })worldTransform;
- (float)zFar;
- (float)zNear;

@end
