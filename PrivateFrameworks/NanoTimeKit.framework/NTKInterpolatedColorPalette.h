
@interface NTKInterpolatedColorPalette : NSObject {
    NSCache * _cache;
    id /* block */  _colorInterpolator;
    id /* block */  _floatInterpolator;
    NTKFaceColorPalette * _fromPalette;
    NTKFaceColorPalette * _toPalette;
    double  _transitionFraction;
}

@property (nonatomic, copy) id /* block */ colorInterpolator;
@property (nonatomic, copy) id /* block */ floatInterpolator;
@property (nonatomic, copy) NTKFaceColorPalette *fromPalette;
@property (nonatomic, copy) NTKFaceColorPalette *toPalette;
@property (nonatomic) double transitionFraction;

+ (bool)resolveInstanceMethod:(SEL)arg1;

- (void).cxx_destruct;
- (id /* block */)colorInterpolator;
- (id /* block */)floatInterpolator;
- (id)fromPalette;
- (id)initWithColorPalette:(id)arg1;
- (id)initWithFromPalette:(id)arg1 toPalette:(id)arg2;
- (id)interpolatedColorFromSelector:(SEL)arg1 parameter:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setColorInterpolator:(id /* block */)arg1;
- (void)setFloatInterpolator:(id /* block */)arg1;
- (void)setFromPalette:(id)arg1;
- (void)setToPalette:(id)arg1;
- (void)setTransitionFraction:(double)arg1;
- (id)toPalette;
- (double)transitionFraction;
- (id)valueForKey:(id)arg1;

@end
