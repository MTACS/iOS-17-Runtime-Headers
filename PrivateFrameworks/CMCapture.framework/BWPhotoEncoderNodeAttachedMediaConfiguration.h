
@interface BWPhotoEncoderNodeAttachedMediaConfiguration : NSObject {
    float  _mainImageDownscalingFactor;
    bool  _propagatesDownstream;
}

@property (nonatomic, readonly) float mainImageDownscalingFactor;
@property (nonatomic, readonly) bool propagatesDownstream;

- (id)initWithMainImageDownscalingFactor:(float)arg1 propagatesDownstream:(bool)arg2;
- (float)mainImageDownscalingFactor;
- (bool)propagatesDownstream;

@end
