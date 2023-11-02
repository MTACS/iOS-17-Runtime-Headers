
@interface CNContact : NSObject <ABSCNLegacyIdentifiable, CNContactAugmentation, CNSuggested, NSCopying, NSItemProviderReading, NSItemProviderWriting, NSMutableCopying, NSSecureCoding, PXFaceTileImageCombinerItem, TUSearchResult> {
    NSString * _ISOCountryCode;
    NSString * _accountIdentifier;
    NSArray * _addressingGrammars;
    NSArray * _addressingGrammarsEncrypted;
    CNContactKeyVector * _availableKeyDescriptor;
    NSDateComponents * _birthday;
    NSArray * _calendarURIs;
    CNActivityAlert * _callAlert;
    NSString * _cardDAVUID;
    NSArray * _contactRelations;
    long long  _contactType;
    NSDate * _creationDate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cropRect;
    NSData * _cropRectHash;
    NSString * _cropRectID;
    NSArray * _dates;
    NSString * _departmentName;
    long long  _displayNameOrder;
    NSString * _downtimeWhitelist;
    NSArray * _emailAddresses;
    NSString * _explicitDisplayName;
    NSString * _externalIdentifier;
    NSString * _externalImageURI;
    NSString * _externalModificationTag;
    NSData * _externalRepresentation;
    NSString * _externalUUID;
    NSString * _familyName;
    unsigned long long  _flags;
    NSData * _fullscreenImageData;
    NSString * _givenName;
    int  _iOSLegacyIdentifier;
    NSData * _imageBackgroundColorsData;
    NSData * _imageData;
    bool  _imageDataAvailable;
    NSData * _imageHash;
    NSString * _imageType;
    NSArray * _instantMessageAddresses;
    NSString * _internalIdentifier;
    bool  _isUsingSharedPhoto;
    NSString * _jobTitle;
    NSString * _linkIdentifier;
    NSArray * _linkedContacts;
    NSString * _mapsData;
    NSData * _memojiMetadata;
    NSString * _middleName;
    NSDate * _modificationDate;
    NSString * _namePrefix;
    NSString * _nameSuffix;
    NSString * _nickname;
    NSDateComponents * _nonGregorianBirthday;
    NSString * _note;
    NSString * _organizationName;
    NSArray * _phoneNumbers;
    NSString * _phonemeData;
    NSString * _phoneticFamilyName;
    NSString * _phoneticGivenName;
    NSString * _phoneticMiddleName;
    NSString * _phoneticOrganizationName;
    NSArray * _postalAddresses;
    NSString * _preferredApplePersonaIdentifier;
    NSString * _preferredChannel;
    bool  _preferredForImage;
    bool  _preferredForName;
    NSString * _preferredLikenessSource;
    NSString * _previousFamilyName;
    NSString * _pronunciationFamilyName;
    NSString * _pronunciationGivenName;
    NSString * _searchIndex;
    NSString * _sectionForSortingByFamilyName;
    NSString * _sectionForSortingByGivenName;
    long long  _sharedPhotoDisplayPreference;
    CNContact * _snapshot;
    NSArray * _socialProfiles;
    NSString * _sortingFamilyName;
    NSString * _sortingGivenName;
    NSString * _storeIdentifier;
    NSDictionary * _storeInfo;
    NSData * _syncImageData;
    CNActivityAlert * _textAlert;
    NSData * _thumbnailImageData;
    NSArray * _urlAddresses;
    CNWallpaper * _wallpaper;
    CNWallpaperMetadata * _wallpaperMetadata;
    NSData * _watchWallpaperImageData;
}

@property (nonatomic, readonly, copy) NSString *accountIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *activityAlerts;
@property (nonatomic, readonly, copy) NSArray *addressingGrammars;
@property (nonatomic, readonly, copy) NSArray *addressingGrammarsEncrypted;
@property (nonatomic, readonly) NSArray *allIDSDestinations;
@property (nonatomic, readonly) NSString *anyDestinationID;
@property (nonatomic, readonly) <CNKeyDescriptor> *availableKeyDescriptor;
@property (nonatomic, readonly) NSSet *availableKeys;
@property (nonatomic, readonly) CNUIBackgroundColors *backgroundColors;
@property (readonly) CNContact *backingContact;
@property (readonly) NSString *backingContactId;
@property (readonly) NSString *backingContactIdentifier;
@property (nonatomic, readonly, copy) NSDateComponents *birthday;
@property (nonatomic, readonly) NSArray *birthdays;
@property (nonatomic, readonly, copy) NSArray *calendarURIs;
@property (nonatomic, readonly, copy) CNActivityAlert *callAlert;
@property (readonly) NSString *callerId;
@property (nonatomic, readonly, copy) NSString *cardDAVUID;
@property (readonly, copy) NSString *companyName;
@property (nonatomic, readonly) NSArray *contactImageBackgroundColors;
@property (nonatomic, readonly) NSArray *contactPosterBackgroundColors;
@property (nonatomic, readonly, copy) NSArray *contactRelations;
@property (nonatomic) unsigned long long contactSource;
@property (nonatomic, readonly) long long contactType;
@property (nonatomic, readonly, copy) NSDate *creationDate;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cropRect;
@property (nonatomic, readonly, copy) NSData *cropRectHash;
@property (nonatomic, readonly, copy) NSString *cropRectID;
@property (nonatomic, readonly, copy) NSArray *dates;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) NSString *departmentName;
@property (readonly, copy) NSString *description;
@property (readonly) NSString *destinationId;
@property (readonly) NSString *displayName;
@property (nonatomic, readonly) long long displayNameOrder;
@property (nonatomic, readonly, copy) NSString *downtimeWhitelist;
@property (nonatomic, readonly) NSArray *emailAddressStrings;
@property (nonatomic, readonly, copy) NSArray *emailAddresses;
@property (nonatomic, readonly, copy) NSString *externalIdentifier;
@property (nonatomic, readonly, copy) NSString *externalImageURI;
@property (nonatomic, readonly, copy) NSString *externalModificationTag;
@property (nonatomic, readonly, copy) NSData *externalRepresentation;
@property (nonatomic, readonly, copy) NSString *externalURI;
@property (nonatomic, readonly, copy) NSString *externalUUID;
@property (nonatomic, readonly) NSURL *faceTimeQuicklookURL;
@property (nonatomic, readonly, copy) NSString *familyName;
@property (readonly, copy) NSString *firstName;
@property (nonatomic) unsigned long long formattingConstrained;
@property (nonatomic, readonly, copy) NSString *fullName;
@property (nonatomic, readonly, copy) NSData *fullscreenImageData;
@property (nonatomic, readonly, copy) NSString *givenName;
@property (readonly) NSArray *handles;
@property (nonatomic, readonly) bool hasBeenPersisted;
@property (nonatomic, readonly) bool hasLowQualityImage;
@property (nonatomic, readonly) bool hasNonPersistedData;
@property (nonatomic, readonly) bool hasSuggestedProperties;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int iOSLegacyIdentifier;
@property (nonatomic, readonly) NSString *ic_shortName;
@property (nonatomic, readonly) NSUUID *id;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (readonly) NSArray *idsCanonicalDestinations;
@property (nonatomic, readonly, copy) NSData *imageBackgroundColorsData;
@property (nonatomic, readonly, copy) NSData *imageData;
@property (nonatomic, readonly) bool imageDataAvailable;
@property (nonatomic, readonly, copy) NSData *imageHash;
@property (nonatomic, readonly, copy) NSString *imageType;
@property (nonatomic, readonly, copy) NSArray *instantMessageAddresses;
@property (nonatomic, readonly, copy) NSString *internalIdentifier;
@property (nonatomic) bool isHideMyEmail;
@property (nonatomic, readonly) bool isUsingSharedPhoto;
@property (readonly) NSString *isoCountryCode;
@property (nonatomic, readonly, copy) NSString *jobTitle;
@property (readonly, copy) NSString *lastName;
@property (nonatomic, readonly, copy) NSString *linkIdentifier;
@property (nonatomic, readonly, copy) NSArray *linkedContacts;
@property (readonly, copy) NSString *maidenName;
@property (nonatomic, readonly, copy) NSArray *mainStoreLinkedContacts;
@property (nonatomic, readonly, copy) NSString *mapsData;
@property (nonatomic, readonly, copy) NSData *memojiMetadata;
@property (nonatomic, readonly, copy) NSString *middleName;
@property (nonatomic, readonly, copy) NSDate *modificationDate;
@property (readonly) long long mostRecentCallType;
@property (readonly) bool mostRecentCallWasMissed;
@property (nonatomic, readonly, copy) NSString *namePrefix;
@property (nonatomic, readonly, copy) NSString *nameSuffix;
@property (readonly, copy) NSString *nameTitle;
@property (nonatomic, readonly, copy) NSString *nickname;
@property (nonatomic, readonly, copy) NSDateComponents *nonGregorianBirthday;
@property (nonatomic, readonly, copy) NSString *note;
@property (nonatomic, readonly, copy) NSString *organizationName;
@property (nonatomic, readonly) NSString *personName;
@property (nonatomic, readonly, copy) NSPersonNameComponents *personNameComponents;
@property (nonatomic, readonly) NSArray *phoneNumberStrings;
@property (nonatomic, readonly, copy) NSArray *phoneNumbers;
@property (nonatomic, readonly, copy) NSString *phonemeData;
@property (nonatomic, readonly, copy) NSString *phoneticCompanyName;
@property (nonatomic, readonly, copy) NSString *phoneticFamilyName;
@property (readonly, copy) NSString *phoneticFirstName;
@property (nonatomic, readonly, copy) NSString *phoneticFullName;
@property (nonatomic, readonly, copy) NSString *phoneticGivenName;
@property (readonly, copy) NSString *phoneticLastName;
@property (nonatomic, readonly, copy) NSString *phoneticMiddleName;
@property (nonatomic, readonly, copy) NSString *phoneticOrganizationName;
@property (nonatomic, readonly, copy) NSArray *postalAddresses;
@property (nonatomic, readonly) NSString *posterFallbackDisplayName;
@property (nonatomic, readonly) NSString *posterName;
@property (nonatomic, readonly, copy) NSString *preferredApplePersonaIdentifier;
@property (nonatomic, readonly, copy) NSString *preferredChannel;
@property (getter=isPreferredForImage, nonatomic, readonly) bool preferredForImage;
@property (getter=isPreferredForName, nonatomic, readonly) bool preferredForName;
@property (nonatomic, readonly, copy) NSString *preferredLikenessSource;
@property (nonatomic, readonly, copy) NSString *previousFamilyName;
@property (nonatomic, readonly, copy) NSString *pronunciationFamilyName;
@property (nonatomic, readonly, copy) NSString *pronunciationGivenName;
@property (nonatomic, retain) CRRecentContact *recentContact;
@property (nonatomic) bool recentFromContactInformation;
@property (nonatomic, readonly, copy) NSArray *relatedNames;
@property (nonatomic, readonly) NSString *safari_fullName;
@property (nonatomic, readonly, copy) NSString *safari_shareParticipantIdentifier;
@property (nonatomic, readonly, copy) NSString *searchIndex;
@property (nonatomic, readonly, copy) NSString *sectionForSortingByFamilyName;
@property (nonatomic, readonly, copy) NSString *sectionForSortingByGivenName;
@property (nonatomic, readonly) long long sharedPhotoDisplayPreference;
@property (nonatomic, readonly, copy) NSArray *socialProfiles;
@property (nonatomic, readonly, copy) NSString *sortingFamilyName;
@property (nonatomic, readonly, copy) NSString *sortingGivenName;
@property (nonatomic, readonly, copy) NSString *storeIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *storeInfo;
@property (nonatomic, readonly, copy) NSString *stringForIndexing;
@property (getter=isSuggested, nonatomic, readonly) bool suggested;
@property (getter=isSuggestedMe, nonatomic, readonly) bool suggestedMe;
@property (nonatomic, readonly) NSString *suggestionFoundInBundleId;
@property (nonatomic, readonly) SGRecordId *suggestionRecordId;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsInstantMessageService;
@property (nonatomic, readonly, copy) NSData *syncImageData;
@property (nonatomic, readonly, copy) NSArray *termsOfAddress;
@property (nonatomic, readonly, copy) CNActivityAlert *textAlert;
@property (nonatomic, readonly, copy) NSData *thumbnailImageData;
@property (getter=isUnified, nonatomic, readonly) bool unified;
@property (getter=isUnknown, nonatomic, readonly) bool unknown;
@property (nonatomic, readonly, copy) NSArray *urlAddresses;
@property (nonatomic, readonly) NSData *vCardRepresentation;
@property (nonatomic, copy) NSString *valueSource;
@property (nonatomic, readonly, copy) CNWallpaper *wallpaper;
@property (nonatomic, readonly, copy) NSData *watchWallpaperImageData;
@property (nonatomic, readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

+ (id)_contactWithContact:(id)arg1 createNewInstance:(bool)arg2 propertyDescriptions:(id)arg3;
+ (int)abPropertyIDfromContactPropertyKey:(id)arg1;
+ (id)alwaysFetchedKeys;
+ (id /* block */)comparatorForNameSortOrder:(long long)arg1;
+ (id)contact;
+ (id)contactFromPerson:(void*)arg1 keysToFetch:(id)arg2;
+ (id)contactFromPerson:(void*)arg1 keysToFetch:(id)arg2 mutable:(bool)arg3;
+ (id)contactFromPublicABPerson:(void*)arg1 keysToFetch:(id)arg2;
+ (id)contactFromPublicABPerson:(void*)arg1 keysToFetch:(id)arg2 mutable:(bool)arg3;
+ (id)contactFromSuggestion:(id)arg1;
+ (id)contactIdentifierFromSuggestionID:(id)arg1;
+ (id)contactPropertyKeyFromABPropertyID:(int)arg1;
+ (id)contactPropertyKeyFromPublicABPropertyID:(int)arg1;
+ (id)contactWithArchivedData:(id)arg1 error:(id*)arg2;
+ (id)contactWithContact:(id)arg1;
+ (id)contactWithDisplayName:(id)arg1 emailOrPhoneNumber:(id)arg2;
+ (id)contactWithDisplayName:(id)arg1 handleStrings:(id)arg2;
+ (id)contactWithIdentifier:(id)arg1;
+ (id)contactWithIdentifierOnly:(id)arg1;
+ (id)contactWithVCardData:(id)arg1 error:(id*)arg2;
+ (id)descriptorForAllComparatorKeys;
+ (id)descriptorForAllImageDataKeys;
+ (id)descriptorForKeyDescriptors:(id)arg1 description:(id)arg2;
+ (id)descriptorForRequiredKeysForSearchableItem;
+ (id)descriptorWithKeyDescriptors:(id)arg1 description:(id)arg2;
+ (id)emptyContact;
+ (void)freezeIfInstancetypeIsImmutable:(id)arg1;
+ (id)identifierProvider;
+ (bool)isContactUTIType:(id)arg1;
+ (bool)isVCardDataUTIType:(id)arg1;
+ (id)localizedStringForKey:(id)arg1;
+ (id)makeContactAndMergeValuesFromAvailableKeysInContact:(id)arg1;
+ (id)makeIdentifier;
+ (id)makeIdentifierString;
+ (id)newContactWithPropertyKeys:(id)arg1 withValuesFromContact:(id)arg2;
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
+ (id)os_log;
+ (id)predicateForAllContacts;
+ (id)predicateForContactMatchingEKParticipantWithName:(id)arg1 emailAddress:(id)arg2 URL:(id)arg3 predicateDescription:(id)arg4;
+ (id)predicateForContactMatchingEmailAddress:(id)arg1;
+ (id)predicateForContactMatchingLabeledValueIdentifier:(id)arg1;
+ (id)predicateForContactMatchingMapString:(id)arg1;
+ (id)predicateForContactMatchingPhoneNumber:(id)arg1;
+ (id)predicateForContactMatchingPhoneNumberWithDigits:(id)arg1 countryCode:(id)arg2;
+ (id)predicateForContactMatchingURLString:(id)arg1;
+ (id)predicateForContactsInContainerWithIdentifier:(id)arg1;
+ (id)predicateForContactsInGroupWithIdentifier:(id)arg1;
+ (id)predicateForContactsLinkedToContact:(id)arg1;
+ (id)predicateForContactsLinkedToContactWithIdentifier:(id)arg1;
+ (id)predicateForContactsMatchingEmailAddress:(id)arg1;
+ (id)predicateForContactsMatchingEmailAddress:(id)arg1 groupIdentifiers:(id)arg2 limitToOneResult:(bool)arg3;
+ (id)predicateForContactsMatchingExternalUUIDs:(id)arg1;
+ (id)predicateForContactsMatchingFullTextSearch:(id)arg1 containerIdentifiers:(id)arg2 groupIdentifiers:(id)arg3;
+ (id)predicateForContactsMatchingHandleStrings:(id)arg1;
+ (id)predicateForContactsMatchingHandleStrings:(id)arg1 inContainersWithIdentifiers:(id)arg2;
+ (id)predicateForContactsMatchingInstantMessageAddress:(id)arg1;
+ (id)predicateForContactsMatchingName:(id)arg1;
+ (id)predicateForContactsMatchingName:(id)arg1 options:(unsigned long long)arg2;
+ (id)predicateForContactsMatchingPhoneNumber:(id)arg1;
+ (id)predicateForContactsMatchingPhoneNumber:(id)arg1 prefixHint:(id)arg2;
+ (id)predicateForContactsMatchingPhoneNumber:(id)arg1 prefixHint:(id)arg2 groupIdentifiers:(id)arg3 limitToOneResult:(bool)arg4;
+ (id)predicateForContactsMatchingPostalAddress:(id)arg1;
+ (id)predicateForContactsMatchingPreferredChannel:(id)arg1 limitOne:(bool)arg2;
+ (id)predicateForContactsMatchingSocialProfile:(id)arg1;
+ (id)predicateForContactsMatchingString:(id)arg1 accountIdentifier:(id)arg2 containerIdentifier:(id)arg3 groupIdentifier:(id)arg4;
+ (id)predicateForContactsMissingBackgroundColors;
+ (id)predicateForContactsWithIdentifiers:(id)arg1;
+ (id)predicateForContactsWithNonUnifiedIdentifiers:(id)arg1;
+ (id)predicateForContactsWithOrganizationName:(id)arg1;
+ (id)predicateForFaultFulfillmentForLegacyIdentifier:(unsigned int)arg1 identifier:(id)arg2;
+ (id)predicateForLegacyIdentifier:(unsigned int)arg1;
+ (id)predicateForMeContact;
+ (id)predicateForPreferredNameInContainersWithIdentifiers:(id)arg1 groupsWithIdentifiers:(id)arg2;
+ (id)predicateForPreferredNameInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
+ (id)predicateForSuggestionIdentifier:(unsigned long long)arg1;
+ (id /* block */)preferredImageComparator;
+ (id)previewURLForContact:(id)arg1;
+ (int)publicABPropertyIDFromContactPropertyKey:(id)arg1;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)storeInfoFromCoder:(id)arg1 storeIdentifier:(id)arg2 key:(id)arg3;
+ (id)suggestionIDFromContactIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)unifyContacts:(id)arg1;
+ (id)writableTypeIdentifiersForItemProvider;
+ (void)you_used_a_property_that_you_didnt_request_when_you_fetched_the_contact;

- (void).cxx_destruct;
- (id)_filteredArrayForValidValues:(id)arg1;
- (id)_searchableItemIncludingInternalAttributes:(bool)arg1;
- (id)accountIdentifier;
- (id)activityAlerts;
- (id)addressingGrammars;
- (id)addressingGrammarsEncrypted;
- (id)allLinkedIdentifiers;
- (bool)areAllAvailableKeysEqualToContact:(id)arg1 ignoringIdentifiers:(bool)arg2;
- (bool)areAllPropertiesButContactIdentifierEqualToContact:(id)arg1;
- (bool)areAllPropertiesEqualToContactIgnoringIdentifiers:(id)arg1;
- (bool)areKeysAvailable:(id)arg1;
- (id)areKeysAvailable:(id)arg1 useIgnorableKeys:(bool)arg2 findMissingKeys:(bool)arg3;
- (void)assertKeyIsAvailable:(id)arg1;
- (void)assertKeysAreAvailable:(id)arg1;
- (id)availableKeyDescriptor;
- (id)availableKeys;
- (id)birthday;
- (id)calendarURIs;
- (id)callAlert;
- (id)cardDAVUID;
- (id)companyName;
- (id)contactRelations;
- (long long)contactType;
- (id)copyWithCachedExternalData;
- (id)copyWithCuratingAllSuggestions;
- (id)copyWithDistinctIdentifier;
- (id)copyWithPropertyKeys:(id)arg1;
- (id)copyWithSelfAsSnapshot;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRect;
- (id)cropRectHash;
- (id)cropRectID;
- (id)dates;
- (id)departmentName;
- (id)description;
- (void*)detachedPerson;
- (void*)detachedPersonWithError:(id*)arg1;
- (id)diffToSnapshotAndReturnError:(id*)arg1;
- (long long)displayNameOrder;
- (id)downtimeWhitelist;
- (id)emailAddresses;
- (void)encodeWithCoder:(id)arg1;
- (id)explicitDisplayName;
- (id)externalIdentifier;
- (id)externalImageURI;
- (id)externalModificationTag;
- (id)externalRepresentation;
- (id)externalURI;
- (id)externalUUID;
- (id)familyName;
- (id)firstName;
- (unsigned long long)flags;
- (id)fullName;
- (id)fullscreenImageData;
- (id)givenName;
- (bool)hasBeenPersisted;
- (bool)hasChanges;
- (bool)hasSuggestedProperties;
- (unsigned long long)hash;
- (int)iOSLegacyIdentifier;
- (id)id;
- (id)identifier;
- (id)imageBackgroundColorsData;
- (id)imageData;
- (bool)imageDataAvailable;
- (id)imageHash;
- (id)imageType;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 availableKeyDescriptor:(id)arg2;
- (id)instantMessageAddresses;
- (id)internalIdentifier;
- (bool)isEqual:(id)arg1;
- (bool)isEqualIgnoringIdentifiers:(id)arg1;
- (bool)isImplicitAugmentation;
- (bool)isKeyAvailable:(id)arg1;
- (bool)isPreferredForImage;
- (bool)isPreferredForName;
- (bool)isProperty:(id)arg1 equalToOtherIgnoreIdentifiers:(id)arg2;
- (bool)isSuggested;
- (bool)isSuggestedMe;
- (bool)isUnified;
- (bool)isUnifiedWithContactWithIdentifier:(id)arg1;
- (bool)isUnifiedWithContactsWithIdentifiers:(id)arg1;
- (bool)isUsingSharedPhoto;
- (id)jobTitle;
- (id)keyVector;
- (id)lastName;
- (id)linkIdentifier;
- (id)linkedContacts;
- (id)linkedContactsFromStoreWithIdentifier:(id)arg1;
- (id)linkedIdentifierMap;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (id)maidenName;
- (id)mainStoreLinkedContacts;
- (id)mapsData;
- (id)memojiMetadata;
- (id)middleName;
- (id)modificationDate;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)namePrefix;
- (id)nameSuffix;
- (id)nameTitle;
- (id)nickname;
- (id)nonGregorianBirthday;
- (id)note;
- (id)organizationName;
- (bool)overwritePerson:(void*)arg1;
- (bool)overwritePerson:(void*)arg1 error:(id*)arg2;
- (bool)overwritePublicABPerson:(void*)arg1;
- (id)phoneNumbers;
- (id)phonemeData;
- (id)phoneticCompanyName;
- (id)phoneticFamilyName;
- (id)phoneticFirstName;
- (id)phoneticFullName;
- (id)phoneticGivenName;
- (id)phoneticLastName;
- (id)phoneticMiddleName;
- (id)phoneticOrganizationName;
- (id)postalAddresses;
- (id)preferredApplePersonaIdentifier;
- (id)preferredChannel;
- (bool)preferredForImage;
- (bool)preferredForName;
- (id)preferredLikenessSource;
- (id)previousFamilyName;
- (id)pronunciationFamilyName;
- (id)pronunciationGivenName;
- (id)relatedNames;
- (id)searchIndex;
- (id)searchableItemAttributeSetForUserActivity;
- (id)searchableItemForDragging;
- (id)searchableItemForIndexing;
- (id)sectionForSortingByFamilyName;
- (id)sectionForSortingByGivenName;
- (id)selfOrMutableCopy;
- (long long)sharedPhotoDisplayPreference;
- (id)shortDebugDescription;
- (id)snapshot;
- (id)socialProfiles;
- (id)sortingFamilyName;
- (id)sortingGivenName;
- (id)storeIdentifier;
- (id)storeInfo;
- (id)stringForIndexing;
- (id)suggestionFoundInBundleId;
- (id)suggestionRecordId;
- (id)syncImageData;
- (id)termsOfAddress;
- (id)textAlert;
- (id)thumbnailImageData;
- (bool)updateNewPublicABPerson:(void*)arg1 inAddressBook:(void*)arg2;
- (id)urlAddresses;
- (id)wallpaper;
- (id)wallpaperMetadata;
- (id)watchWallpaperImageData;
- (id)writableTypeIdentifiersForItemProvider;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

+ (id)calendarForBirthdayLabel:(id)arg1;
+ (id)contactWithStateRestorationCoder:(id)arg1 store:(id)arg2 keys:(id)arg3;
+ (id)descriptorForAllUIKeys;
+ (bool)downtimeWhitelistUIEnabled;
+ (bool)geminiEnabled;
+ (unsigned long long)imageTypeForContactImageSource:(long long)arg1;
+ (id)imageTypeStringIdentifierForImageSource:(long long)arg1;
+ (id)multiValuePropertiesSupportingPredicateValidation;
+ (bool)nameAndPhotoSharingDebugUIEnabled;
+ (bool)quickActionsEnabled;
+ (long long)rawImageSourceForIdentifier:(id)arg1;
+ (unsigned long long)rawImageTypeForIdentifier:(id)arg1;
+ (bool)settableMeCardEnabled;
+ (id)stringIdentifierForImageType:(unsigned long long)arg1;
+ (bool)suggestionsEnabled;
+ (bool)suggestionsShownInEditMode;

- (id)birthdays;
- (id)contactImageBackgroundColors;
- (id)contactPosterBackgroundColors;
- (id)copyWithCuratingAllSuggestionsAndBirthdaySuggestion;
- (id)copyWithCuratingBirthdaySuggestion;
- (bool)hasImageOfType:(unsigned long long)arg1;
- (bool)hasLowQualityImage;
- (bool)hasNonPersistedData;
- (bool)isUnknown;
- (id)personName;
- (id)posterFallbackDisplayName;
- (id)posterName;
- (long long)rawImageSource;
- (unsigned long long)rawImageType;
- (bool)supportsInstantMessageService;
- (id)vCardRepresentation;
- (id)validPropertiesByEvaluatingPredicate:(id)arg1 onMultiValueProperties:(id)arg2;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (id)_mapkit_sharedLocationContactIdentifer;
+ (id)mapsContactKeys;

- (bool)_mapkit_isSharedLocationContact;
- (bool)_maps_isEqualToContact:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation

+ (id)CalDefaultBirthdayString;
+ (id)CalKeys;

- (id)CalBirthdayStringForDate:(id)arg1;
- (id)CalDisplayName;
- (id)CalEmailAddresses;
- (id)CalFirstValueForKey:(id)arg1;
- (id)CalPhoneNumbers;
- (id)CalValueForKey:(id)arg1 withLabel:(id)arg2;

// Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit

+ (id)cuik_predicateForContactsMatchingHandleStrings:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (id)identifierForKey:(id)arg1 withDestination:(id)arg2;

// Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore

- (id)backgroundColors;

// Image: /System/Library/PrivateFrameworks/ContextualUnderstanding.framework/ContextualUnderstanding

+ (id)nm_contactWithDisplayName:(id)arg1 emailOrPhoneNumber:(id)arg2;
+ (id)nm_predicateForMeContact;

// Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals

- (bool)hasEmailAddress:(id)arg1;
- (bool)hasPhoneNumber:(id)arg1;
- (bool)hasPostalAddress:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer

+ (id)dnds_predicateForContactsMatchingEventSender:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Email.framework/Email

+ (id)em_bestMatchForName:(id)arg1 fromContacts:(id)arg2 keysToCheck:(id)arg3;
+ (id)em_contactFromEmailAddress:(id)arg1;
+ (id)em_contactWithPersonNameComponents:(id)arg1;
+ (id)em_contactWithPersonNameComponents:(id)arg1 emailAddress:(id)arg2 emailAddressLabel:(id)arg3;
+ (id)em_contactWithPersonNameComponents:(id)arg1 emailAddress:(id)arg2 emailAddressLabel:(id)arg3 allowInvalidEmailAddress:(bool)arg4;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

- (id)_gkCompositeName;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

- (id)collationString;
- (void)setSuggestedHandle:(id)arg1;
- (id)suggestedHandle;

// Image: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore

- (id)__im_assistant_allIMHandles;
- (id)__im_assistant_allValidPersonOptionsWithAccountDataSource:(id)arg1;
- (id)__im_assistant_emailAddressesMatchingLabel:(id)arg1;
- (id)__im_assistant_handlesMatchingHandleID:(id)arg1;
- (id)__im_assistant_handlesMatchingRequestedHandleType:(long long)arg1 requestedHandleLabel:(id)arg2;
- (id)__im_assistant_matchingNormalizedHandlesForType:(long long)arg1 andLabel:(id)arg2 forCountryCode:(id)arg3;
- (id)__im_assistant_phoneNumbersMatchingLabel:(id)arg1;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

- (bool)_im_isEqualToContact:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (id)ic_contactFromParticipant:(id)arg1;

- (id)ic_shortName;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (id)contactWithABRecordRef:(void*)arg1;
+ (id)contactWithPkDictionary:(id)arg1;
+ (id)pkContactWithNameComponents:(id)arg1 labeledValues:(id)arg2;
+ (id)pkContactWithNameComponents:(id)arg1 postalAddresses:(id)arg2 emailAddresses:(id)arg3 phoneNumbers:(id)arg4;
+ (id)pkContactWithNameFromContact:(id)arg1 labeledValue:(id)arg2 property:(id)arg3;
+ (id)pkPassbookRequiredKeys;
+ (id)pk_predicateForContactsMatchingEmailAddress:(id)arg1;
+ (id)pk_predicateForContactsMatchingPhoneNumber:(id)arg1;

- (void*)ABPerson;
- (id)_fullNameFromComponents:(id)arg1 style:(long long)arg2;
- (id)_phoneticNameFromComponents:(id)arg1 style:(long long)arg2;
- (unsigned long long)contactSource;
- (id)contactWithCleanedUpDistrict;
- (unsigned long long)formattingConstrained;
- (bool)isHideMyEmail;
- (bool)isSubsetOfMeCard;
- (id)nameComponents;
- (void)pkAddLabeledValues:(id)arg1 withProperty:(id)arg2;
- (id)pkContactWithCleanedUpCountryCode;
- (id)pkDeconstructContactUsingKey:(id)arg1;
- (id)pkDeconstructContactUsingKey:(id)arg1 substring:(id)arg2;
- (id)pkDictionaryForProperty:(id)arg1;
- (id)pkFormattedContactAddress;
- (id)pkFormattedContactAddressIncludingPhoneticName:(bool)arg1;
- (id)pkFormattedContactAddressIncludingPhoneticName:(bool)arg1 showName:(bool)arg2;
- (id)pkFormattedContactAddressWithoutName;
- (id)pkFullAndPhoneticName;
- (id)pkFullName;
- (id)pkFullyQualifiedName;
- (id)pkPhoneticName;
- (id)pkSingleLineFormattedContactAddress;
- (id)pkSingleLineFormattedContactAddressIncludingCountryName:(bool)arg1;
- (id)pk_displayName;
- (id)recentContact;
- (bool)recentFromContactInformation;
- (bool)representsContact:(id)arg1 forContactKeys:(id)arg2;
- (id)sanitizedContact;
- (void)setContactSource:(unsigned long long)arg1;
- (void)setFormattingConstrained:(unsigned long long)arg1;
- (void)setIsHideMyEmail:(bool)arg1;
- (void)setRecentContact:(id)arg1;
- (void)setRecentFromContactInformation:(bool)arg1;
- (void)setValueSource:(id)arg1;
- (id)valueSource;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

+ (id)pl_findBestMatchingContactFromMatchingContacts:(id)arg1 firstName:(id)arg2 lastName:(id)arg3 contactFormatter:(id)arg4;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (void)px_requestImageWithTargetSize:(struct CGSize { double x1; double x2; })arg1 displayScale:(double)arg2 isRTL:(bool)arg3 resultHandler:(id /* block */)arg4;

// Image: /System/Library/PrivateFrameworks/RTTUtilities.framework/RTTUtilities

+ (id)contactForPhoneNumber:(id)arg1;

- (bool)ttyIsMe;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

+ (id)safari_defaultDescriptors;
+ (id)safari_imageViewDescriptors;
+ (id)safari_oneTimeCodeViewDescriptors;

- (id)safari_fullName;
- (id)safari_valueForWBSABProperty:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI

- (void)safari_setShareParticipantIdentifier:(id)arg1;
- (id)safari_shareParticipantIdentifier;

// Image: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime

+ (id)scl_predicateForContactsMatchingEventSender:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl

- (void)callNumberWithLabeledValue:(id)arg1;
- (void)faceTimeEmailWithLabeledValue:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities

+ (id)keysToFetchForFaceTime;
+ (id)tu_contactHandlesForHandle:(id)arg1;

- (id)allIDSDestinations;
- (id)allTUHandles;
- (id)anyDestinationID;
- (id)backingContact;
- (id)backingContactId;
- (id)backingContactIdentifier;
- (id)callerId;
- (id)destinationId;
- (id)displayName;
- (id)emailAddressStrings;
- (id)faceTimeQuicklookURL;
- (id)handles;
- (id)idsCanonicalDestinations;
- (id)isoCountryCode;
- (long long)mostRecentCallType;
- (bool)mostRecentCallWasMissed;
- (id)personNameComponents;
- (id)phoneNumberStrings;
- (id)tuHandlesForEmailAddresses;
- (id)tuHandlesForPhoneNumbers;
- (id)tu_labeledValueForEmailAddress:(id)arg1;
- (id)tu_labeledValueForHandle:(id)arg1;
- (id)tu_labeledValueForPhoneNumber:(id)arg1;
- (id)tu_labeledValueForSocialProfileWithUsername:(id)arg1;

// Image: /System/Library/PrivateFrameworks/UserManagementUI.framework/UserManagementUI

+ (id)contactForUser:(id)arg1;

@end
