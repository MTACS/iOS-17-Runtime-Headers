
@interface PKAddCarKeyPassConfiguration : PKAddSecureElementPassConfiguration <NSSecureCoding> {
    NSString * _manufacturerIdentifier;
    bool  _onlineServicesActivated;
    bool  _ownerKeyPairingAvailable;
    NSString * _pairedEntityIdentifier;
    NSString * _password;
    NSString * _productPlanIdentifier;
    bool  _proofOfOwnershipPresent;
    NSString * _provisioningTemplateIdentifier;
    unsigned long long  _referralSource;
    unsigned long long  _supportedRadioTechnologies;
    NSString * _vehicleName;
}

@property (nonatomic, copy) NSString *manufacturerIdentifier;
@property (nonatomic) bool onlineServicesActivated;
@property (nonatomic) bool ownerKeyPairingAvailable;
@property (nonatomic, copy) NSString *pairedEntityIdentifier;
@property (nonatomic, readonly) NSString *pairedReaderIdentifier;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, copy) NSString *productPlanIdentifier;
@property (nonatomic) bool proofOfOwnershipPresent;
@property (nonatomic, retain) NSString *provisioningTemplateIdentifier;
@property (nonatomic) unsigned long long referralSource;
@property (nonatomic) unsigned long long supportedRadioTechnologies;
@property (nonatomic, copy) NSString *vehicleName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)manufacturerIdentifier;
- (bool)onlineServicesActivated;
- (bool)ownerKeyPairingAvailable;
- (id)pairedEntityIdentifier;
- (id)pairedReaderIdentifier;
- (id)password;
- (id)productPlanIdentifier;
- (bool)proofOfOwnershipPresent;
- (id)provisioningTemplateIdentifier;
- (unsigned long long)referralSource;
- (void)setManufacturerIdentifier:(id)arg1;
- (void)setOnlineServicesActivated:(bool)arg1;
- (void)setOwnerKeyPairingAvailable:(bool)arg1;
- (void)setPairedEntityIdentifier:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setProductPlanIdentifier:(id)arg1;
- (void)setProofOfOwnershipPresent:(bool)arg1;
- (void)setProvisioningTemplateIdentifier:(id)arg1;
- (void)setReferralSource:(unsigned long long)arg1;
- (void)setSupportedRadioTechnologies:(unsigned long long)arg1;
- (void)setVehicleName:(id)arg1;
- (unsigned long long)supportedRadioTechnologies;
- (id)vehicleInitiatedPairingLaunchURL;
- (id)vehicleName;

@end
