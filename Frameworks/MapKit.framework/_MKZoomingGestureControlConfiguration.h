
@interface _MKZoomingGestureControlConfiguration : NSObject <MKZoomingGestureControlConfiguration, NSCopying> {
    double  _decelerationThreshold;
    double  _maximumZoomInVelocity;
    double  _maximumZoomOutVelocity;
    double  _zoomDraggingResistance;
    double  _zoomOutFrictionScale;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) double decelerationThreshold;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double maximumZoomInVelocity;
@property (nonatomic, readonly) double maximumZoomOutVelocity;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double zoomDraggingResistance;
@property (nonatomic, readonly) double zoomOutFrictionScale;

+ (id)configurationForCarPlay;
+ (id)configurationForDigitalCrown;
+ (id)defaultConfiguration;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)decelerationThreshold;
- (id)initWithDecelerationThreshold:(double)arg1 maximumZoomInVelocity:(double)arg2 maximumZoomOutVelocity:(double)arg3 zoomOutFrictionScale:(double)arg4;
- (id)initWithDecelerationThreshold:(double)arg1 maximumZoomInVelocity:(double)arg2 maximumZoomOutVelocity:(double)arg3 zoomOutFrictionScale:(double)arg4 zoomDraggingResistance:(double)arg5;
- (double)maximumZoomInVelocity;
- (double)maximumZoomOutVelocity;
- (double)zoomDraggingResistance;
- (double)zoomOutFrictionScale;

@end
