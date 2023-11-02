
@interface PSSliderTableCell : PSControlTableCell {
    UIView * _disabledView;
}

- (void).cxx_destruct;
- (void)_configureLayout;
- (bool)canReload;
- (id)controlValue;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (id)newControl;
- (void)prepareForReuse;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setValue:(id)arg1;
- (id)titleLabel;

@end
