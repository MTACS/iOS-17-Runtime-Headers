
@interface AXNumericScale : AXScale {
    id /* block */  _apply;
    id /* block */  _invert;
    double  _lowerBound;
    double  _upperBound;
}

@property (nonatomic, copy) id /* block */ apply;
@property (nonatomic, copy) id /* block */ invert;
@property (nonatomic) double lowerBound;
@property (nonatomic) double upperBound;

+ (id)linearScaleWithLowerBound:(double)arg1 upperBound:(double)arg2;
+ (id)lnScaleWithLowerBound:(double)arg1 upperBound:(double)arg2;
+ (id)log10ScaleWithLowerBound:(double)arg1 upperBound:(double)arg2;

- (void).cxx_destruct;
- (id /* block */)apply;
- (id)init;
- (id)initWithLowerBound:(double)arg1 upperBound:(double)arg2 apply:(id /* block */)arg3 invert:(id /* block */)arg4;
- (id /* block */)invert;
- (double)lowerBound;
- (void)setApply:(id /* block */)arg1;
- (void)setInvert:(id /* block */)arg1;
- (void)setLowerBound:(double)arg1;
- (void)setUpperBound:(double)arg1;
- (double)upperBound;

@end
