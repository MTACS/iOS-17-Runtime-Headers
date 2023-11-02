
@interface CKLineView : UIView {
    CABackdropLayer * _backdropFilterLayer;
    CAShapeLayer * _lineShapeLayer;
    bool  _shouldUseDarkFSMStrokeColor;
}

@property (nonatomic, retain) CABackdropLayer *backdropFilterLayer;
@property (nonatomic, retain) CAShapeLayer *lineShapeLayer;
@property (nonatomic) bool shouldUseDarkFSMStrokeColor;

- (void).cxx_destruct;
- (void)_updateReplyLineColor;
- (void)addFilter:(id)arg1;
- (id)backdropFilterLayer;
- (void)clearFilters;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)lineShapeLayer;
- (void)setBackdropFilterLayer:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLineShapeLayer:(id)arg1;
- (void)setShouldUseDarkFSMStrokeColor:(bool)arg1;
- (bool)shouldUseDarkFSMStrokeColor;
- (void)traitCollectionDidChange:(id)arg1;

@end
