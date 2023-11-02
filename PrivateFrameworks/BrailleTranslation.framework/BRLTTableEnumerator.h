
@interface BRLTTableEnumerator : NSObject {
    NSMutableDictionary * _languageAgnosticIdentifiersToTables;
    NSSet * _supportedLanguageLocales;
    NSSet * _supportedLocales;
    NSString * _translatorBundlePath;
    NSArray * _translatorBundles;
}

@property (nonatomic, retain) NSMutableDictionary *languageAgnosticIdentifiersToTables;
@property (nonatomic, readonly) NSSet *languageAgnosticTableIdentifiers;
@property (nonatomic, readonly) NSSet *supportedLanguageLocales;
@property (nonatomic, readonly) NSSet *supportedLocales;
@property (nonatomic, copy) NSString *translatorBundlePath;
@property (nonatomic, readonly) NSArray *translatorBundles;

+ (id)defaultTableForLocale:(id)arg1;
+ (id)localizedNameForLanguage:(id)arg1;
+ (id)localizedNameForLanguageAgnosticTableIdentifier:(id)arg1;
+ (id)localizedNameForServiceWithIdentifier:(id)arg1;
+ (id)systemTranslatorBundle;
+ (id)tableEnumeratorWithSystemBundlePath;

- (void).cxx_destruct;
- (id)initWithTranslatorBundlesPath:(id)arg1;
- (id)languageAgnosticIdentifiersToTables;
- (id)languageAgnosticTableIdentifiers;
- (id)languageAgnosticTablesForIdentifier:(id)arg1 inBundle:(id)arg2;
- (id)languageAgnosticTablesInBundle:(id)arg1;
- (void)setLanguageAgnosticIdentifiersToTables:(id)arg1;
- (void)setTranslatorBundlePath:(id)arg1;
- (id)supportedLanguageLocales;
- (id)supportedLocales;
- (id)tablesForLocale:(id)arg1 inBundle:(id)arg2;
- (id)translatorBundlePath;
- (id)translatorBundles;

@end
