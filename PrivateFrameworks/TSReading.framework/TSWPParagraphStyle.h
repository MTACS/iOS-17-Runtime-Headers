
@interface TSWPParagraphStyle : TSSStyle <TSSPreset> {
    void * _coreTextParagraphStyle;
    struct __CFDictionary { } * _scalePercentStyleCaches;
    struct __CFDictionary { } * _styleCache;
}

@property (nonatomic, readonly) NSString *presetKind;

+ (float)defaultFloatValueForProperty:(int)arg1;
+ (int)defaultIntValueForProperty:(int)arg1;
+ (id)defaultPropertyMap;
+ (id)defaultStyleWithContext:(id)arg1;
+ (id)defaultValueForProperty:(int)arg1;
+ (id)deprecatedProperties;
+ (void)initialize;
+ (id)nonEmphasisParagraphProperties;
+ (id)p_normalDecimalSeparator;
+ (id)paragraphProperties;
+ (id)paragraphPropertiesAllowingNSNull;
+ (id)presetStyleDescriptor;
+ (id)properties;
+ (id)propertiesAllowingNSNull;
+ (id)styleSummaryForPropertyMap:(id)arg1;

- (void)clearStyleCaches;
- (id)contentTag;
- (void)dealloc;
- (struct __CTFont { }*)findCachedFontForCharacterStyle:(id)arg1 scalePercent:(unsigned long long)arg2;
- (id)followingParagraphStyle;
- (id)fullPropertyMap;
- (struct __CFDictionary { }*)getTypesetterAttributes:(id)arg1 scalePercent:(unsigned long long)arg2 isRightToLeft:(bool)arg3;
- (id)initialListStyle;
- (void)localizeForBidi:(bool)arg1;
- (void)localizeForRightToLeft;
- (SEL)mapThemePropertyMapSelector;
- (BOOL)p_coreTextWritingDirectionFromWPWritingDirection:(int)arg1;
- (struct __CTParagraphStyle { }*)p_createCoreTextParagraphStyleWithCharacterStyle:(id)arg1 writingDirection:(int)arg2 lineBoundsOptions:(unsigned long long)arg3;
- (unsigned long long)p_lineBoundsOptions;
- (struct __CFDictionary { }*)p_newCoreTextCharacterStyle:(id)arg1 allowLigatures:(bool)arg2 scalePercent:(unsigned long long)arg3;
- (id)presetKind;
- (void)setInitialListStyle:(id)arg1;
- (void)setOverridePropertyMap:(id)arg1;
- (id)styleSummary;
- (bool)transformsFontSizes;

@end
