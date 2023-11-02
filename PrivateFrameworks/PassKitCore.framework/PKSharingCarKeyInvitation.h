
@interface PKSharingCarKeyInvitation : PKSharingCarKeyMessage {
    PKPassShareActivationOptions * _activationOptions;
    PKSharingMesageProprietaryData * _proprietaryData;
}

@property (nonatomic, readonly) PKPassShareActivationOptions *activationOptions;
@property (nonatomic, readonly) NSString *brandIdentifier;
@property (nonatomic, readonly) NSString *partnerIdentifier;
@property (nonatomic, readonly) PKSharingMesageProprietaryData *proprietaryData;
@property (nonatomic, readonly) unsigned long long radioTechnology;
@property (nonatomic, readonly) NSString *readerIdentifier;
@property (nonatomic, readonly) NSString *vehicleIssuer;
@property (nonatomic, readonly) NSString *vehicleModel;

+ (id)_activationOptionsFromDictionary:(id)arg1;
+ (void)_mergeActivationOptions:(id)arg1 intoDictionary:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activationOptions;
- (id)brandIdentifier;
- (bool)configureWithContent:(id)arg1;
- (id)initWithRawInvite:(id)arg1 shareIdentifier:(id)arg2 radioTechnology:(unsigned long long)arg3 vehicleModel:(id)arg4 vehicleIssuer:(id)arg5 readerIdentifier:(id)arg6 partnerIdentifier:(id)arg7 brandIdentifier:(id)arg8 carKeySharingDict:(id)arg9 proprietaryData:(id)arg10 activationOptions:(id)arg11 displayInformation:(id)arg12;
- (id)partnerIdentifier;
- (id)proprietaryData;
- (unsigned long long)radioTechnology;
- (id)readerIdentifier;
- (id)vehicleIssuer;
- (id)vehicleModel;

@end
