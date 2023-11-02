
@interface PSUIRemoveSIMWarningTableCell : PSTableCell {
    UIImageView * _icon;
    UILabel * _label;
    UILabel * _title;
}

@property (retain) UIImageView *icon;
@property (retain) UILabel *label;
@property (retain) UILabel *title;

- (void).cxx_destruct;
- (void)_setupView:(id)arg1;
- (id)detailTextLabel;
- (id)icon;
- (id)label;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)textLabel;
- (id)title;

@end
