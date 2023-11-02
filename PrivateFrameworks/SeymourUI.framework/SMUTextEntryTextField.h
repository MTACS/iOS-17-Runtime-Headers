
@interface SMUTextEntryTextField : UITextField {
    bool  _allowsFocus;
    unsigned long long  _maxLength;
}

@property (nonatomic) bool allowsFocus;
@property (nonatomic) unsigned long long maxLength;

- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_filteredRangeForText:(id)arg1;
- (bool)allowsFocus;
- (bool)canBecomeFocused;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)insertText:(id)arg1;
- (unsigned long long)maxLength;
- (void)setAllowsFocus:(bool)arg1;
- (void)setMaxLength:(unsigned long long)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
