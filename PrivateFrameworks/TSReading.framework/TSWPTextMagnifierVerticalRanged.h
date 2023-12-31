
@interface TSWPTextMagnifierVerticalRanged : TSWPTextMagnifierRanged

+ (id)sharedRangedMagnifier;

- (void)beginMagnifyingTarget:(id)arg1 magnificationPoint:(struct CGPoint { double x1; double x2; })arg2 offset:(struct CGPoint { double x1; double x2; })arg3 animated:(bool)arg4;
- (double)currentOffset;
- (void)dealloc;
- (void)drawMagnifierClippedCanvasLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (id)initWithDefaultFrame;
- (id)maskImageName;
- (id)overlayImageName;
- (void)remove;
- (bool)shouldHideCanvasLayer;
- (void)stopMagnifying:(bool)arg1;
- (id)underlayImageName;
- (void)updateFrame;
- (void)zoomLeftAnimation;
- (void)zoomRightAnimation;

@end
