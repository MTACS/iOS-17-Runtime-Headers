
@interface AVMobileFluidSliderMark : NSObject {
    float  _endValue;
    UIColor * _filledColor;
    unsigned long long  _markType;
    float  _startValue;
    UIColor * _unfilledColor;
}

@property (nonatomic, readonly) float endValue;
@property (nonatomic, readonly) UIColor *filledColor;
@property (nonatomic, readonly) unsigned long long markType;
@property (nonatomic, readonly) float startValue;
@property (nonatomic, readonly) UIColor *unfilledColor;

+ (id)interstitialMarkAtValue:(float)arg1;
+ (id)liveEdgeMarkAtValue:(float)arg1;

- (void).cxx_destruct;
- (float)endValue;
- (id)filledColor;
- (id)initWithStartValue:(float)arg1 endValue:(float)arg2 filledColor:(id)arg3 unfilledColor:(id)arg4 markWithType:(unsigned long long)arg5;
- (unsigned long long)markType;
- (float)startValue;
- (id)unfilledColor;

@end
