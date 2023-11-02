
@interface TLKLabel : UILabel {
    unsigned long long  _adjustedProminence;
    bool  _attributedTextExplicitelySet;
    bool  _attributedTextUpdateDisabled;
    bool  _attributedTextUpdateSkipped;
    bool  _autoHideIfNoContent;
    bool  _hasCustomTextColor;
    UIFont * _originalFont;
    UILabel * _overlayLabelForNonColoredGlyphs;
    unsigned long long  _prominence;
    TLKRichText * _richText;
    bool  _supportsColorGlyphs;
}

@property unsigned long long adjustedProminence;
@property bool attributedTextExplicitelySet;
@property bool attributedTextUpdateDisabled;
@property bool attributedTextUpdateSkipped;
@property (nonatomic) bool autoHideIfNoContent;
@property (nonatomic, retain) TLKFormattedText *formattedText;
@property bool hasCustomTextColor;
@property (nonatomic, retain) TLKMultilineText *multilineText;
@property (retain) UIFont *originalFont;
@property (nonatomic, retain) UILabel *overlayLabelForNonColoredGlyphs;
@property (nonatomic) unsigned long long prominence;
@property (nonatomic, retain) TLKRichText *richText;
@property (nonatomic) bool supportsColorGlyphs;

+ (id)primaryLabel;
+ (id)secondaryLabel;
+ (id)tertiaryLabel;

- (void).cxx_destruct;
- (unsigned long long)adjustedProminence;
- (bool)attributedTextExplicitelySet;
- (bool)attributedTextUpdateDisabled;
- (bool)attributedTextUpdateSkipped;
- (bool)autoHideIfNoContent;
- (void)didMoveToWindow;
- (id)formattedText;
- (bool)hasCustomTextColor;
- (bool)hasEmphasizedFormattingInRichText;
- (id)init;
- (id)initWithProminence:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)loadInlineImages;
- (id)multilineText;
- (id)originalFont;
- (id)overlayLabelForNonColoredGlyphs;
- (void)performBatchUpdates:(id /* block */)arg1;
- (unsigned long long)prominence;
- (id)richText;
- (void)setAdjustedProminence:(unsigned long long)arg1;
- (void)setAttributedStringValue:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setAttributedTextExplicitelySet:(bool)arg1;
- (void)setAttributedTextUpdateDisabled:(bool)arg1;
- (void)setAttributedTextUpdateSkipped:(bool)arg1;
- (void)setAutoHideIfNoContent:(bool)arg1;
- (void)setFont:(id)arg1;
- (void)setFont:(id)arg1 keepOriginal:(bool)arg2;
- (void)setFormattedText:(id)arg1;
- (void)setHasCustomTextColor:(bool)arg1;
- (void)setLineBreakMode:(long long)arg1;
- (void)setMultilineText:(id)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (void)setOriginalFont:(id)arg1;
- (void)setOverlayLabelForNonColoredGlyphs:(id)arg1;
- (void)setProminence:(unsigned long long)arg1;
- (void)setRichText:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)setSupportsColorGlyphs:(bool)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (bool)supportsColorGlyphs;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateAdjustedProminence;
- (void)updateAttributedText;
- (void)updateWithAttributedString:(id)arg1;
- (void)updateWithString:(id)arg1;

@end
