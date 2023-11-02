
@interface PSUIDanglingPlanTableCell : PSTableCell {
    UILabel * _nameLabel;
    UILabel * _numberLabel;
    UILabel * _statusLabel;
}

@property (nonatomic, retain) UILabel *nameLabel;
@property (nonatomic, retain) UILabel *numberLabel;
@property (nonatomic, retain) UILabel *statusLabel;

+ (long long)cellStyle;

- (void).cxx_destruct;
- (void)_setLabel:(id)arg1 andPhoneNumber:(id)arg2;
- (bool)canBeChecked;
- (bool)canReload;
- (id)detailTextLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)nameLabel;
- (id)numberLabel;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setNumberLabel:(id)arg1;
- (void)setStatusLabel:(id)arg1;
- (id)statusLabel;
- (id)textLabel;

@end
