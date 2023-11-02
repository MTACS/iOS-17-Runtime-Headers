
@interface EMFEmojiCategory : NSObject {
    NSString * _identifier;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSString *shortLocalizedName;

+ (id)ActivityEmoji;
+ (id)CelebrationEmoji;
+ (id)CoupleMultiSkinToneEmoji;
+ (id)DingbatsVariantEmoji;
+ (id)ExtendedCoupleMultiSkinToneEmoji;
+ (id)FlagsEmoji;
+ (id)FoodAndDrinkEmoji;
+ (id)GenderEmoji;
+ (id)MultiPersonFamilySkinToneEmoji;
+ (id)NatureEmoji;
+ (id)NewlyAddedEmoji;
+ (id)NoneVariantEmoji;
+ (id)ObjectsEmoji;
+ (id)PeopleEmoji;
+ (id)PrepopulatedEmoji;
+ (id)ProfessionEmoji;
+ (id)ProfessionWithoutSkinToneEmoji;
+ (id)SkinToneEmoji;
+ (id)SymbolsEmoji;
+ (id)TravelAndPlacesEmoji;
+ (id)_baseLocalizationKeyForIdentifier:(id)arg1;
+ (id)_emojiSetForIdentifier:(id)arg1;
+ (bool)_isBaseHandshakeOrHandshakeWithSkintonesEmoji:(id)arg1;
+ (bool)_isComposedCoupleMultiSkinToneEmoji:(id)arg1;
+ (bool)_isCoupleMultiSkinToneEmoji:(id)arg1;
+ (bool)_isDingbatsVariantEmoji:(id)arg1;
+ (bool)_isFlagEmoji:(id)arg1;
+ (bool)_isGenderEmoji:(id)arg1;
+ (bool)_isHandholdingCoupleEmoji:(id)arg1;
+ (bool)_isMultiPersonFamilySkinToneEmoji:(id)arg1;
+ (bool)_isNoneVariantEmoji:(id)arg1;
+ (bool)_isProfessionEmoji:(id)arg1;
+ (bool)_isSkinToneEmoji:(id)arg1;
+ (bool)_supportsCoupleSkinToneSelection:(id)arg1;
+ (id)categoryIdentifierList;
+ (id)categoryWithIdentifier:(id)arg1;
+ (id)computeEmojiFlagsSortedByLanguage;
+ (id)extraFlagsForCountryCode:(id)arg1;
+ (id)flagEmojiCountryCodesCommon;
+ (void)insertToSortedCountries:(id)arg1 withAdditionalFlags:(id)arg2;
+ (id)insertionFlagsForCountryCodes:(id)arg1 inSortedCountryCodes:(id)arg2;
+ (id)localizedRecentsDescription;
+ (id)localizedSkinToneEmojiDescription;
+ (id)stringToRegionalIndicatorString:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)emojiTokensForLocaleData:(id)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (id)localizedName;
- (id)shortLocalizedName;

@end
