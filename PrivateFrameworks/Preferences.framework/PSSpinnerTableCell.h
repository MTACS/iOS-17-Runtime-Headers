
@interface PSSpinnerTableCell : PSTableCell {
    UIActivityIndicatorView * _spinner;
}

@property (nonatomic, readonly) UIActivityIndicatorView *spinner;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (id)spinner;

@end
