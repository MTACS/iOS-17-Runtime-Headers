
@protocol _SFPBPerson <NSObject>

@required

- (void)addEmailAddresses:(NSString *)arg1;
- (void)addPhoneNumbers:(NSString *)arg1;
- (void)clearEmailAddresses;
- (void)clearPhoneNumbers;
- (NSString *)contactIdentifier;
- (NSString *)displayName;
- (NSArray *)emailAddresses;
- (NSString *)emailAddressesAtIndex:(unsigned long long)arg1;
- (unsigned long long)emailAddressesCount;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSString *)personIdentifier;
- (NSArray *)phoneNumbers;
- (NSString *)phoneNumbersAtIndex:(unsigned long long)arg1;
- (unsigned long long)phoneNumbersCount;
- (NSString *)photosIdentifier;
- (void)setContactIdentifier:(NSString *)arg1;
- (void)setDisplayName:(NSString *)arg1;
- (void)setEmailAddresses:(NSArray *)arg1;
- (void)setPersonIdentifier:(NSString *)arg1;
- (void)setPhoneNumbers:(NSArray *)arg1;
- (void)setPhotosIdentifier:(NSString *)arg1;

@end
