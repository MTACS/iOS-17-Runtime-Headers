
@interface UIKBRenderFactory_MonolithLinear : UIKBRenderFactory_Monolith

- (id)_enabledTraitsForControlKey:(id)arg1;
- (id)_highlightedTraitsForControlKey:(id)arg1;
- (void)configureGeometry:(id)arg1 forControlKey:(id)arg2;
- (void)configureSymbolStyle:(id)arg1 forControlKey:(id)arg2;
- (bool)forceVariantsInsideKeyplane;
- (struct CGSize { double x1; double x2; })pillControlKeyFocusIncreaseSize;
- (double)pillControlKeyFontSize;
- (double)pillControlKeyHeight;
- (id)pillControlKeyPillBackgroundColor;
- (double)tldKeyFontSize;
- (double)tldKeyFontWeight;

@end
