
@interface HULayoutContainerView : UIView {
    UIView * _contentView;
    id /* block */  _layoutBlock;
}

@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, readonly, copy) id /* block */ layoutBlock;

- (void).cxx_destruct;
- (id)contentView;
- (id)initWithContentView:(id)arg1 layoutBlock:(id /* block */)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id /* block */)layoutBlock;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;

@end
