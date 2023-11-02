
@interface IDSLocalPairingPairedDeviceRecord : IDSLocalPairingRecord <NSSecureCoding> {
    NSUUID * _cbuuid;
}

@property (nonatomic, readonly) NSUUID *cbuuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_publicIdenityForDataProtectionClass:(unsigned int)arg1 error:(id*)arg2;
- (id)cbuuid;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCBUUID:(id)arg1 publicIdentityDataClassA:(id)arg2 classC:(id)arg3 classD:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)publicIdentityClassA:(id*)arg1;
- (id)publicIdentityClassC:(id*)arg1;
- (id)publicIdentityClassD:(id*)arg1;

@end
