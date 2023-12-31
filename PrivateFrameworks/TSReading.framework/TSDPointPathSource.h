
@interface TSDPointPathSource : TSDPathSource <TSDMixing, TSDSmartPathSource> {
    struct CGSize { 
        double width; 
        double height; 
    }  mNaturalSize;
    struct CGPoint { 
        double x; 
        double y; 
    }  mPoint;
    int  mType;
}

@property struct CGSize { double x1; double x2; } naturalSize;
@property (readonly) unsigned long long numberOfControlKnobs;
@property struct CGPoint { double x1; double x2; } point;
@property int type;

+ (id)doubleArrowWithPoint:(struct CGPoint { double x1; double x2; })arg1 naturalSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)leftSingleArrowWithPoint:(struct CGPoint { double x1; double x2; })arg1 naturalSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)pathSourceWithType:(int)arg1 point:(struct CGPoint { double x1; double x2; })arg2 naturalSize:(struct CGSize { double x1; double x2; })arg3;
+ (id)plusWithPoint:(struct CGPoint { double x1; double x2; })arg1 naturalSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)rightSingleArrowWithPoint:(struct CGPoint { double x1; double x2; })arg1 naturalSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)starWithPoint:(struct CGPoint { double x1; double x2; })arg1 naturalSize:(struct CGSize { double x1; double x2; })arg2;

- (id)bezierPathWithoutFlips;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (struct CGPoint { double x1; double x2; })getControlKnobPosition:(unsigned long long)arg1;
- (id)getFeedbackStringForKnob:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithType:(int)arg1 point:(struct CGPoint { double x1; double x2; })arg2 naturalSize:(struct CGSize { double x1; double x2; })arg3;
- (bool)isCircular;
- (bool)isEqual:(id)arg1;
- (bool)isRectangular;
- (struct CGPoint { double x1; double x2; })maxPointValue;
- (struct CGPoint { double x1; double x2; })minPointValue;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (struct CGSize { double x1; double x2; })naturalSize;
- (struct CGPath { }*)newFeedbackPathForKnob:(unsigned long long)arg1;
- (unsigned long long)numberOfControlKnobs;
- (struct CGPoint { double x1; double x2; })p_getControlKnobPointForArrow;
- (struct CGPoint { double x1; double x2; })p_getControlKnobPointForPlus;
- (struct CGPoint { double x1; double x2; })p_getControlKnobPointForStarInnerRadius;
- (struct CGPoint { double x1; double x2; })p_getControlKnobPointForStarPoints;
- (bool)p_isFlippedDoubleArrow;
- (bool)p_isRightFacingArrow;
- (struct CGPath { }*)p_newArrowPath;
- (struct CGPath { }*)p_newPlusPath;
- (struct CGPath { }*)p_newStarPath;
- (void)p_setControlKnobPointForArrow:(struct CGPoint { double x1; double x2; })arg1;
- (void)p_setControlKnobPointForPlus:(struct CGPoint { double x1; double x2; })arg1;
- (void)p_setControlKnobPointForStarInnerRadius:(struct CGPoint { double x1; double x2; })arg1;
- (void)p_setControlKnobPointForStarPoints:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })point;
- (struct CGSize { double x1; double x2; })scaleFactorForInscribedRectangle;
- (void)scaleToNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setControlKnobPosition:(unsigned long long)arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)setNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPointValue:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)valueForSetSelector:(SEL)arg1;

@end
