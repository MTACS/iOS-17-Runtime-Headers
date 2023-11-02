
@interface DAKeyBindingAttestationRequestData : NSObject <NSSecureCoding> {
    NSData * _casd;
    NSData * _rsaCertData;
    NSUUID * _sharingSessionIdentifier;
    NSData * _subCaAttestation;
}

@property (nonatomic, readonly) NSData *casd;
@property (nonatomic, readonly) NSData *rsaCertData;
@property (nonatomic, readonly) NSUUID *sharingSessionIdentifier;
@property (nonatomic, readonly) NSData *subCaAttestation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)casd;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSharingSessionIdentifier:(id)arg1 subCaAttestation:(id)arg2 casd:(id)arg3 rsaCertData:(id)arg4;
- (id)rsaCertData;
- (id)sharingSessionIdentifier;
- (id)subCaAttestation;

@end
