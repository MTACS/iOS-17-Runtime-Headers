
@interface CAMSlashView : UIView {
    bool  _visible;
}

@property (nonatomic, readonly) CAShapeLayer *_shapeLayer;
@property (getter=isVisible, nonatomic) bool visible;

+ (Class)layerClass;

- (id)_shapeLayer;
- (void)_updateShapeLayerColor;
- (void)_updateShapeLayerLineWidth;
- (void)_updateShapeLayerPath;
- (void)_updateShapeLayerProgressAnimated:(bool)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isVisible;
- (void)layoutSubviews;
- (void)setVisible:(bool)arg1;
- (void)setVisible:(bool)arg1 animated:(bool)arg2;
- (void)tintColorDidChange;

@end
