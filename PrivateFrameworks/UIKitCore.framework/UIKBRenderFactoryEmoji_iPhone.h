
@interface UIKBRenderFactoryEmoji_iPhone : UIKBRenderFactory_Emoji

- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (long long)assetIdiom;
- (struct CGPoint { double x1; double x2; })emojiInternationalKeyOffset;
- (double)emojiInternationalKeySize;
- (struct CGPoint { double x1; double x2; })emojiPopupTextOffset;
- (bool)shouldClearBaseDisplayStringForVariants:(id)arg1;
- (double)symbolImageControlKeyFontSize;
- (id)traitsHashStringForKey:(id)arg1 withGeometry:(id)arg2 withSymbolStyle:(id)arg3 controlOpacities:(bool)arg4 blurBlending:(bool)arg5;

@end
