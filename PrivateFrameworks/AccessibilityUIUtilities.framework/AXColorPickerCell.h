
@interface AXColorPickerCell : PSControlTableCell

- (id)_colorValue;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (bool)canReload;
- (id)controlValue;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (bool)isAccessibilityElement;
- (id)newControl;
- (void)prepareForReuse;
- (void)reloadWithSpecifier:(id)arg1 animated:(bool)arg2;
- (void)setValue:(id)arg1;

@end
