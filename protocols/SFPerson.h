
@protocol SFPerson <NSObject>

@required

- (NSString *)contactIdentifier;
- (NSDictionary *)dictionaryRepresentation;
- (NSString *)displayName;
- (NSArray *)emailAddresses;
- (NSData *)jsonData;
- (NSString *)personIdentifier;
- (NSArray *)phoneNumbers;
- (NSString *)photosIdentifier;
- (void)setContactIdentifier:(NSString *)arg1;
- (void)setDisplayName:(NSString *)arg1;
- (void)setEmailAddresses:(NSArray *)arg1;
- (void)setPersonIdentifier:(NSString *)arg1;
- (void)setPhoneNumbers:(NSArray *)arg1;
- (void)setPhotosIdentifier:(NSString *)arg1;

@end
