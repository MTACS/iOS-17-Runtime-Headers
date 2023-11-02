
@interface _HKDateContentLayout : UIView {
    UIView * _contentView;
    UIView * _dateView;
}

@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, retain) UIView *dateView;

- (void).cxx_destruct;
- (void)_invalidateLayout;
- (double)_maximumViewWidth;
- (double)_totalViewHeight;
- (long long)_viewCount;
- (id)contentView;
- (id)dateView;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setContentView:(id)arg1;
- (void)setDateView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
