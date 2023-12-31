
@interface PSUICarrierSpacePlanTableCell : PSTableCell

+ (id)checkIcon;
+ (id)spacerIcon;

- (id)accessoryText;
- (bool)canBeChecked;
- (id)detailText;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (id)primaryText;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setChecked:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
