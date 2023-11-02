
@interface TSDStrokePattern : NSObject <NSCopying, TSDMixing> {
    unsigned long long  _count;
    double  _pattern;
    double  _phase;
    long long  _type;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) bool isDash;
@property (nonatomic, readonly) bool isRoundDash;
@property (nonatomic, readonly) double*pattern;
@property (nonatomic, readonly) long long patternType;
@property (nonatomic, readonly) double phase;

+ (id)dashPatternWithSpacing:(double)arg1;
+ (id)emptyPattern;
+ (id)longDashPattern;
+ (id)mediumDashPattern;
+ (id)roundDashPattern;
+ (id)roundDashPatternWithSpacing:(double)arg1;
+ (id)shortDashPattern;
+ (id)solidPattern;
+ (id)strokePatternWithPattern:(const double*)arg1 count:(unsigned long long)arg2 phase:(double)arg3;

- (void)applyToContext:(struct CGContext { }*)arg1 lineWidth:(double)arg2;
- (void)applyToShapeRenderable:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)description;
- (unsigned long long)hash;
- (void)i_applyToContext:(struct CGContext { }*)arg1 lineWidth:(double)arg2 capStyle:(unsigned long long*)arg3;
- (id)initWithPattern:(const double*)arg1 count:(unsigned long long)arg2 phase:(double)arg3;
- (id)initWithPatternType:(long long)arg1 pattern:(const double*)arg2 count:(unsigned long long)arg3 phase:(double)arg4;
- (bool)isDash;
- (bool)isEqual:(id)arg1;
- (bool)isRoundDash;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (void)p_applyToShapeRenderable:(id)arg1 lineWidth:(double)arg2;
- (id)p_patternString;
- (double)p_renderableLengthForUnclippedPatternWithLineWidth:(double)arg1 withinAvailableLength:(double)arg2;
- (id)p_typeString;
- (double*)pattern;
- (long long)patternType;
- (double)phase;

@end
