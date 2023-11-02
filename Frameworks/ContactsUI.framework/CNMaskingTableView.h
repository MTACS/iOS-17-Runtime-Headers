
@interface CNMaskingTableView : UITableView {
    double  _maskingInset;
    UIView * _tableMaskView;
}

@property (nonatomic) double maskingInset;
@property (nonatomic, retain) UIView *tableMaskView;

- (void).cxx_destruct;
- (void)didMoveToWindow;
- (double)maskingInset;
- (void)setMaskingInset:(double)arg1;
- (void)setTableMaskView:(id)arg1;
- (id)tableMaskView;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
