
@interface EMFStringUtilities : NSObject

+ (id)_baseFirstCharacterString:(id)arg1;
+ (id)_baseStringForEmojiString:(id)arg1;
+ (id)_coupleSkinToneChooserVariantsForString:(id)arg1;
+ (id)_coupleStringWithLeftPerson:(id)arg1 leftVariant:(id)arg2 joiningString:(id)arg3 rightPerson:(id)arg4 rightVariant:(id)arg5;
+ (bool)_emojiString:(id)arg1 containsSubstring:(id)arg2;
+ (unsigned int)_firstLongCharacterOfString:(id)arg1;
+ (bool)_genderEmojiBaseStringNeedVariantSelector:(id)arg1;
+ (bool)_hasSkinToneVariantsForString:(id)arg1;
+ (id)_joiningStringForCoupleString:(id)arg1;
+ (id)_multiPersonStringForString:(id)arg1 skinToneVariantSpecifier:(id)arg2;
+ (id)_normalizeMultiPersonGroupToLongFormEncoding:(id)arg1;
+ (id)_normalizeMultiPersonGroupToShortFormEncoding:(id)arg1;
+ (id)_preferenceIndexString:(id)arg1;
+ (id)_skinToneChooserArraysForCoupleType:(long long)arg1 joiner:(id)arg2;
+ (id)_skinToneChooserVariantsForHandHoldingCoupleType:(long long)arg1;
+ (id)_skinToneChooserVariantsForString:(id)arg1;
+ (id)_skinToneChooserVariantsForString:(id)arg1 usesSilhouetteSpecifiers:(bool)arg2;
+ (int)_skinToneForString:(id)arg1;
+ (int)_skinToneModifierFromSpecifierType:(id)arg1;
+ (id)_skinToneSpecifiersForString:(id)arg1;
+ (id)_skinToneSuffixFromSpecifierType:(id)arg1;
+ (id)_skinToneVariantsForCouple:(long long)arg1 joiner:(id)arg2;
+ (id)_skinToneVariantsForMultiPersonType:(long long)arg1;
+ (id)_skinToneVariantsForString:(id)arg1;
+ (id)_stringWithUnichar:(unsigned int)arg1;
+ (id)_tokenizedHandshakeFromString:(id)arg1;
+ (id)_tokenizedMultiPersonFromString:(id)arg1;
+ (long long)multiPersonTypeForString:(id)arg1;
+ (id)professionSkinToneEmojiBaseKey:(id)arg1;
+ (id)skinToneSpecifierTypeFromEmojiFitzpatrickModifier:(int)arg1;

@end
