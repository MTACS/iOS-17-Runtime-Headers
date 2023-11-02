
@protocol CNVCardPerson <CNVCardNameDataSource, NSObject>

@required

- (NSDictionary *)activityAlerts;
- (NSArray *)addressingGrammars;
- (NSDateComponents *)alternateBirthdayComponents;
- (NSDateComponents *)birthdayComponents;
- (NSArray *)calendarURIs;
- (NSString *)cardDAVUID;
- (NSString *)department;
- (int)downtimeWhitelistAuthorization;
- (NSArray *)emailAddresses;
- (NSString *)firstName;
- (NSData *)imageBackgroundColorsData;
- (NSDictionary *)imageCropRects;
- (NSData *)imageData;
- (NSData *)imageHash;
- (NSArray *)imageReferences;
- (NSString *)imageType;
- (NSArray *)instantMessagingAddresses;
- (bool)isCompany;
- (bool)isMe;
- (NSString *)jobTitle;
- (NSDictionary *)largeImageCropRects;
- (NSData *)largeImageData;
- (NSData *)largeImageHashOfType:(NSString *)arg1;
- (NSString *)lastName;
- (NSString *)maidenName;
- (NSData *)memojiMetadata;
- (NSString *)middleName;
- (int)nameOrder;
- (NSArray *)namesOfParentGroups;
- (NSString *)nickname;
- (NSString *)note;
- (NSString *)organization;
- (NSArray *)otherDateComponents;
- (NSArray *)phoneNumbers;
- (NSString *)phonemeData;
- (NSString *)phoneticFirstName;
- (NSString *)phoneticLastName;
- (NSString *)phoneticMiddleName;
- (NSString *)phoneticOrganization;
- (NSArray *)postalAddresses;
- (NSString *)preferredApplePersonaIdentifier;
- (NSString *)preferredLikenessSource;
- (NSString *)pronunciationFirstName;
- (NSString *)pronunciationLastName;
- (NSArray *)relatedNames;
- (int)sharedPhotoDisplayPreference;
- (NSArray *)socialProfiles;
- (NSString *)suffix;
- (NSString *)title;
- (NSString *)uid;
- (NSArray *)unknownProperties;
- (NSArray *)urls;
- (NSData *)wallpaper;
- (NSData *)watchWallpaperImageData;

@end
