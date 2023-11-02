
@interface TSDBrushStroke : TSDSmartStroke

+ (bool)brushStrokeUsesMetal;
+ (Class)mutableClass;
+ (void)p_drawColor:(id)arg1 intoContext:(struct CGContext { }*)arg2 usingImageAsMask:(struct CGImage { }*)arg3 withRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
+ (id)p_metalShaderQueue;
+ (id)p_metalTextureQueue;

- (bool)canApplyToShapeRenderable;
- (int)cap;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)drawsInOneStep;
- (double)horizontalMarginForSwatch;
- (void)i_setCap:(int)arg1;
- (id)initWithArchive:(const struct StrokeArchive { }*)arg1 unarchiver:(id)arg2;
- (id)initWithName:(id)arg1 color:(id)arg2 width:(double)arg3 cap:(int)arg4 join:(int)arg5 pattern:(id)arg6 miterLimit:(double)arg7;
- (double)lineEndInsetAdjustment;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)needsToExtendJoinsForBoundsCalculation;
- (void)p_brushPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2 orDirectly:(id)arg3 parameterized:(bool)arg4 drawRasterized:(bool)arg5 shouldReverseDrawOrder:(bool)arg6 withLayoutOptions:(id)arg7;
- (void)p_brushPath:(id)arg1 withScaling:(struct { double x1; double x2; })arg2 inElementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 intoPath:(id)arg4 orIntoVector:(void*)arg5 sectionIndex:(unsigned long long*)arg6 viewScale:(double)arg7 withLayoutOptions:(id)arg8 currentSubpathIndex:(unsigned long long)arg9 cachedCurrentElementPercentage:(struct { id x1; unsigned long long x2; double x3; }*)arg10;
- (void)p_brushSection:(id)arg1 sectionIndex:(unsigned long long)arg2 ontoPath:(id)arg3 inElementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 intoPath:(id)arg5 orIntoVector:(void*)arg6 viewScale:(double)arg7 strokeTileLayout:(struct { double x1; double x2; double x3; double x4; })arg8 cachedCurrentElementPercentage:(struct { id x1; unsigned long long x2; double x3; }*)arg9;
- (long long)p_fastElementPercentage:(double*)arg1 forOverallPercentage:(double)arg2 onPath:(id)arg3 withCachedCurrentElementPercentage:(struct { id x1; unsigned long long x2; double x3; }*)arg4;
- (void)p_finishMetalRenderInContext:(struct CGContext { }*)arg1 orDirectly:(id)arg2 pathVertexData:(void*)arg3 parameterized:(bool)arg4 shouldReverseDrawOrder:(bool)arg5 withLayoutOptions:(id)arg6;
- (bool)p_isDrawingRasterizedIntoPDFWithContext:(struct CGContext { }*)arg1;
- (bool)p_isFreehandDrawingStrokeWithFixedTileWidth;
- (id)p_metalBrushShaderForPixelFormat:(unsigned long long)arg1 andDevice:(id)arg2;
- (id)p_metalOpacityShaderForPixelFormat:(unsigned long long)arg1 andDevice:(id)arg2;
- (id)p_metalTextureForCurrentStrokeAndDevice:(id)arg1;
- (bool)p_prefersRasterRenderingInContext:(struct CGContext { }*)arg1;
- (void)p_rasterBrushPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2 orDirectly:(id)arg3 parameterized:(bool)arg4 shouldReverseDrawOrder:(bool)arg5 withLayoutOptions:(id)arg6;
- (void)p_rasterRenderSection:(id)arg1 sectionIndex:(unsigned long long)arg2 ontoPath:(id)arg3 inElementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 into:(void*)arg5 viewScale:(double)arg6 strokeTileLayout:(struct { double x1; double x2; double x3; double x4; })arg7 cachedCurrentElementPercentage:(struct { id x1; unsigned long long x2; double x3; }*)arg8;
- (bool)p_shouldDrawAsVectorInContext:(struct CGContext { }*)arg1;
- (void)paintLineEnd:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(struct CGContext { }*)arg5 useFastDrawing:(bool)arg6;
- (void)paintPath:(struct CGPath { }*)arg1 directlyUsingContext:(id)arg2 withLayoutOptions:(id)arg3;
- (void)paintPath:(struct CGPath { }*)arg1 wantsInteriorStroke:(bool)arg2 inContext:(struct CGContext { }*)arg3 useFastDrawing:(bool)arg4 parameterized:(bool)arg5 shouldReverseDrawOrder:(bool)arg6;
- (void)paintPath:(struct CGPath { }*)arg1 wantsInteriorStroke:(bool)arg2 inContext:(struct CGContext { }*)arg3 useFastDrawing:(bool)arg4 parameterized:(bool)arg5 shouldReverseDrawOrder:(bool)arg6 withLayoutOptions:(id)arg7;
- (bool)prefersToApplyToShapeRenderableDuringManipulation;
- (id)strokeLineEnd:(id)arg1;
- (double)suggestedMinimumLineWidth;
- (bool)supportsPattern;

@end
