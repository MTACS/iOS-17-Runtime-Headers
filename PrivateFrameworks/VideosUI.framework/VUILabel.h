
@interface VUILabel : UILabel <VUILabelBaselineProtocol> {
    UIColor * _adjustmentModeNormalTintColor;
    id /* block */  _attributedTextProvider;
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedSizeThatFits;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cachedTextRectForBounds;
    VUILabel * _computationLabel;
    NSString * _labelName;
    double  _languageAwareSystemSpacingMultiplier;
    bool  _lastSelectedOrHighlighted;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _previousBounds;
    long long  _previousNumberOfLines;
    struct CGSize { 
        double width; 
        double height; 
    }  _previousTargetSize;
    UITraitCollection * _previousTraitCollection;
    bool  _selected;
    VUITextLayout * _textLayout;
    CALayer * _truncationMask;
    bool  _useLanguageAwareMarginScaling;
}

@property (nonatomic, retain) UIColor *adjustmentModeNormalTintColor;
@property (nonatomic, copy) id /* block */ attributedTextProvider;
@property (nonatomic) struct CGSize { double x1; double x2; } cachedSizeThatFits;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cachedTextRectForBounds;
@property (nonatomic, retain) VUILabel *computationLabel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *labelName;
@property (nonatomic) double languageAwareSystemSpacingMultiplier;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } previousBounds;
@property (nonatomic) long long previousNumberOfLines;
@property (nonatomic) struct CGSize { double x1; double x2; } previousTargetSize;
@property (nonatomic, retain) UITraitCollection *previousTraitCollection;
@property (readonly) Class superclass;
@property (nonatomic, retain) VUITextLayout *textLayout;
@property (nonatomic, retain) CALayer *truncationMask;
@property (nonatomic) bool useLanguageAwareMarginScaling;
@property (nonatomic, retain) NSAttributedString *vuiAttributedText;
@property (nonatomic, readonly) double vuiBaselineHeight;
@property (nonatomic, readonly) UIFont *vuiFont;
@property (nonatomic) unsigned long long vuiNumberOfLines;
@property (nonatomic, copy) NSString *vuiText;
@property (nonatomic) long long vuiTextAlignment;

+ (unsigned long long)_numberOfLinesForLayout:(id)arg1;
+ (id)labelWithAttributedString:(id)arg1 textLayout:(id)arg2 existingLabel:(id)arg3;
+ (id)labelWithString:(id)arg1 textLayout:(id)arg2 existingLabel:(id)arg3;

- (void).cxx_destruct;
- (void)_clearCachedValues;
- (void)_configureAlignmentIfNeeded;
- (bool)_isTruncatedForTruncationMask;
- (id)_rangeOfStringExcludingAttachments;
- (void)_setupTruncationMask;
- (void)_updateCompositingFilter;
- (void)_updateTextColor;
- (void)_updateTextColor:(bool)arg1;
- (bool)_updateTextColorExcludingAttachments:(id)arg1;
- (void)_updateTruncationMask;
- (id)adjustmentModeNormalTintColor;
- (id)attributedText;
- (id /* block */)attributedTextProvider;
- (double)baselineHeight;
- (double)bottomMarginWithBaselineMargin:(double)arg1;
- (double)bottomMarginWithBaselineMargin:(double)arg1 maximumContentSizeCategory:(unsigned long long)arg2;
- (struct CGSize { double x1; double x2; })cachedSizeThatFits;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cachedTextRectForBounds;
- (id)computationLabel;
- (void)contrastSettingsDidChange;
- (void)dealloc;
- (id)defaultParagraphStyle;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)labelName;
- (double)languageAwareSystemSpacingMultiplier;
- (void)layoutSubviews;
- (unsigned long long)numberOfLinesRequiredForTextWidth:(double)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })previousBounds;
- (long long)previousNumberOfLines;
- (struct CGSize { double x1; double x2; })previousTargetSize;
- (id)previousTraitCollection;
- (bool)requiresMoreThanOneLineForTextWidth:(double)arg1;
- (void)revertTintColor;
- (void)setAdjustmentModeNormalTintColor:(id)arg1;
- (void)setAdjustsFontSizeToFitWidth:(bool)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setAttributedTextProvider:(id /* block */)arg1;
- (void)setBaselineAdjustment:(long long)arg1;
- (void)setCachedSizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)setCachedTextRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setComputationLabel:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setLabelName:(id)arg1;
- (void)setLanguageAwareSystemSpacingMultiplier:(double)arg1;
- (void)setLineBreakMode:(long long)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPreviousBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPreviousNumberOfLines:(long long)arg1;
- (void)setPreviousTargetSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPreviousTraitCollection:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextLayout:(id)arg1;
- (void)setTruncationMask:(id)arg1;
- (void)setUseLanguageAwareMarginScaling:(bool)arg1;
- (void)setVuiAttributedText:(id)arg1;
- (void)setVuiBackgroundColor:(id)arg1;
- (void)setVuiNumberOfLines:(unsigned long long)arg1;
- (void)setVuiText:(id)arg1;
- (void)setVuiTextAlignment:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)textLayout;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 limitedToNumberOfLines:(long long)arg2;
- (void)tintColorDidChange;
- (double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2;
- (double)topMarginWithBaselineMargin:(double)arg1;
- (double)topMarginWithBaselineMargin:(double)arg1 maximumContentSizeCategory:(unsigned long long)arg2;
- (void)transparencySettingsDidChange;
- (id)truncationMask;
- (void)useExtremeSizingOnTallScripts;
- (bool)useLanguageAwareMarginScaling;
- (id)vuiAttributedText;
- (id)vuiBackgroundColor;
- (double)vuiBaselineHeight;
- (id)vuiFont;
- (unsigned long long)vuiNumberOfLines;
- (id)vuiText;
- (long long)vuiTextAlignment;
- (double)vui_baselineOffsetFromBottom;
- (struct CGSize { double x1; double x2; })vui_layoutSubviews:(struct CGSize { double x1; double x2; })arg1 computationOnly:(bool)arg2;
- (void)vui_setHighlighted:(bool)arg1;
- (void)vui_setSelected:(bool)arg1 animated:(bool)arg2 withAnimationCoordinator:(id)arg3;

@end
