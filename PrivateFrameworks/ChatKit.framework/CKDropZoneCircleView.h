
@interface CKDropZoneCircleView : UIView {
    CAShapeLayer * _dropZoneShapeLayer;
    bool  _isAnimating;
}

@property (nonatomic, retain) CAShapeLayer *dropZoneShapeLayer;
@property (nonatomic, readonly) bool isAnimating;

- (void).cxx_destruct;
- (void)_updateShapeLayerStrokeColor;
- (id)dropZoneShapeLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAnimating;
- (void)layoutSubviews;
- (void)setDropZoneShapeLayer:(id)arg1;
- (id)spinAnimation;
- (void)startAnimating;
- (void)stopAnimating;
- (void)traitCollectionDidChange:(id)arg1;

@end
