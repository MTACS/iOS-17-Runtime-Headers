
@interface PSUITurnOnThisLineTableCell : PSTableCell {
    UILabel * _statusLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UILabel *statusLabel;
@property (nonatomic, retain) UILabel *titleLabel;

+ (long long)cellStyle;

- (void).cxx_destruct;
- (void)_setTitle:(id)arg1 andStatus:(id)arg2;
- (void)_updateStatus:(id)arg1;
- (bool)canBeChecked;
- (bool)canReload;
- (id)detailTextLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setStatusLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)statusLabel;
- (id)textLabel;
- (id)titleLabel;

@end
