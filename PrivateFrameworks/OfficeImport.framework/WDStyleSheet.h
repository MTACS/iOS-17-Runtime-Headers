
@interface WDStyleSheet : NSObject {
    WDCharacterProperties * mDefaultCharacterProperties;
    WDStyle * mDefaultCharacterStyle;
    WDStyle * mDefaultListStyle;
    WDParagraphProperties * mDefaultParagraphProperties;
    WDStyle * mDefaultParagraphStyle;
    WDStyle * mDefaultTableStyle;
    WDDocument * mDocument;
    NSMutableDictionary * mIdDictionaryForName;
    NSMutableDictionary * mStyleDictionary;
    NSMutableArray * mStylesInOrder;
}

@property (readonly) WDDocument *document;

- (void).cxx_destruct;
- (void)addStyle:(id)arg1 name:(id)arg2;
- (id)allAliasesForStyleId:(id)arg1 name:(id)arg2;
- (void)createDefaultStyles;
- (id)createStyleWithId:(id)arg1 type:(int)arg2;
- (id)createStyleWithName:(id)arg1 type:(int)arg2;
- (id)defaultCharacterProperties;
- (id)defaultCharacterStyle;
- (id)defaultListStyle;
- (id)defaultParagraphProperties;
- (id)defaultParagraphStyle;
- (id)defaultTableStyle;
- (id)description;
- (id)document;
- (id)initWithDocument:(id)arg1;
- (void)initializeDefaultProperties;
- (id)paragraphStyleWithStartingName:(id)arg1;
- (void)removeStyleWithId:(id)arg1;
- (void)setDefaultCharacterStyle:(id)arg1;
- (void)setDefaultListStyle:(id)arg1;
- (void)setDefaultParagraphStyle:(id)arg1;
- (void)setDefaultTableStyle:(id)arg1;
- (void)setName:(id)arg1 forId:(id)arg2;
- (unsigned long long)styleCount;
- (id)styleIdForName:(id)arg1;
- (id)styleIdToName:(id)arg1;
- (id)styleNameToUniqueId:(id)arg1;
- (id)styleWithId:(id)arg1;
- (id)styleWithName:(id)arg1;
- (id)styles;

@end