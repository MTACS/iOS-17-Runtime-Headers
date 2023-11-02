
@interface UITextMagnifierCaret : UITextMagnifier {
    struct CGPoint { 
        double x; 
        double y; 
    }  _offset;
    double  _yOffset;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } offset;

+ (id)activeCaretMagnifier;
+ (Class)renderClass;
+ (id)sharedCaretMagnifier;

- (struct CGPoint { double x1; double x2; })animationPoint;
- (void)beginMagnifyingTarget:(id)arg1 text:(id)arg2 magnificationPoint:(struct CGPoint { double x1; double x2; })arg3 offset:(struct CGPoint { double x1; double x2; })arg4 animated:(bool)arg5;
- (id)initWithFrame;
- (bool)isHorizontal;
- (struct CGPoint { double x1; double x2; })offset;
- (double)offsetFromMagnificationPoint;
- (void)remove;
- (void)setAnimationPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOffset:(struct CGPoint { double x1; double x2; })arg1;
- (bool)terminalPointPlacedCarefully;
- (void)updateFrameAndOffset;
- (void)zoomDownAnimation;
- (void)zoomUpAnimation;

@end
