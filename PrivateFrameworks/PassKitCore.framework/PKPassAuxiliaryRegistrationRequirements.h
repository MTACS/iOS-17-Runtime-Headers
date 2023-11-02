
@interface PKPassAuxiliaryRegistrationRequirements : NSObject <NSSecureCoding> {
    NSArray * _deviceDecryptionRequirements;
    NSArray * _deviceSignatureRequirements;
}

@property (nonatomic, readonly) NSArray *allRequirements;
@property (nonatomic, readonly) NSArray *deviceDecryptionRequirements;
@property (nonatomic, readonly) NSArray *deviceSignatureRequirements;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allRequirements;
- (id)description;
- (id)deviceDecryptionRequirements;
- (id)deviceSignatureRequirements;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPassAuxiliaryRegistrationRequirements:(id)arg1;

@end
