
@interface HUQuickControlRingSliderMetrics : NSObject {
    double  _outerRadius;
    HUIntrinsicSizeDescriptor * _sizeDescriptor;
}

@property (nonatomic, readonly) double outerRadius;
@property (nonatomic, readonly) HUIntrinsicSizeDescriptor *sizeDescriptor;

- (void).cxx_destruct;
- (id)initWithSizeDescriptor:(id)arg1 outerRadius:(double)arg2;
- (double)outerRadius;
- (id)sizeDescriptor;

@end
