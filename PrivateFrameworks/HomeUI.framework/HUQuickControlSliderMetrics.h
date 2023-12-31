
@interface HUQuickControlSliderMetrics : NSObject {
    double  _cornerRadius;
    HUIntrinsicSizeDescriptor * _sizeDescriptor;
    double  _widthToCornerRadiusRatio;
}

@property (nonatomic, readonly) double cornerRadius;
@property (nonatomic, readonly) HUIntrinsicSizeDescriptor *sizeDescriptor;
@property (nonatomic, readonly) double widthToCornerRadiusRatio;

- (void).cxx_destruct;
- (double)cornerRadius;
- (id)initWithSizeDescriptor:(id)arg1 cornerRadius:(double)arg2 widthToCornerRadiusRatio:(double)arg3;
- (id)sizeDescriptor;
- (double)widthToCornerRadiusRatio;

@end
