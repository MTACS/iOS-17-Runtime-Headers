
@interface PKRegionalContactFormatConfiguration : NSObject <NSSecureCoding> {
    PKAddressFormatConfiguration * _addressFormatConfiguration;
    PKNameComponentFormatConfiguration * _nameComponentFormatConfiguration;
}

@property (nonatomic, readonly) PKAddressFormatConfiguration *addressFormatConfiguration;
@property (nonatomic, readonly) PKNameComponentFormatConfiguration *nameComponentFormatConfiguration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)addressFormatConfiguration;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)nameComponentFormatConfiguration;

@end
