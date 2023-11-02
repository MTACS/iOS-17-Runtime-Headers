
@interface TSCellularPlanUsesTableViewCell : UITableViewCell {
    CNGeminiBadge * _badge;
    UILabel * _descriptionLabel;
    UILabel * _titleLabel;
}

@property (retain) CNGeminiBadge *badge;
@property (retain) UILabel *descriptionLabel;
@property (retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)badge;
- (id)descriptionLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setBadge:(id)arg1;
- (void)setDescriptionLabel:(id)arg1;
- (void)setLabel:(id)arg1 description:(id)arg2 badge:(id)arg3;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;

@end
