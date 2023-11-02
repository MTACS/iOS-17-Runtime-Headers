
@interface TSCellularPlanLabelTableViewCell : UITableViewCell {
    CNGeminiBadge * _badge;
    UILabel * _label;
}

@property (retain) CNGeminiBadge *badge;
@property (retain) UILabel *label;

- (void).cxx_destruct;
- (id)badge;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)label;
- (void)setBadge:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabel:(id)arg1 badge:(id)arg2;
- (void)setLabelWithNoBadge:(id)arg1;

@end
