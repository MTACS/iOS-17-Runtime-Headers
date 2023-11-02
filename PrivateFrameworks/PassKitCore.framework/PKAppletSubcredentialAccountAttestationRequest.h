
@interface PKAppletSubcredentialAccountAttestationRequest : PKAccountAttestationRequest {
    NSData * _sharingTokenHash;
    NSData * _subCASEResidencyAttestation;
}

@property (nonatomic, copy) NSData *sharingTokenHash;
@property (nonatomic, copy) NSData *subCASEResidencyAttestation;

- (void).cxx_destruct;
- (id)initWithRequestData:(id)arg1;
- (void)setSharingTokenHash:(id)arg1;
- (void)setSubCASEResidencyAttestation:(id)arg1;
- (id)sharingTokenHash;
- (id)subCASEResidencyAttestation;

@end
