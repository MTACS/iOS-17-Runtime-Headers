
@interface UIVectorLabel : UIView {
    _UILabelContent * _content;
    NSMutableDictionary * _defaultAttributes;
    struct { 
        unsigned int usesExplicitPreferredMaxLayoutWidth : 1; 
    }  _labelFlags;
    double  _multilineContextWidth;
    unsigned long long  _numberOfLines;
    double  _preferredMaxLayoutWidth;
    _UIVectorTextLayout * _sizingLayout;
    UIColor * _textColor;
    _UIVectorTextLayout * _visualLayout;
}

@property (setter=_setAttributedText:, nonatomic, copy) NSAttributedString *_attributedText;
@property (getter=_content, setter=_setContent:, nonatomic, retain) _UILabelContent *_content;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic) unsigned long long numberOfLines;
@property (nonatomic) double preferredMaxLayoutWidth;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) UIColor *textColor;

+ (id)_defaultAttributes;
+ (id)_defaultFont;
+ (Class)layerClass;

- (void).cxx_destruct;
- (id)_attributedText;
- (id)_attributedTextCompatibleForSizing;
- (double)_baselineOffsetFromBottom;
- (id)_content;
- (id)_defaultAttributes;
- (void)_ensureSizingLayout;
- (void)_ensureVisualLayout;
- (double)_firstBaselineOffsetFromTop;
- (double)_firstLineBaseline;
- (void)_generateDeferredAnimations:(id)arg1;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_labelLayer;
- (double)_lastLineBaseline;
- (id)_layoutParametersWithinSize:(struct CGSize { double x1; double x2; })arg1 forSizing:(bool)arg2;
- (id)_materializedAttributedText;
- (void)_mergeDefaultAttributesForDowngradingContent:(id)arg1;
- (double)_multilineContextWidth;
- (bool)_needsDoubleUpdateConstraintsPass;
- (double)_preferredMaxLayoutWidth;
- (void)_prepareForFirstIntrinsicContentSizeCalculation;
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setAttributedText:(id)arg1;
- (void)_setContent:(id)arg1;
- (void)_setMultilineContextWidth:(double)arg1;
- (void)_setNeedsUpdateLayerIfNeeded;
- (void)_setTextColor:(id)arg1;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)font;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (unsigned long long)numberOfLines;
- (double)preferredMaxLayoutWidth;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNumberOfLines:(unsigned long long)arg1;
- (void)setPreferredMaxLayoutWidth:(double)arg1;
- (void)setText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)text;
- (id)textColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 limitedToNumberOfLines:(long long)arg2;

@end
