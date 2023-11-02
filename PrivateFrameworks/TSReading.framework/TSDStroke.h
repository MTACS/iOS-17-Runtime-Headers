
@interface TSDStroke : NSObject <NSCopying, NSMutableCopying, TSDMixing, TSDPathPainter> {
    double  _actualWidth;
    int  _cap;
    TSUColor * _color;
    int  _join;
    double  _miterLimit;
    TSDStrokePattern * _pattern;
    double  _width;
}

@property (nonatomic, readonly) double actualWidth;
@property (nonatomic, readonly) bool canApplyDirectlyToRepRenderable;
@property (nonatomic, readonly) bool canApplyToShapeRenderable;
@property (nonatomic, readonly) int cap;
@property (nonatomic, readonly, copy) TSUColor *color;
@property (nonatomic, readonly) double dashSpacing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool dontClearBackground;
@property (nonatomic, readonly) bool drawsInOneStep;
@property (nonatomic, readonly) bool drawsOutsideStrokeBounds;
@property (nonatomic, readonly) bool empty;
@property (readonly) unsigned long long hash;
@property (nonatomic) double i_actualWidth;
@property (setter=i_setCap:, nonatomic) int i_cap;
@property (nonatomic, copy) TSUColor *i_color;
@property (nonatomic) int i_join;
@property (nonatomic) double i_miterLimit;
@property (setter=i_setPattern:, nonatomic, copy) TSDStrokePattern *i_pattern;
@property (nonatomic) double i_width;
@property (nonatomic, readonly) bool isDash;
@property (nonatomic, readonly) bool isFrame;
@property (nonatomic, readonly) bool isNearlyWhite;
@property (nonatomic, readonly) bool isNullStroke;
@property (nonatomic, readonly) bool isRoundDash;
@property (nonatomic, readonly) int join;
@property (nonatomic, readonly) double miterLimit;
@property (nonatomic, readonly) bool needsToExtendJoinsForBoundsCalculation;
@property (nonatomic, readonly) struct _TSDStrokeOutsets { double x1; double x2; double x3; double x4; } outsets;
@property (nonatomic, readonly, copy) TSDStrokePattern *pattern;
@property (nonatomic, readonly) bool prefersToApplyToShapeRenderableDuringManipulation;
@property (nonatomic, readonly) double renderedWidth;
@property (nonatomic, readonly) bool shouldAntialiasDefeat;
@property (nonatomic, readonly) bool shouldRender;
@property (nonatomic, readonly) bool solid;
@property (nonatomic, readonly) double suggestedMinimumLineWidth;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsColor;
@property (nonatomic, readonly) bool supportsLineOptions;
@property (nonatomic, readonly) bool supportsPattern;
@property (nonatomic, readonly) bool supportsWidth;
@property (nonatomic, readonly) double width;

+ (bool)canMixWithNilObjects;
+ (id)editedStrokeFromModelStroke:(id)arg1 selectedStroke:(id)arg2;
+ (id)emptyStroke;
+ (id)i_newEmptyStroke;
+ (id)i_newStroke;
+ (long long)indexOfStroke:(id)arg1 strokeArray:(id)arg2;
+ (Class)mutableClass;
+ (id)stroke;
+ (id)strokeWithColor:(id)arg1 width:(double)arg2;
+ (id)strokeWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5;

- (void).cxx_destruct;
- (double)actualWidth;
- (void)applyInteriorWrapPropertiesToContext:(struct CGContext { }*)arg1 insideStroke:(bool)arg2;
- (void)applyToContext:(struct CGContext { }*)arg1;
- (void)applyToContext:(struct CGContext { }*)arg1 insideStroke:(bool)arg2;
- (void)applyToRepRenderable:(id)arg1 withScale:(double)arg2;
- (void)applyToShapeRenderable:(id)arg1 insideStroke:(bool)arg2 withScale:(double)arg3;
- (void)applyToShapeRenderable:(id)arg1 withScale:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForLineEnd:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 atAngle:(double)arg3 withScale:(double)arg4 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg5;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForPath:(id)arg1;
- (bool)canApplyDirectlyToRepRenderable;
- (bool)canApplyToShapeRenderable;
- (bool)canDrawWithOtherStroke:(id)arg1;
- (int)cap;
- (id)color;
- (id)colorForCGContext:(struct CGContext { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)dashSpacing;
- (id)description;
- (bool)dontClearBackground;
- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (bool)drawsInOneStep;
- (bool)drawsOutsideStrokeBounds;
- (bool)empty;
- (unsigned long long)hash;
- (double)horizontalMarginForSwatch;
- (double)i_actualWidth;
- (int)i_cap;
- (id)i_color;
- (int)i_join;
- (double)i_miterLimit;
- (id)i_pattern;
- (void)i_setCap:(int)arg1;
- (void)i_setPattern:(id)arg1;
- (void)i_setPatternPropertiesFromStroke:(id)arg1;
- (void)i_setPropertiesFromStroke:(id)arg1;
- (double)i_width;
- (id)init;
- (id)initWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5;
- (id)initWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5 miterLimit:(double)arg6;
- (bool)isDash;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToStroke:(id)arg1;
- (bool)isFrame;
- (bool)isNearlyWhite;
- (bool)isNullStroke;
- (bool)isRoundDash;
- (int)join;
- (double)lineEndInsetAdjustment;
- (double)miterLimit;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)needsToExtendJoinsForBoundsCalculation;
- (struct _TSDStrokeOutsets { double x1; double x2; double x3; double x4; })outsets;
- (void)p_strokePathChunk:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2 wantsInteriorStroke:(bool)arg3;
- (void)paintLineEnd:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(struct CGContext { }*)arg5;
- (void)paintLineEnd:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(struct CGContext { }*)arg5 useFastDrawing:(bool)arg6;
- (void)paintPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (void)paintPath:(struct CGPath { }*)arg1 wantsInteriorStroke:(bool)arg2 inContext:(struct CGContext { }*)arg3;
- (void)paintPath:(struct CGPath { }*)arg1 wantsInteriorStroke:(bool)arg2 inContext:(struct CGContext { }*)arg3 useFastDrawing:(bool)arg4 parameterized:(bool)arg5 shouldReverseDrawOrder:(bool)arg6;
- (void)paintRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (void)paintRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 wantsInteriorStroke:(bool)arg2 inContext:(struct CGContext { }*)arg3;
- (id)pathForLineEnd:(id)arg1 wrapPath:(bool)arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3 atAngle:(double)arg4 withScale:(double)arg5;
- (struct CGPath { }*)pathToStrokeFromCGPath:(struct CGPath { }*)arg1;
- (id)pathToStrokeFromTSDBezierPath:(id)arg1;
- (id)pattern;
- (bool)prefersToApplyToShapeRenderableDuringManipulation;
- (double)renderedWidth;
- (void)setI_actualWidth:(double)arg1;
- (void)setI_color:(id)arg1;
- (void)setI_join:(int)arg1;
- (void)setI_miterLimit:(double)arg1;
- (void)setI_width:(double)arg1;
- (bool)shouldAntialiasDefeat;
- (bool)shouldRender;
- (bool)solid;
- (id)strokeByTransformingByTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (id)strokeLineEnd:(id)arg1;
- (double)suggestedMinimumLineWidth;
- (bool)supportsColor;
- (bool)supportsLineOptions;
- (bool)supportsPattern;
- (bool)supportsWidth;
- (double)width;

@end