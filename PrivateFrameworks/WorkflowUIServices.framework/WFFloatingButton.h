
@interface WFFloatingButton : UIButton

@property (nonatomic, copy) WFGradient *gradient;
@property (nonatomic, readonly) WFFloatingLayer *layer;

+ (Class)layerClass;

- (void)applyConfiguration:(id)arg1;
- (id)gradient;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setGradient:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
