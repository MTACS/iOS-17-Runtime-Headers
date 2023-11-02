
@interface TSCellularPlanUsesDataSwitchCell : UITableViewCell {
    UISwitch * _switchControl;
    UILabel * _titleLabel;
}

@property (nonatomic, readonly) UISwitch *switchControl;
@property (retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setTitleLabel:(id)arg1;
- (id)switchControl;
- (id)titleLabel;

@end
