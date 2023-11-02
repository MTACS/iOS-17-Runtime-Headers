
@interface GKPlayerEmailInternal : GKInternalRepresentation {
    NSString * _address;
    NSString * _addressPrefix;
    NSString * _addressSHA1;
    bool  _verified;
}

@property (nonatomic, retain) NSString *address;
@property (nonatomic, retain) NSString *addressPrefix;
@property (nonatomic, retain) NSString *addressSHA1;
@property (nonatomic) bool verified;

+ (id)secureCodedPropertyKeys;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)address;
- (id)addressPrefix;
- (id)addressSHA1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setAddress:(id)arg1;
- (void)setAddressPrefix:(id)arg1;
- (void)setAddressSHA1:(id)arg1;
- (void)setVerified:(bool)arg1;
- (bool)verified;

@end
