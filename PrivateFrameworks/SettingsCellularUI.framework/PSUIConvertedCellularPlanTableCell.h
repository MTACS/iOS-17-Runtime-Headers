
@interface PSUIConvertedCellularPlanTableCell : PSTableCell {
    UILabel * _descriptionLabel;
    UILabel * _numberLabel;
    UILabel * _statusLabel;
}

@property (nonatomic, retain) UILabel *descriptionLabel;
@property (nonatomic, retain) UILabel *numberLabel;
@property (nonatomic, retain) UILabel *statusLabel;

+ (long long)cellStyle;

- (void).cxx_destruct;
- (void)_setLabel:(id)arg1 andDescription:(id)arg2;
- (bool)canBeChecked;
- (bool)canReload;
- (id)descriptionLabel;
- (id)detailTextLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)numberLabel;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setDescriptionLabel:(id)arg1;
- (void)setNumberLabel:(id)arg1;
- (void)setStatusLabel:(id)arg1;
- (id)statusLabel;
- (id)textLabel;

@end
