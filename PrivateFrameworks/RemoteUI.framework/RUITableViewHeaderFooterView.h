
@interface RUITableViewHeaderFooterView : UITableViewHeaderFooterView {
    UIView<RemoteUITableFooter> * _footerView;
    UIView<RUIHeader> * _headerView;
}

@property (nonatomic, retain) UIView<RemoteUITableFooter> *footerView;
@property (nonatomic, retain) UIView<RUIHeader> *headerView;
@property UITableView *tableView;

- (void).cxx_destruct;
- (void)_embedContentView:(id)arg1;
- (bool)_useLegacyLayout;
- (void)embedFooterView:(id)arg1;
- (void)embedHeaderView:(id)arg1;
- (id)footerView;
- (id)headerView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insetsForHeaderFooter;
- (void)layoutSubviews;
- (void)removeEmbeddedView;
- (void)setFooterView:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;

@end
