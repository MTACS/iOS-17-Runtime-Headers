
@interface PKSwitchSpinnerTableCell : PSTableCell {
    <PKSwitchSpinnerTableCellDelegate> * _delegate;
    bool  _showSpinner;
    UIActivityIndicatorView * _spinner;
    UISwitch * _switch;
}

- (void).cxx_destruct;
- (void)_switchToggled:(id)arg1;
- (void)_updateSubviews;
- (bool)canReload;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)layoutSubviews;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setShowSpinner:(bool)arg1;
- (void)setSwitchIsOn:(bool)arg1;

@end
