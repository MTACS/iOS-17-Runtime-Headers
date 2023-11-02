
@interface _HKLegendDot : UIView {
    UIColor * _dotColor;
    UIColor * _innerDotColor;
    CALayer * _innerDotLayer;
}

@property (nonatomic, retain) UIColor *dotColor;
@property (nonatomic, retain) UIColor *innerDotColor;
@property (nonatomic, retain) CALayer *innerDotLayer;

- (void).cxx_destruct;
- (id)dotColor;
- (id)init;
- (id)innerDotColor;
- (id)innerDotLayer;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)setDotColor:(id)arg1;
- (void)setInnerDotColor:(id)arg1;
- (void)setInnerDotLayer:(id)arg1;

@end
