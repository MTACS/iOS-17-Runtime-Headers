
@interface TSDScalarPathSource : TSDPathSource <TSDMixing, TSDSmartPathSource> {
    struct CGSize { 
        double width; 
        double height; 
    }  mNaturalSize;
    double  mScalar;
    int  mType;
}

@property (nonatomic, readonly) double maxScalar;
@property (nonatomic) struct CGSize { double x1; double x2; } naturalSize;
@property (readonly) unsigned long long numberOfControlKnobs;
@property (nonatomic) double scalar;
@property (nonatomic) int type;

+ (id)chevronWithScalar:(double)arg1 naturalSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)pathSourceWithType:(int)arg1 scalar:(double)arg2 naturalSize:(struct CGSize { double x1; double x2; })arg3;
+ (id)rectangleWithNaturalSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)regularPolygonWithScalar:(double)arg1 naturalSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)roundedRectangleWithScalar:(double)arg1 naturalSize:(struct CGSize { double x1; double x2; })arg2;

- (id)bezierPathWithoutFlips;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (struct CGPoint { double x1; double x2; })getControlKnobPosition:(unsigned long long)arg1;
- (id)getFeedbackStringForKnob:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithType:(int)arg1 scalar:(double)arg2 naturalSize:(struct CGSize { double x1; double x2; })arg3;
- (bool)isCircular;
- (bool)isEqual:(id)arg1;
- (bool)isRectangular;
- (double)maxScalar;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (struct CGSize { double x1; double x2; })naturalSize;
- (struct CGPath { }*)newFeedbackPathForKnob:(unsigned long long)arg1;
- (unsigned long long)numberOfControlKnobs;
- (struct CGPoint { double x1; double x2; })p_getControlKnobPointForChevron;
- (struct CGPoint { double x1; double x2; })p_getControlKnobPointForRegularPolygon;
- (struct CGPoint { double x1; double x2; })p_getControlKnobPointForRoundedRect;
- (struct CGPath { }*)p_newChevronPath;
- (struct CGPath { }*)p_newRegularPolygonPath;
- (struct CGPath { }*)p_newRoundedRectPath;
- (void)p_setControlKnobPointForChevron:(struct CGPoint { double x1; double x2; })arg1;
- (void)p_setControlKnobPointForRegularPolygon:(struct CGPoint { double x1; double x2; })arg1;
- (void)p_setControlKnobPointForRoundedRect:(struct CGPoint { double x1; double x2; })arg1;
- (double)scalar;
- (struct CGSize { double x1; double x2; })scaleFactorForInscribedRectangle;
- (void)scaleToNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setControlKnobPosition:(unsigned long long)arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)setNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setScalar:(double)arg1;
- (void)setScalarValue:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)valueForSetSelector:(SEL)arg1;

@end
