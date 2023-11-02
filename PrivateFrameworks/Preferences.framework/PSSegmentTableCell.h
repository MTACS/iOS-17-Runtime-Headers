
@interface PSSegmentTableCell : PSControlTableCell {
    NSDictionary * _titleDict;
    NSArray * _values;
}

- (void).cxx_destruct;
- (bool)canReload;
- (id)controlValue;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)layoutSubviews;
- (id)newControl;
- (void)prepareForReuse;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setValues:(id)arg1 titleDictionary:(id)arg2;
- (id)titleLabel;

@end