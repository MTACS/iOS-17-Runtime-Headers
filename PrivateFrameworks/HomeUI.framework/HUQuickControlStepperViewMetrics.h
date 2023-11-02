
@interface HUQuickControlStepperViewMetrics : NSObject {
    double  _cornerRadius;
    unsigned long long  _orientation;
    HUIntrinsicSizeDescriptor * _sizeDescriptor;
}

@property (nonatomic, readonly) double cornerRadius;
@property (nonatomic, readonly) unsigned long long orientation;
@property (nonatomic, readonly) HUIntrinsicSizeDescriptor *sizeDescriptor;

- (void).cxx_destruct;
- (double)cornerRadius;
- (id)initWithSizeDescriptor:(id)arg1 orientation:(unsigned long long)arg2 cornerRadius:(double)arg3;
- (unsigned long long)orientation;
- (id)sizeDescriptor;

@end
