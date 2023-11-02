
@interface IHKSliderSpec : NSObject {
    double  identity;
    double  max;
    double  min;
}

@property (nonatomic) double identity;
@property (nonatomic) double max;
@property (nonatomic) double min;

- (void)_initWithMin:(double)arg1 max:(double)arg2 identity:(double)arg3;
- (id)description;
- (double)identity;
- (id)init;
- (id)initWithMin:(double)arg1 max:(double)arg2;
- (id)initWithMin:(double)arg1 max:(double)arg2 identity:(double)arg3;
- (double)max;
- (double)min;
- (void)setIdentity:(double)arg1;
- (void)setMax:(double)arg1;
- (void)setMin:(double)arg1;
- (double)toNativeRange:(double)arg1;
- (double)toNormalizedRange:(double)arg1;

@end
