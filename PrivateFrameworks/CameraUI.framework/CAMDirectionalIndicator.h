
@interface CAMDirectionalIndicator : UIControl <CAMAccessibilityHUDItemProvider> {
    CAShapeLayer * __arrowLayer;
    long long  _direction;
}

@property (nonatomic, readonly) CAShapeLayer *_arrowLayer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long direction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (struct CGSize { double x1; double x2; })_circleSize;
+ (id)_createCircleImage;

- (void).cxx_destruct;
- (id)_arrowLayer;
- (void)_updateArrowColorAnimated:(bool)arg1;
- (void)_updateArrowLineWidth;
- (void)_updateArrowShapeAnimated:(bool)arg1;
- (long long)direction;
- (id)hudItemForAccessibilityHUDManager:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)selectedByAccessibilityHUDManager:(id)arg1;
- (void)setDirection:(long long)arg1;
- (void)setDirection:(long long)arg1 animated:(bool)arg2;
- (void)setSelected:(bool)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)traitCollectionDidChange:(id)arg1;

@end
