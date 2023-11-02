
@interface LPTextView : LPComponentView <LPContentInsettable, LPSubtitleButtonContainer, LPTextStyleable> {
    double  _ascender;
    NSAttributedString * _attributedString;
    UILabel * _coloredGlyphsView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    double  _descender;
    UIVisualEffectView * _effectView;
    NSRegularExpression * _emphasizedTextExpression;
    long long  _overrideMaximumNumberOfLines;
    LPTextViewStyle * _style;
    UILabel * _textView;
}

@property (nonatomic, readonly, retain) NSAttributedString *attributedString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSRegularExpression *emphasizedTextExpression;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long overrideMaximumNumberOfLines;
@property (nonatomic, readonly, retain) LPTextViewStyle *style;
@property (readonly) Class superclass;

+ (id)attributedString:(id)arg1 resolvedAgainstStyle:(id)arg2 withEmphasizedTextExpression:(id)arg3 tintColor:(id)arg4 lineBreakMode:(long long)arg5 usesVibrancy:(bool)arg6 forLTR:(bool)arg7 withFont:(id)arg8;
+ (id)attributedStringHidingNonColoredRanges:(id)arg1;

- (void).cxx_destruct;
- (void)_buildSubviewsIfNeeded;
- (id)_createLabel;
- (void)_createTextViewWithAttributedString:(id)arg1;
- (bool)_lp_isLTR;
- (void)applyAttributedString:(id)arg1;
- (double)ascender;
- (id)attributedString;
- (long long)computedNumberOfLines;
- (double)descender;
- (id)effectiveAttributedString;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })effectiveInsets;
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
- (void)setOverrideMaximumNumberOfLines:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)style;
- (id)subtitleButton;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textRect;
- (void)tintColorDidChange;

@end
