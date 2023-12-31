
@interface _TVVibrancyContainerView : _TVVisualEffectView {
    UIView * _containedView;
}

@property (nonatomic, readonly) UIView *containedView;

- (void).cxx_destruct;
- (id)containedView;
- (id)initWithEffect:(id)arg1 containingView:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
