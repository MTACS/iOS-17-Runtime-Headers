
@interface PKContactInformation : NSObject <NSSecureCoding> {
    NSArray * _emailAddresses;
    NSArray * _phoneNumbers;
    NSArray * _postalAddresses;
}

@property (nonatomic, readonly) NSArray *emailAddresses;
@property (nonatomic, readonly) NSArray *phoneNumbers;
@property (nonatomic, readonly) NSArray *postalAddresses;

+ (id)_keychainWrapper;
+ (id)contactInformationFromKeychain;
+ (void)deleteContactInformationFromKeychain;
+ (void)saveContactInformationToKeychain:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)emailAddresses;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithKeychainData:(id)arg1;
- (id)initWithPostalAddresses:(id)arg1 emailAddresses:(id)arg2 phoneNumbers:(id)arg3;
- (id)keychainData;
- (id)phoneNumbers;
- (id)postalAddresses;

@end
