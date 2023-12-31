
@interface HUVisualEffectContainerView : UIVisualEffectView {
    UIView * _innerContentView;
}

@property (nonatomic, retain) UIView *innerContentView;

- (void).cxx_destruct;
- (id)initWithInnerContentView:(id)arg1;
- (id)innerContentView;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setInnerContentView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;

@end
