
@interface CSSearchableItem : NSObject <CSIndexQueuableItem, NSCopying, NSSecureCoding> {
    CSSearchableItemAttributeSet * _attributeSet;
    long long  _rank;
    /* Warning: Unrecognized filer type: 'T' using 'void*' */ void* _score;
}

@property bool allowTextStore;
@property (retain) CSSearchableItemAttributeSet *attributeSet;
@property (copy) NSString *bundleID;
@property (copy) NSString *domainIdentifier;
@property (copy) NSDate *expirationDate;
@property bool isUpdate;
@property bool noIndex;
@property (copy) NSString *protection;
@property (nonatomic) long long rank;
@property /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*score;
@property (copy) NSString *uniqueIdentifier;
@property (nonatomic, readonly) NSData *wf_shortcutsRunnableData;

// Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight

+ (id)searchableItemFromUserActivity:(id)arg1 bundleID:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_fixBrokenAuthorNames:(id)arg1;
- (bool)_hasAttributesOfType:(id)arg1;
- (bool)_isFullyFormed;
- (void)_parseEmailHeadersForFeatures:(id)arg1;
- (void)_populateMissingPeopleWithNames:(id)arg1 emailAddresses:(id)arg2 allItemPersons:(id)arg3 primaryItemPersons:(id)arg4 additionalItemPersons:(id)arg5 hiddenAdditionalItemPersons:(id)arg6 personDictionary:(id)arg7 contactProperties:(id)arg8 nameKey:(id)arg9 emailKey:(id)arg10 contactIdentifierKey:(id)arg11 personKey:(id)arg12 photosPersonIdentifierKey:(id)arg13 attributeSet:(id)arg14;
- (id)_propertiesDescription;
- (void)_standardizeDeprecatedProperties:(id)arg1;
- (void)_standardizeDocumentUnderstandingCategories:(id)arg1;
- (void)_standardizeDocumentUnderstandingTopics:(id)arg1;
- (bool)_standardizeExternalAnalysisTags:(id)arg1 forAttributeSet:(id)arg2 primaryAttribute:(id)arg3 analysisAttribibutes:(id)arg4 specializedAttributes:(id)arg5 standardizeBlock:(id /* block */)arg6;
- (void)_standardizeFileProvider:(id)arg1;
- (void)_standardizeHTML:(id)arg1;
- (void)_standardizeMarkAs:(id)arg1;
- (void)_standardizePeople:(id)arg1;
- (void)_standardizePortrait:(id)arg1;
- (void)_standardizeSceneClassification:(id)arg1;
- (void)_standardizeSiriShortcuts:(id)arg1;
- (void)_updateWithSearchableItem:(id)arg1;
- (bool)allowTextStore;
- (id)attributeSet;
- (id)attributes;
- (void)breakOutPersonInformationInSet:(id)arg1 withName:(id)arg2 emails:(id)arg3 contactIdentifiers:(id)arg4 photosPersonIdentifiers:(id)arg5 nameKey:(id)arg6 emailKey:(id)arg7 contactIdentifierKey:(id)arg8 emailAddressKey:(id)arg9 photosPersonIdentifierKey:(id)arg10 attributeSet:(id)arg11;
- (id)bundleID;
- (long long)compareByRank:(id)arg1;
- (id)copyReconstructedAdditionalRecipients;
- (id)copyReconstructedAuthors;
- (id)copyReconstructedHiddenAdditionalRecipients;
- (id)copyReconstructedPrimaryRecipients;
- (id)copyReconstructedRecipients;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)domainIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (void)extractAndStandardizePersonInformation:(id)arg1 contactIdentifierKey:(id)arg2 emailKey:(id)arg3 nameKey:(id)arg4 emailAddressExtractKey:(id)arg5 photosPersonIdentifierKey:(id)arg6 contactIdentifiers:(id)arg7 emails:(id)arg8 names:(id)arg9 photosPersonIdentifiers:(id)arg10 persons:(id)arg11;
- (id)filteredSpotlightAttributes;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAttributeSet:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUniqueIdentifier:(id)arg1 domainIdentifier:(id)arg2 attributeSet:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isUpdate;
- (bool)noIndex;
- (id)protection;
- (long long)rank;
- (/* Warning: Unrecognized filer type: 'T' using 'void*' */ void*)score;
- (id)searchableItem;
- (void)setAllowTextStore:(bool)arg1;
- (void)setAttributeSet:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setDomainIdentifier:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setIsUpdate:(bool)arg1;
- (void)setNoIndex:(bool)arg1;
- (void)setProtection:(id)arg1;
- (void)setRank:(long long)arg1;
- (void)setScore:(/* Warning: Unrecognized filer type: 'T' using 'void*' */ void*)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (void)standardizeAttributes;
- (id)uniqueIdentifier;

// Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore

- (id)_cnui_valueForAttribute:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals

+ (id)sg_clonableItemAtIndex:(unsigned long long)arg1 inCodedArray:(id)arg2;

- (id)sg_clone;
- (void)standardizeCSPersons;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

- (id)wf_shortcutsRunnableData;

@end
