
@interface NTKMultiInterpolatedColorPalette : NSObject {
    unsigned long long  _arity;
    NSCache * _cache;
    NSMutableArray * _colorInterpolators;
    NSMutableArray * _floatInterpolators;
    NSMutableArray * _freeAxes;
    NSMutableArray * _paletteIndices;
    NSArray * _palettes;
    NSArray * _transitionFractions;
}

@property (nonatomic, retain) NSMutableArray *colorInterpolators;
@property (nonatomic, retain) NSMutableArray *floatInterpolators;
@property (nonatomic, retain) NSArray *palettes;
@property (nonatomic, retain) NSArray *transitionFractions;

+ (bool)resolveInstanceMethod:(SEL)arg1;

- (void).cxx_destruct;
- (id)_combineValue:(id)arg1 and:(id)arg2 with:(double)arg3 onAxis:(unsigned long long)arg4;
- (void)clearCache;
- (id)colorInterpolators;
- (id)floatInterpolators;
- (id)initWithPalettes:(id)arg1;
- (id)interpolatedColorFromSelector:(SEL)arg1 parameter:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)palettes;
- (void)setColorInterpolators:(id)arg1;
- (void)setFloatInterpolators:(id)arg1;
- (void)setPalettes:(id)arg1;
- (void)setTransitionFractions:(id)arg1;
- (id)transitionFractions;
- (id)valueForKey:(id)arg1;

@end
