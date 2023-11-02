
@interface UIKBRenderFactoryEmoji_iPad : UIKBRenderFactoryEmoji_iPhone

- (void)_customizeTraits:(id)arg1 forPopupForKey:(id)arg2 withRenderingContext:(id)arg3 keycapsFontName:(id)arg4;
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (long long)assetIdiom;
- (struct CGPoint { double x1; double x2; })emojiInternationalKeyOffset;
- (double)emojiInternationalKeySize;
- (struct CGPoint { double x1; double x2; })emojiPopupTextOffset;
- (double)keyCornerRadius;
- (id)lightKeycapsFontName;
- (id)messagesWriteboardKeyImageName;
- (bool)shouldClearBaseDisplayStringForVariants:(id)arg1;
- (double)symbolImageControlKeyFontSize;
- (id)thinKeycapsFontName;

@end
