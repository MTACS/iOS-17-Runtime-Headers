
@interface SwiftUI.RenderBoxView : SwiftUI._UIGraphicsView <RBLayerDelegate> {
    void rendersFirstFrameAsynchronously;
}

@property (nonatomic) bool opaque;

+ (Class)layerClass;

- (void)RBLayer:(id)arg1 draw:(id)arg2;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isOpaque;
- (void)setNeedsDisplay;
- (void)setOpaque:(bool)arg1;

@end
