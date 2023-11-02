
@interface CNFRegEditablePhoneTableCell : CNFRegEditableTableCell {
    SEL  _countryCodeSelector;
    NSString * _previousValue;
}

- (id)countryCode;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setValueChangedTarget:(id)arg1 action:(SEL)arg2 specifier:(id)arg3;
- (struct { id x1; unsigned long long x2; })suggestionsForString:(id)arg1 inputIndex:(unsigned int)arg2;

@end
