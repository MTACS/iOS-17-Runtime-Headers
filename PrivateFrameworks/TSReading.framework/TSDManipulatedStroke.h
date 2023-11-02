
@interface TSDManipulatedStroke : TSDSmartStroke {
    NSMutableDictionary * mArrows;
    TSDPathManipulation * mManipulation;
    unsigned int  mRandomSeed;
}

@property (nonatomic, retain) TSDPathManipulation *pathManipulation;
@property (nonatomic) unsigned int randomSeed;

+ (Class)mutableClass;

- (void)applyInteriorWrapPropertiesInContext:(struct CGContext { }*)arg1 insideStroke:(bool)arg2;
- (bool)canApplyToShapeRenderable;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)drawsOutsideStrokeBounds;
- (id)initWithName:(id)arg1 color:(id)arg2 width:(double)arg3 cap:(int)arg4 join:(int)arg5 pattern:(id)arg6 miterLimit:(double)arg7;
- (struct CGPath { }*)manipulatePath:(struct CGPath { }*)arg1 withLineWidth:(double)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)p_setupDoodlesManipulation;
- (void)paintPath:(struct CGPath { }*)arg1 wantsInteriorStroke:(bool)arg2 inContext:(struct CGContext { }*)arg3 useFastDrawing:(bool)arg4 parameterized:(bool)arg5 shouldReverseDrawOrder:(bool)arg6;
- (id)pathManipulation;
- (struct CGPath { }*)pathToStrokeFromCGPath:(struct CGPath { }*)arg1;
- (bool)prefersToApplyToShapeRenderableDuringManipulation;
- (unsigned int)randomSeed;
- (double)renderedWidth;
- (void)seedRandom;
- (void)setPathManipulation:(id)arg1;
- (void)setRandomSeed:(unsigned int)arg1;
- (id)strokeLineEnd:(id)arg1;
- (struct CGPath { }*)strokedPath:(struct CGPath { }*)arg1 withLineWidth:(double)arg2 insideStroke:(bool)arg3;

@end
