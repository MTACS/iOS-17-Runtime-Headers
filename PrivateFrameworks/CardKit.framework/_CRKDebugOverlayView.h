
@interface _CRKDebugOverlayView : _CRKHitTestPassThroughView {
    UIColor * _color;
    NSString * _debugText;
    UILabel * _label;
}

@property (nonatomic, copy) UIColor *color;
@property (nonatomic, copy) NSString *debugText;

- (void).cxx_destruct;
- (id)color;
- (id)debugText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setColor:(id)arg1;
- (void)setDebugText:(id)arg1;

@end
