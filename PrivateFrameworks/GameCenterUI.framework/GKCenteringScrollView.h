
@interface GKCenteringScrollView : UIScrollView {
    UIView * _contentView;
    UIView * _footerView;
}

@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, retain) UIView *footerView;

- (void).cxx_destruct;
- (void)centerContentViewIfDesirable;
- (id)contentView;
- (id)footerView;
- (void)layoutSubviews;
- (void)setContentView:(id)arg1;
- (void)setFooterView:(id)arg1;

@end
