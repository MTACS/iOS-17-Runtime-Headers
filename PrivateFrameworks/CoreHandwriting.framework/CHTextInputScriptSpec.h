
@interface CHTextInputScriptSpec : NSObject

+ (bool)isCharacterCJKSymbolsPunctuations:(id)arg1;
+ (bool)isCharacterEmoji:(id)arg1;
+ (bool)isCharacterFullWidth:(id)arg1;
+ (bool)isRightToLeftScriptForCharacter:(id)arg1;
+ (bool)isSkippableScriptCode:(int)arg1;
+ (int)scriptCodeForCodepoint:(unsigned int)arg1;
+ (id)scriptHistogramForString:(id)arg1;
+ (bool)shouldCorrectionGesturesSnapToTokensForScriptCode:(int)arg1;
+ (bool)shouldRelaxCharacterBoundsPercentageOverlapForScript:(int)arg1;
+ (int)singleScriptCodeForString:(id)arg1;

@end
