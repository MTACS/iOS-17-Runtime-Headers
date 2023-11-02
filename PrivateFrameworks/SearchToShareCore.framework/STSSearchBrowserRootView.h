
@interface STSSearchBrowserRootView : UIView {
    NSMutableArray * _constraints;
    UIView * _contentView;
    double  _headerTopInset;
    STSSearchBrowserHeaderView * _headerView;
}

@property (nonatomic, retain) UIView *contentView;
@property (nonatomic) double headerTopInset;
@property (nonatomic, retain) STSSearchBrowserHeaderView *headerView;

- (void).cxx_destruct;
- (id)contentView;
- (void)didAddSubview:(id)arg1;
- (double)headerTopInset;
- (id)headerView;
- (id)init;
- (void)layoutSubviews;
- (void)setContentView:(id)arg1;
- (void)setHeaderTopInset:(double)arg1;
- (void)setHeaderView:(id)arg1;

@end
