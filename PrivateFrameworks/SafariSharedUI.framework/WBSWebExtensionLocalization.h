
@interface WBSWebExtensionLocalization : NSObject <NSSecureCoding> {
    NSLocale * _locale;
    NSString * _localeString;
    NSDictionary * _localizationDictionary;
    NSUUID * _uniqueIdentifier;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_localizedArrayForArray:(id)arg1;
- (id)_predefinedMessagesForLocale:(id)arg1;
- (id)_stringByReplacingNamedPlaceholdersInString:(id)arg1 withNamedPlaceholders:(id)arg2;
- (id)_stringByReplacingPositionalPlaceholdersInString:(id)arg1 withValues:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBundleURL:(id)arg1 defaultLocale:(id)arg2 uniqueIdentifier:(id)arg3 extensionIdentifier:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithRegionalLocalization:(id)arg1 languageLocalization:(id)arg2 defaultLocalization:(id)arg3 withBestLocale:(id)arg4 uniqueIdentifier:(id)arg5;
- (id)localizedDictionaryForDictionary:(id)arg1;
- (id)localizedStringForKey:(id)arg1 withPlaceholders:(id)arg2;
- (id)localizedStringForString:(id)arg1;

@end
