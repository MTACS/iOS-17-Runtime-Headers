
@interface _LSStringLocalizer : NSObject {
    NSArray * _bundleLocalizations;
    NSArray * _bundleLocalizationsWithDefaultPrefLocs;
    _LSBundleProvider * _bundleProvider;
    _LSStringsFileContent * _stringsContent;
    _LSLazyPropertyList * _unlocalizedInfoPlistStrings;
}

@property (readonly, retain) _LSBundleProvider *bundleProvider;

+ (id)coreTypesLocalizer;
+ (void)findKeysToLocalizeInInfoDictionary:(id)arg1 forArrayKey:(struct __CFString { }*)arg2 stringKey:(struct __CFString { }*)arg3 localizedKeys:(id)arg4;
+ (void)gatherLocalizedStringsForCFBundle:(struct __CFBundle { }*)arg1 infoDictionary:(id)arg2 domains:(unsigned int)arg3 delegatesMightBeMainBundle:(bool)arg4 legacyLocalizationList:(bool)arg5;
+ (void)gatherLocalizedStringsForCFBundle:(struct __CFBundle { }*)arg1 infoDictionary:(id)arg2 domains:(unsigned int)arg3 legacyLocalizationList:(bool)arg4;
+ (void)gatherLocalizedStringsForLSBundleProvider:(id)arg1 infoDictionary:(id)arg2 domains:(unsigned int)arg3 delegatesMightBeMainBundle:(bool)arg4 legacyLocalizationList:(bool)arg5;
+ (id)localizedStringForCanonicalString:(id)arg1 preferredLocalizations:(id)arg2 context:(struct LSContext { id x1; }*)arg3;
+ (id)localizedStringsForCanonicalString:(id)arg1 context:(struct LSContext { id x1; }*)arg2;
+ (id)missingLocalizationPlaceholder;
+ (id)newFrameworkBundleLocalizer;
+ (id)preferredLocalizationsForXCTests;
+ (void)setPreferredLocalizationsForXCTests:(id)arg1;
+ (bool)useLegacyLocalizationListForPlatform:(unsigned int)arg1 sdkVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (id)bundleProvider;
- (void)dealloc;
- (id)debugDescription;
- (void)enumerateLocalizedStringsForKeys:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateLocalizedStringsUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithBundleProvider:(id)arg1 stringsFile:(id)arg2 legacyLocalizationList:(bool)arg3;
- (id)initWithBundleURL:(id)arg1 stringsFile:(id)arg2;
- (id)initWithBundleURL:(id)arg1 stringsFile:(id)arg2 checkMainBundle:(bool)arg3 legacyLocalizationList:(bool)arg4;
- (id)initWithBundleURL:(id)arg1 stringsFile:(id)arg2 legacyLocalizationList:(bool)arg3;
- (id)initWithCFBundle:(struct __CFBundle { }*)arg1 stringsFile:(id)arg2;
- (id)initWithCFBundle:(struct __CFBundle { }*)arg1 stringsFile:(id)arg2 legacyLocalizationList:(bool)arg3;
- (id)initWithDatabase:(id)arg1 bundleUnit:(unsigned int)arg2 delegate:(unsigned int)arg3;
- (id)initWithDatabase:(id)arg1 pluginUnit:(unsigned int)arg2;
- (id)localizedStringDictionaryWithString:(id)arg1 defaultValue:(id)arg2;
- (id)localizedStringWithString:(id)arg1 inBundle:(struct __CFBundle { }*)arg2 localeCode:(id)arg3;
- (id)localizedStringWithString:(id)arg1 inBundle:(struct __CFBundle { }*)arg2 preferredLocalizations:(id)arg3;
- (id)localizedStringWithString:(id)arg1 preferredLocalizations:(id)arg2;
- (id)localizedStringsWithStrings:(id)arg1 preferredLocalizations:(id)arg2;

@end
