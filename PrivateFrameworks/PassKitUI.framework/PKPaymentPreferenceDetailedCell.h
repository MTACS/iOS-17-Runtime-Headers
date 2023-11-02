
@interface PKPaymentPreferenceDetailedCell : PKPaymentPreferenceCell {
    bool  _inlineEditingEnabled;
    bool  _isLeftToRight;
    double  _leadingOffset;
    double  _minimumCellHeight;
    PKPaymentPreferenceDetailedCellTextField * _textField;
}

@property (nonatomic) bool inlineEditingEnabled;
@property (nonatomic) double leadingOffset;
@property (nonatomic) double minimumCellHeight;
@property (nonatomic, readonly) PKPaymentPreferenceDetailedCellTextField *textField;

- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)arg1;
- (bool)inlineEditingEnabled;
- (void)layoutSubviews;
- (double)leadingOffset;
- (double)minimumCellHeight;
- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;
- (void)prepareForReuse;
- (void)setInlineEditingEnabled:(bool)arg1;
- (void)setLeadingOffset:(double)arg1;
- (void)setMinimumCellHeight:(double)arg1;
- (void)showTextField:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)textField;

@end
