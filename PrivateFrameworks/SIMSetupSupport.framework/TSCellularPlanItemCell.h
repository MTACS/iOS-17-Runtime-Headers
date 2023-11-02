
@interface TSCellularPlanItemCell : UITableViewCell {
    UILabel * _planInfo;
    UILabel * _title;
}

@property (retain) UILabel *planInfo;
@property (retain) UILabel *title;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)planInfo;
- (void)setDisable;
- (void)setIcon:(bool)arg1;
- (void)setPlanInfo:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setTitle:(id)arg1;
- (id)title;

@end
