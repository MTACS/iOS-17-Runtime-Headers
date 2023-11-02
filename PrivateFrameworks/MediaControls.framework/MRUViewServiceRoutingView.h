
@interface MRUViewServiceRoutingView : UIView {
    UIView * _alertView;
    UIView * _contentView;
    double  _cornerRadius;
    MRUViewServiceRoutingFooterView * _footerView;
    bool  _footerVisible;
    MRUViewServiceRoutingHeaderView * _headerView;
    double  _preferredWidth;
    bool  _showAlertView;
    long long  _state;
    MRUVisualStylingProvider * _stylingProvider;
    UITableView * _tableView;
}

@property (nonatomic, retain) UIView *alertView;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic) double cornerRadius;
@property (nonatomic, readonly) MRUViewServiceRoutingFooterView *footerView;
@property (getter=isFooterVisible, nonatomic) bool footerVisible;
@property (nonatomic, readonly) MRUViewServiceRoutingHeaderView *headerView;
@property (nonatomic) double preferredWidth;
@property (nonatomic) bool showAlertView;
@property (nonatomic) long long state;
@property (nonatomic, retain) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic, readonly) UITableView *tableView;

- (void).cxx_destruct;
- (id)alertView;
- (id)contentView;
- (double)cornerRadius;
- (id)footerView;
- (id)headerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isFooterVisible;
- (void)layoutSubviews;
- (double)preferredWidth;
- (void)setAlertView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setFooterVisible:(bool)arg1;
- (void)setPreferredWidth:(double)arg1;
- (void)setShowAlertView:(bool)arg1;
- (void)setState:(long long)arg1;
- (void)setStylingProvider:(id)arg1;
- (bool)showAlertView;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)state;
- (id)stylingProvider;
- (id)tableView;
- (void)updateVisibility;

@end
