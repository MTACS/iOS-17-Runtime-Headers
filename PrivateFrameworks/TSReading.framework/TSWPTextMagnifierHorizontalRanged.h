
@interface TSWPTextMagnifierHorizontalRanged : TSWPTextMagnifierRanged {
    bool  _shouldIgnoreTextInputEditor;
}

@property (nonatomic) bool shouldIgnoreTextInputEditor;

+ (id)sharedRangedMagnifier;

- (void)beginMagnifyingTarget:(id)arg1 magnificationPoint:(struct CGPoint { double x1; double x2; })arg2 offset:(struct CGPoint { double x1; double x2; })arg3 animated:(bool)arg4;
- (double)currentOffset;
- (void)dealloc;
- (void)drawMagnifierClippedCanvasLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (id)initWithDefaultFrame;
- (id)maskImageName;
- (id)overlayImageName;
- (void)remove;
- (void)setShouldIgnoreTextInputEditor:(bool)arg1;
- (bool)shouldHideCanvasLayer;
- (bool)shouldIgnoreTextInputEditor;
- (void)stopMagnifying:(bool)arg1;
- (id)underlayImageName;
- (void)updateFrame;
- (void)zoomDownAnimation;
- (void)zoomUpAnimation;

@end
