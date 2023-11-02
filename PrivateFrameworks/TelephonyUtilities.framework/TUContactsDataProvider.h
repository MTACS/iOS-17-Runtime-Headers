
@interface TUContactsDataProvider : NSObject {
    TUContactsDataProviderAppleCareHandles * _appleCareHandles;
    <TUContactsDataSource> * _contactsDataSource;
    id /* block */  _localeSupportsPrefixHintForFetchRequest;
    bool  _useFamilyNameFirst;
    bool  _useGivenName;
}

@property (nonatomic, copy) TUContactsDataProviderAppleCareHandles *appleCareHandles;
@property (nonatomic, readonly) <TUContactsDataSource> *contactsDataSource;
@property (nonatomic, copy) id /* block */ localeSupportsPrefixHintForFetchRequest;
@property (getter=shouldUseFamilyNameFirst, nonatomic) bool useFamilyNameFirst;
@property (getter=shouldUseGivenName, nonatomic) bool useGivenName;

+ (id)defaultContactKeyDescriptors;
+ (id)familyNameFirstLocaleCountryCodes;
+ (id)keysByCombiningDefaultKeysWithKeysToFetch:(id)arg1;
+ (id)numberFormatter;
+ (id)unsupportedLocalesForPrefixHint;

- (void).cxx_destruct;
- (id)ISOCountryCodeForHandle:(id)arg1 fetchRequest:(id)arg2;
- (id)appleCareHandles;
- (id)compositeNameForContacts:(id)arg1;
- (id)compositeNameForFetchRequest:(id)arg1;
- (id)contactLabelForContacts:(id)arg1 matchingHandle:(id)arg2 countryCode:(id)arg3;
- (id)contactWithIdentifier:(id)arg1 keysToFetch:(id)arg2;
- (id)contactsDataSource;
- (id)contactsForHandle:(id)arg1 countryCode:(id)arg2 keysToFetch:(id)arg3 prefixHint:(id)arg4;
- (id)executeFetchRequest:(id)arg1;
- (id)formattedNameForHandle:(id)arg1 countryCode:(id)arg2;
- (id)init;
- (id)initWithContactsDataSource:(id)arg1;
- (id)labeledHandlesForContactWithIdentifier:(id)arg1;
- (id)labeledHandlesForContacts:(id)arg1;
- (id /* block */)localeSupportsPrefixHintForFetchRequest;
- (id)localizedCompositeNameForContact:(id)arg1 secondContact:(id)arg2;
- (id)nameForContact:(id)arg1;
- (int)personIDForContact:(id)arg1;
- (id)prefixHintForFetchRequest:(id)arg1;
- (void)setAppleCareHandles:(id)arg1;
- (void)setLocaleSupportsPrefixHintForFetchRequest:(id /* block */)arg1;
- (void)setUseFamilyNameFirst:(bool)arg1;
- (void)setUseGivenName:(bool)arg1;
- (bool)shouldUseFamilyNameFirst;
- (bool)shouldUseGivenName;
- (id)unifiedContactsForFetchRequest:(id)arg1;

@end
