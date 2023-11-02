
@interface UIKBRenderFactory_MonolithLinearSlim : UIKBRenderFactory_MonolithLinear

- (id)_enabledTraitsForControlKey:(id)arg1;
- (id)_highlightedTraitsForControlKey:(id)arg1;
- (struct CGPoint { double x1; double x2; })_textOffsetForKey:(id)arg1;
- (id)_variantTraitsForControlKey:(id)arg1 onKeyplane:(id)arg2;
- (void)configureCornersOnGeometry:(id)arg1 forKey:(id)arg2;
- (void)configureGeometry:(id)arg1 forControlKey:(id)arg2;
- (void)configureSymbolStyle:(id)arg1 forControlKey:(id)arg2;
- (id)highlightedVariantLayeredBackgroundColor;
- (id)highlightedVariantPillBackgroundColor;
- (double)variantKeyPaddingH;
- (double)variantKeyPaddingV;
- (id)variantPillBackgroundColor;
- (id)variantTextColor;

@end
