
@interface SFCMACOperation : SFMessageAuthenticationCodeOperation {
    id  _cmacOperationInternal;
}

@property (nonatomic, copy) SFSymmetricEncryptionOperation *encryptionOperation;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptionOperation;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEncryptionOperation:(id)arg1;
- (void)setEncryptionOperation:(id)arg1;

@end
