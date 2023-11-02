
@interface SUFooterContainerView : UIView {
    UIView * _contentView;
    UIView * _footerView;
    bool  _footerVisible;
}

@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, retain) UIView *footerView;
@property (getter=isFooterVisible, nonatomic) bool footerVisible;

- (void).cxx_destruct;
- (id)contentView;
- (id)footerView;
- (bool)isFooterVisible;
- (void)layoutSubviews;
- (void)setContentView:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void)setFooterVisible:(bool)arg1;

@end
