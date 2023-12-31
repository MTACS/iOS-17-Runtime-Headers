
@interface WMParagraphStyle : WMStyle {
    WDStyle * _baseStyle;
    bool  _isInTextFrame;
}

+ (bool)isShadingNull:(id)arg1;

- (void).cxx_destruct;
- (void)addParagraphProperties:(id)arg1;
- (void)addParagraphPropertiesFromStyle;
- (void)addParagraphPropertiesFromStyle:(id)arg1;
- (void)addParagraphStyleCharacterProperties:(id)arg1;
- (id)initWithWDStyle:(id)arg1 isInTextFrame:(bool)arg2;
- (bool)isRTLWithOverridesFromProperties:(id)arg1;
- (id)leadingMarginPropertyNameWithOverridesFromProperties:(id)arg1;
- (void)mapBorders:(id)arg1;
- (id)trailingMarginPropertyNameWithOverridesFromProperties:(id)arg1;

@end
