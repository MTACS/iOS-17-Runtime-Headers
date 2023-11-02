
@interface CKMultipleIDSSubscriptionsTableCell : PSTableCell {
    UILabel * _centeredNameLabel;
    UILabel * _nameLabel;
    UILabel * _numberLabel;
}

@property (nonatomic, retain) UILabel *centeredNameLabel;
@property (nonatomic, retain) UILabel *nameLabel;
@property (nonatomic, retain) UILabel *numberLabel;

+ (long long)cellStyle;

- (void).cxx_destruct;
- (bool)canBeChecked;
- (bool)canReload;
- (id)centeredNameLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)nameLabel;
- (id)numberLabel;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setCenteredNameLabel:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setNumberLabel:(id)arg1;

@end
