
@interface PKSharingPushProvisioningInvitation : PKSharingMessage {
    PKPassShareActivationOptions * _activationOptions;
    NSArray * _metadatas;
    PKSharingMesageProprietaryData * _proprietaryData;
}

@property (nonatomic, readonly) PKPassShareActivationOptions *activationOptions;
@property (nonatomic, readonly) NSArray *metadatas;
@property (nonatomic, readonly) PKSharingMesageProprietaryData *proprietaryData;
@property (nonatomic, readonly) NSString *provisioningCredentialHash;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activationOptions;
- (bool)configureWithContent:(id)arg1;
- (id)description;
- (id)initWithDisplayInformation:(id)arg1 provisioningVouchersByOEM:(id)arg2 activationOptions:(id)arg3 proprietaryData:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)metadatas;
- (id)proprietaryData;
- (id)provisioningCredentialHash;

@end
