
@interface IDSLocalPairingRecord : NSObject <NSSecureCoding> {
    NSDictionary * _protectionClassIdentityDataMap;
}

@property (nonatomic, retain) NSDictionary *protectionClassIdentityDataMap;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)identityDataForDataProtectionClass:(unsigned int)arg1 error:(id*)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentityDataClassA:(id)arg1 classC:(id)arg2 classD:(id)arg3;
- (id)protectionClassIdentityDataMap;
- (void)setProtectionClassIdentityDataMap:(id)arg1;

@end
