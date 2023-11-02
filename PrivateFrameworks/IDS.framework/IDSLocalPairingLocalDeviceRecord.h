
@interface IDSLocalPairingLocalDeviceRecord : IDSLocalPairingRecord <NSSecureCoding>

+ (bool)supportsSecureCoding;

- (id)_fullIdenityForDataProtectionClass:(unsigned int)arg1 error:(id*)arg2;
- (id)description;
- (id)fullIdentityClassA:(id*)arg1;
- (id)fullIdentityClassC:(id*)arg1;
- (id)fullIdentityClassD:(id*)arg1;
- (id)initWithWithFullIdentityDataClassA:(id)arg1 classC:(id)arg2 classD:(id)arg3;

@end
