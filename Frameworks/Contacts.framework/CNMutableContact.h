
@interface CNMutableContact : CNContact {
    NSData * _cropRectHash;
    NSString * _cropRectID;
    bool  _hasChanges;
}

@property (nonatomic, copy) NSDictionary *activityAlerts;
@property (nonatomic, copy) NSArray *addressingGrammars;
@property (nonatomic, copy) NSArray *addressingGrammarsEncrypted;
@property (nonatomic, copy) CNContactKeyVector *availableKeyDescriptor;
@property (nonatomic, retain) CNUIBackgroundColors *backgroundColors;
@property (nonatomic, copy) NSDateComponents *birthday;
@property (nonatomic, copy) NSArray *birthdays;
@property (nonatomic, copy) NSArray *calendarURIs;
@property (nonatomic, copy) CNActivityAlert *callAlert;
@property (nonatomic, copy) NSString *cardDAVUID;
@property (copy) NSString *companyName;
@property (nonatomic, copy) NSArray *contactRelations;
@property (nonatomic) long long contactType;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cropRect;
@property (nonatomic, copy) NSData *cropRectHash;
@property (nonatomic, copy) NSString *cropRectID;
@property (nonatomic, copy) NSArray *dates;
@property (nonatomic, copy) NSString *departmentName;
@property (nonatomic, copy) NSString *downtimeWhitelist;
@property (nonatomic, copy) NSArray *emailAddresses;
@property (nonatomic, copy) NSString *explicitDisplayName;
@property (nonatomic, copy) NSString *externalIdentifier;
@property (nonatomic, copy) NSString *externalImageURI;
@property (nonatomic, copy) NSString *externalModificationTag;
@property (nonatomic, copy) NSData *externalRepresentation;
@property (nonatomic, copy) NSString *externalURI;
@property (nonatomic, copy) NSString *externalUUID;
@property (nonatomic, copy) NSString *familyName;
@property (copy) NSString *firstName;
@property unsigned long long flags;
@property (nonatomic, copy) NSData *fullscreenImageData;
@property (nonatomic, copy) NSString *givenName;
@property (nonatomic, readonly) bool hasChanges;
@property (nonatomic) int iOSLegacyIdentifier;
@property (nonatomic, readonly) NSUUID *id;
@property (nonatomic, copy) NSData *imageBackgroundColorsData;
@property (nonatomic, copy) NSData *imageData;
@property (nonatomic) bool imageDataAvailable;
@property (nonatomic, copy) NSData *imageHash;
@property (nonatomic, copy) NSString *imageType;
@property (getter=isImplicitAugmentation) bool implicitAugmentation;
@property (nonatomic, copy) NSArray *instantMessageAddresses;
@property (nonatomic) bool isUsingSharedPhoto;
@property (nonatomic, copy) NSString *jobTitle;
@property (copy) NSString *lastName;
@property (nonatomic, copy) NSString *linkIdentifier;
@property (nonatomic, copy) NSArray *linkedContacts;
@property (copy) NSString *maidenName;
@property (nonatomic, copy) NSString *mapsData;
@property (nonatomic, copy) NSData *memojiMetadata;
@property (nonatomic, copy) NSString *middleName;
@property (nonatomic, copy) NSDate *modificationDate;
@property (nonatomic, copy) NSString *namePrefix;
@property (nonatomic, copy) NSString *nameSuffix;
@property (copy) NSString *nameTitle;
@property (nonatomic, copy) NSString *nickname;
@property (nonatomic, copy) NSDateComponents *nonGregorianBirthday;
@property (nonatomic, copy) NSString *note;
@property (nonatomic, copy) NSString *organizationName;
@property (nonatomic, copy) NSArray *phoneNumbers;
@property (nonatomic, copy) NSString *phonemeData;
@property (nonatomic, copy) NSString *phoneticCompanyName;
@property (nonatomic, copy) NSString *phoneticFamilyName;
@property (copy) NSString *phoneticFirstName;
@property (nonatomic, copy) NSString *phoneticGivenName;
@property (copy) NSString *phoneticLastName;
@property (nonatomic, copy) NSString *phoneticMiddleName;
@property (nonatomic, copy) NSString *phoneticOrganizationName;
@property (nonatomic, copy) NSArray *postalAddresses;
@property (nonatomic, copy) NSString *preferredApplePersonaIdentifier;
@property (nonatomic, copy) NSString *preferredChannel;
@property (getter=isPreferredForImage, nonatomic) bool preferredForImage;
@property (getter=isPreferredForName, nonatomic) bool preferredForName;
@property (nonatomic, copy) NSString *preferredLikenessSource;
@property (nonatomic, copy) NSString *previousFamilyName;
@property (nonatomic, copy) NSString *pronunciationFamilyName;
@property (nonatomic, copy) NSString *pronunciationGivenName;
@property (copy) NSArray *relatedNames;
@property (nonatomic, copy) NSString *searchIndex;
@property (nonatomic, copy) NSString *sectionForSortingByFamilyName;
@property (nonatomic, copy) NSString *sectionForSortingByGivenName;
@property (nonatomic) long long sharedPhotoDisplayPreference;
@property (nonatomic, copy) CNContact *snapshot;
@property (nonatomic, copy) NSArray *socialProfiles;
@property (nonatomic, copy) NSString *storeIdentifier;
@property (nonatomic, copy) NSDictionary *storeInfo;
@property (nonatomic, copy) NSData *syncImageData;
@property (nonatomic, copy) CNActivityAlert *textAlert;
@property (nonatomic, copy) NSData *thumbnailImageData;
@property (nonatomic, copy) NSArray *urlAddresses;
@property (nonatomic, copy) CNWallpaper *wallpaper;
@property (nonatomic, copy) CNWallpaperMetadata *wallpaperMetadata;
@property (nonatomic, copy) NSData *watchWallpaperImageData;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

+ (void)freezeIfInstancetypeIsImmutable:(id)arg1;
+ (id)imageDataDescriptions;
+ (id)unifyContacts:(id)arg1;

- (void).cxx_destruct;
- (void)_setAddressingGrammars:(id)arg1;
- (void)_setAddressingGrammarsEncrypted:(id)arg1;
- (void)_setBirthday:(id)arg1;
- (void)_setCalendarURIs:(id)arg1;
- (void)_setCallAlert:(id)arg1;
- (void)_setContactRelations:(id)arg1;
- (void)_setCreationDate:(id)arg1;
- (void)_setDates:(id)arg1;
- (void)_setDepartmentName:(id)arg1;
- (void)_setDowntimeWhitelist:(id)arg1;
- (void)_setEmailAddresses:(id)arg1;
- (void)_setExplicitDisplayName:(id)arg1;
- (void)_setExternalIdentifier:(id)arg1;
- (void)_setExternalImageURI:(id)arg1;
- (void)_setExternalModificationTag:(id)arg1;
- (void)_setExternalRepresentation:(id)arg1;
- (void)_setExternalUUID:(id)arg1;
- (void)_setFamilyName:(id)arg1;
- (void)_setFullscreenImageData:(id)arg1;
- (void)_setGivenName:(id)arg1;
- (void)_setImageBackgroundColorsData:(id)arg1;
- (void)_setImageData:(id)arg1;
- (void)_setImageHash:(id)arg1;
- (void)_setImageType:(id)arg1;
- (void)_setInstantMessageAddresses:(id)arg1;
- (void)_setJobTitle:(id)arg1;
- (void)_setLinkIdentifier:(id)arg1;
- (void)_setMapsData:(id)arg1;
- (void)_setMemojiMetadata:(id)arg1;
- (void)_setMiddleName:(id)arg1;
- (void)_setModificationDate:(id)arg1;
- (void)_setNamePrefix:(id)arg1;
- (void)_setNameSuffix:(id)arg1;
- (void)_setNickname:(id)arg1;
- (void)_setNonGregorianBirthday:(id)arg1;
- (void)_setNote:(id)arg1;
- (void)_setOrganizationName:(id)arg1;
- (void)_setPhoneNumbers:(id)arg1;
- (void)_setPhonemeData:(id)arg1;
- (void)_setPhoneticFamilyName:(id)arg1;
- (void)_setPhoneticGivenName:(id)arg1;
- (void)_setPhoneticMiddleName:(id)arg1;
- (void)_setPhoneticOrganizationName:(id)arg1;
- (void)_setPostalAddresses:(id)arg1;
- (void)_setPreferredApplePersonaIdentifier:(id)arg1;
- (void)_setPreferredChannel:(id)arg1;
- (void)_setPreferredLikenessSource:(id)arg1;
- (void)_setPreviousFamilyName:(id)arg1;
- (void)_setPronunciationFamilyName:(id)arg1;
- (void)_setPronunciationGivenName:(id)arg1;
- (void)_setSearchIndex:(id)arg1;
- (void)_setSectionForSortingByFamilyName:(id)arg1;
- (void)_setSectionForSortingByGivenName:(id)arg1;
- (void)_setSocialProfiles:(id)arg1;
- (void)_setSyncImageData:(id)arg1;
- (void)_setTextAlert:(id)arg1;
- (void)_setThumbnailImageData:(id)arg1;
- (void)_setUrlAddresses:(id)arg1;
- (void)_setWallpaper:(id)arg1;
- (void)_setWallpaperMetadata:(id)arg1;
- (void)_setWatchWallpaperImageData:(id)arg1;
- (id)addressingGrammars;
- (id)addressingGrammarsEncrypted;
- (id)availableKeyDescriptor;
- (id)birthday;
- (id)calendarURIs;
- (id)callAlert;
- (id)cardDAVUID;
- (id)contactRelations;
- (long long)contactType;
- (id)copyWithSelfAsSnapshot;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRect;
- (id)cropRectHash;
- (id)cropRectID;
- (id)dates;
- (id)departmentName;
- (id)downtimeWhitelist;
- (id)emailAddresses;
- (id)explicitDisplayName;
- (id)externalIdentifier;
- (id)externalImageURI;
- (id)externalModificationTag;
- (id)externalRepresentation;
- (id)externalURI;
- (id)externalUUID;
- (id)familyName;
- (id)freeze;
- (id)freezeWithSelfAsSnapshot;
- (id)fullscreenImageData;
- (id)givenName;
- (bool)hasChanges;
- (id)imageBackgroundColorsData;
- (id)imageData;
- (bool)imageDataAvailable;
- (id)imageHash;
- (id)imageType;
- (id)initWithContact:(id)arg1;
- (id)instantMessageAddresses;
- (bool)isUsingSharedPhoto;
- (id)jobTitle;
- (id)linkIdentifier;
- (id)mapsData;
- (id)memojiMetadata;
- (id)middleName;
- (id)modificationDate;
- (id)namePrefix;
- (id)nameSuffix;
- (id)nickname;
- (id)nonGregorianBirthday;
- (id)note;
- (id)organizationName;
- (void)overwriteStateFromContact:(id)arg1;
- (id)phoneNumbers;
- (id)phonemeData;
- (id)phoneticFamilyName;
- (id)phoneticGivenName;
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
- (void)removeKeys:(id)arg1;
- (void)resetIsUsingSharedPhoto;
- (void)resetToNewContact;
- (id)searchIndex;
- (id)sectionForSortingByFamilyName;
- (id)sectionForSortingByGivenName;
- (id)selfOrMutableCopy;
- (void)setActivityAlerts:(id)arg1;
- (void)setAddressingGrammars:(id)arg1;
- (void)setAddressingGrammarsEncrypted:(id)arg1;
- (void)setAvailableKeyDescriptor:(id)arg1;
- (void)setBirthday:(id)arg1;
- (void)setCalendarURIs:(id)arg1;
- (void)setCallAlert:(id)arg1;
- (void)setCardDAVUID:(id)arg1;
- (void)setCompanyName:(id)arg1;
- (void)setContactRelations:(id)arg1;
- (void)setContactType:(long long)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCropRectHash:(id)arg1;
- (void)setCropRectID:(id)arg1;
- (void)setDates:(id)arg1;
- (void)setDepartmentName:(id)arg1;
- (void)setDowntimeWhitelist:(id)arg1;
- (void)setEmailAddresses:(id)arg1;
- (void)setExplicitDisplayName:(id)arg1;
- (void)setExternalIdentifier:(id)arg1;
- (void)setExternalImageURI:(id)arg1;
- (void)setExternalModificationTag:(id)arg1;
- (void)setExternalRepresentation:(id)arg1;
- (void)setExternalURI:(id)arg1;
- (void)setExternalUUID:(id)arg1;
- (void)setFamilyName:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setFlags:(unsigned long long)arg1;
- (void)setFrozenSelfAsSnapshot;
- (void)setFullscreenImageData:(id)arg1;
- (void)setGivenName:(id)arg1;
- (void)setIOSLegacyIdentifier:(int)arg1;
- (void)setImageBackgroundColorsData:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)setImageDataAvailable:(bool)arg1;
- (void)setImageHash:(id)arg1;
- (void)setImageType:(id)arg1;
- (void)setImplicitAugmentation:(bool)arg1;
- (void)setInstantMessageAddresses:(id)arg1;
- (void)setIsUsingSharedPhoto:(bool)arg1;
- (void)setJobTitle:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setLinkIdentifier:(id)arg1;
- (void)setLinkedContacts:(id)arg1;
- (void)setMaidenName:(id)arg1;
- (void)setMapsData:(id)arg1;
- (void)setMemojiMetadata:(id)arg1;
- (void)setMiddleName:(id)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setNamePrefix:(id)arg1;
- (void)setNameSuffix:(id)arg1;
- (void)setNameTitle:(id)arg1;
- (void)setNickname:(id)arg1;
- (void)setNilValueForKey:(id)arg1;
- (void)setNonGregorianBirthday:(id)arg1;
- (void)setNote:(id)arg1;
- (void)setOrganizationName:(id)arg1;
- (void)setPhoneNumbers:(id)arg1;
- (void)setPhonemeData:(id)arg1;
- (void)setPhoneticCompanyName:(id)arg1;
- (void)setPhoneticFamilyName:(id)arg1;
- (void)setPhoneticFirstName:(id)arg1;
- (void)setPhoneticGivenName:(id)arg1;
- (void)setPhoneticLastName:(id)arg1;
- (void)setPhoneticMiddleName:(id)arg1;
- (void)setPhoneticOrganizationName:(id)arg1;
- (void)setPostalAddresses:(id)arg1;
- (void)setPreferredApplePersonaIdentifier:(id)arg1;
- (void)setPreferredChannel:(id)arg1;
- (void)setPreferredForImage:(bool)arg1;
- (void)setPreferredForName:(bool)arg1;
- (void)setPreferredLikenessSource:(id)arg1;
- (void)setPreviousFamilyName:(id)arg1;
- (void)setPronunciationFamilyName:(id)arg1;
- (void)setPronunciationGivenName:(id)arg1;
- (void)setRelatedNames:(id)arg1;
- (void)setSearchIndex:(id)arg1;
- (void)setSectionForSortingByFamilyName:(id)arg1;
- (void)setSectionForSortingByGivenName:(id)arg1;
- (void)setSharedPhotoDisplayPreference:(long long)arg1;
- (void)setSnapshot:(id)arg1;
- (void)setSocialProfiles:(id)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (void)setStoreInfo:(id)arg1;
- (void)setSyncImageData:(id)arg1;
- (void)setTextAlert:(id)arg1;
- (void)setThumbnailImageData:(id)arg1;
- (void)setUrlAddresses:(id)arg1;
- (void)setWallpaper:(id)arg1;
- (void)setWallpaperMetadata:(id)arg1;
- (void)setWatchWallpaperImageData:(id)arg1;
- (long long)sharedPhotoDisplayPreference;
- (id)socialProfiles;
- (id)syncImageData;
- (id)textAlert;
- (id)thumbnailImageData;
- (void)updateImageDataAvailableFromCurrentState;
- (void)updateStateFromContact:(id)arg1;
- (void)updateWithSharedProfile:(id)arg1;
- (id)urlAddresses;
- (id)wallpaper;
- (id)wallpaperMetadata;
- (id)watchWallpaperImageData;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

- (id)addAllPropertiesFromContact:(id)arg1;
- (bool)addContactToGroups:(id)arg1 inStore:(id)arg2 request:(id)arg3;
- (id)addProperties:(id)arg1 excludingProperties:(id)arg2 fromContact:(id)arg3;
- (bool)deleteContactFromStore:(id)arg1 request:(id)arg2;
- (bool)hasNonPersistedData;
- (id)id;
- (bool)removeContactFromGroups:(id)arg1 inStore:(id)arg2 request:(id)arg3;
- (void)removePhoto;
- (bool)saveContactInStore:(id)arg1 group:(id)arg2 container:(id)arg3;
- (bool)saveContactInStore:(id)arg1 group:(id)arg2 container:(id)arg3 request:(id)arg4;
- (bool)saveContactInStore:(id)arg1 groups:(id)arg2 container:(id)arg3 request:(id)arg4;
- (void)setBirthdays:(id)arg1;
- (void)updateContactTypeWithPolicy:(id)arg1;
- (void)updateImageInfoWithType:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore

- (void)setBackgroundColors:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit

- (id)_initWithConversationMember:(id)arg1;
- (id)_initWithHandle:(id)arg1;
- (id)initWithConversationMember:(id)arg1;
- (id)initWithHandle:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

- (void)populateNamesFromComponents:(id)arg1;

@end