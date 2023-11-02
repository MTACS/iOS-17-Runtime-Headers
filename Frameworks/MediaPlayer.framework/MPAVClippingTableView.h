
@interface MPAVClippingTableView : UITableView {
    UIView * _footerBackgroundView;
    UIView * _headerBackgroundView;
    NSMutableDictionary * _sectionBackgroundViews;
}

@property (nonatomic, retain) UIView *footerBackgroundView;
@property (nonatomic, retain) UIView *headerBackgroundView;
@property (nonatomic, retain) NSMutableDictionary *sectionBackgroundViews;

- (void).cxx_destruct;
- (id)_createBackgroundView;
- (id)backgroundViewForSection:(unsigned long long)arg1;
- (id)footerBackgroundView;
- (id)headerBackgroundView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2;
- (void)layoutSubviews;
- (id)sectionBackgroundViews;
- (void)setFooterBackgroundView:(id)arg1;
- (void)setHeaderBackgroundView:(id)arg1;
- (void)setSectionBackgroundViews:(id)arg1;

@end
