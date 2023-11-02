
@interface LPQuoteView : LPComponentView <LPContentInsettable, LPTextStyleable> {
    double  _ascender;
    NSAttributedString * _attributedString;
    LPTextView * _characterLimitIndicatorView;
    UITextView * _coloredGlyphsView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    double  _descender;
    bool  _didLimitNumberOfCharacters;
    UIVisualEffectView * _effectView;
    NSRegularExpression * _emphasizedTextExpression;
    long long  _overrideMaximumNumberOfLines;
    UIImageView * _quoteIndicatorView;
    LPQuotedTextViewStyle * _style;
    UITextView * _textView;
}

@property (nonatomic, readonly, retain) NSAttributedString *attributedString;
@property (nonatomic, copy) NSRegularExpression *emphasizedTextExpression;
@property (nonatomic) long long overrideMaximumNumberOfLines;
@property (nonatomic, readonly, retain) LPQuotedTextViewStyle *style;

- (void).cxx_destruct;
- (void)_buildSubviewsIfNeeded;
- (id)_createTextView;
- (bool)_lp_isLTR;
- (void)applyAttributedString:(id)arg1;
- (double)ascender;
- (id)attributedString;
- (long long)computedNumberOfLines;
- (long long)computedNumberOfLinesWithFont:(id)arg1 forSize:(struct CGSize { double x1; double x2; })arg2;
- (double)descender;
- (id)effectiveAttributedString;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })effectiveInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })effectiveInsetsWithoutQuoteIndicator;
- (long long)effectiveMaximumNumberOfLines;
- (id)emphasizedTextExpression;
- (id)firstBaselineAnchor;
- (double)firstLineLeading;
- (id)initWithHost:(id)arg1;
- (id)initWithHost:(id)arg1 text:(id)arg2 style:(id)arg3;
- (id)lastBaselineAnchor;
- (double)lastLineDescent;
- (void)layoutComponentView;
- (long long)overrideMaximumNumberOfLines;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setEmphasizedTextExpression:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setOverrideMaximumNumberOfLines:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)style;
- (void)tintColorDidChange;
- (void)updateEffectiveFontForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)updateExclusionRects;

@end
