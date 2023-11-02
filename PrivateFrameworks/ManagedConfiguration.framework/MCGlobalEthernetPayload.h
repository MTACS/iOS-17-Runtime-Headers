
@interface MCGlobalEthernetPayload : MCPayload {
    NSString * _certificateUUID;
    NSDictionary * _eapClientConfiguration;
    NSArray * _eapTypes;
    NSString * _interface;
    bool  _isSystemMode;
    NSString * _password;
    bool  _passwordRequired;
    NSArray * _payloadCertificateAnchorUUIDs;
    NSArray * _setupModes;
    NSString * _username;
    bool  _usernameRequired;
}

@property (nonatomic, retain) NSString *certificateUUID;
@property (nonatomic, retain) NSDictionary *eapClientConfiguration;
@property (nonatomic, retain) NSArray *eapTypes;
@property (nonatomic, retain) NSString *interface;
@property (nonatomic) bool isSystemMode;
@property (nonatomic, retain) NSString *password;
@property (nonatomic) bool passwordRequired;
@property (nonatomic, retain) NSArray *payloadCertificateAnchorUUIDs;
@property (nonatomic, retain) NSArray *setupModes;
@property (nonatomic, retain) NSString *username;
@property (nonatomic) bool usernameRequired;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)nonPrivateEAPKeys;
+ (id)typeStrings;

- (void).cxx_destruct;
- (bool)_eapConfigIsValid:(id)arg1 error:(id*)arg2;
- (id)_eapPasswordFromConfig:(id)arg1 isRequired:(bool*)arg2;
- (id)_eapUsernameFromConfig:(id)arg1 isRequired:(bool*)arg2;
- (bool)_payloadIsValid:(id)arg1 error:(id*)arg2;
- (id)certificateUUID;
- (id)eapClientConfiguration;
- (id)eapSettingsSection;
- (id)eapTypes;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)interface;
- (bool)isSystemMode;
- (id)password;
- (bool)passwordRequired;
- (id)payloadCertificateAnchorUUIDs;
- (id)payloadDescriptionKeyValueSections;
- (void)setCertificateUUID:(id)arg1;
- (void)setEapClientConfiguration:(id)arg1;
- (void)setEapTypes:(id)arg1;
- (void)setInterface:(id)arg1;
- (void)setIsSystemMode:(bool)arg1;
- (void)setPassword:(id)arg1;
- (void)setPasswordRequired:(bool)arg1;
- (void)setPayloadCertificateAnchorUUIDs:(id)arg1;
- (void)setSetupModes:(id)arg1;
- (void)setUsername:(id)arg1;
- (void)setUsernameRequired:(bool)arg1;
- (id)setupModes;
- (id)stubDictionary;
- (id)username;
- (bool)usernameRequired;
- (id)verboseDescription;

@end
