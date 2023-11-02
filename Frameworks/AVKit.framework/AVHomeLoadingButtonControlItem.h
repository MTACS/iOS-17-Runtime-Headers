
@interface AVHomeLoadingButtonControlItem : AVControlItem {
    AVLoadingButtonView * _loadingButtonView;
    UIFont * _titleFont;
}

@property (nonatomic, retain) AVLoadingButtonView *loadingButtonView;
@property (nonatomic) bool showsLoadingIndicator;

- (void).cxx_destruct;
- (void)_buttonTouchUpInside:(id)arg1;
- (void)_updateTintColor;
- (id)initWithTitle:(id)arg1 type:(long long)arg2;
- (id)loadingButtonView;
- (void)setLoadingButtonView:(id)arg1;
- (void)setShowsLoadingIndicator:(bool)arg1;
- (void)setTitleFont:(id)arg1;
- (bool)showsLoadingIndicator;
- (id)titleFont;
- (id)view;

@end
