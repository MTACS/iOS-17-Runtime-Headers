
@interface jprL7AuZZkLkFoBK : NSObject {
    NSString * _FPANSuffix;
    NSString * _callerID;
    NSData * _challengeResponse;
    NSString * _emailAddress;
    unsigned long long  _eventFrequency;
    NSData * _hostChallenge;
    NSSet * _identities;
    unsigned long long  _passwordSetting;
    NSString * _phoneNumber;
    NSString * _seid;
    NSString * _serverEndpointIdentifier;
}

@property (nonatomic, retain) NSString *FPANSuffix;
@property (nonatomic, copy) NSString *callerID;
@property (nonatomic, retain) NSData *challengeResponse;
@property (nonatomic, retain) NSString *emailAddress;
@property (nonatomic) unsigned long long eventFrequency;
@property (nonatomic, retain) NSData *hostChallenge;
@property (nonatomic, retain) NSSet *identities;
@property (nonatomic) unsigned long long passwordSetting;
@property (nonatomic, retain) NSString *phoneNumber;
@property (nonatomic, retain) NSString *seid;
@property (nonatomic, retain) NSString *serverEndpointIdentifier;

- (void).cxx_destruct;
- (id)FPANSuffix;
- (id)callerID;
- (id)challengeResponse;
- (id)emailAddress;
- (unsigned long long)eventFrequency;
- (id)hostChallenge;
- (id)identities;
- (id)initWithServerEndpointIdentifier:(id)arg1;
- (unsigned long long)passwordSetting;
- (id)phoneNumber;
- (id)seid;
- (id)serverEndpointIdentifier;
- (void)setCallerID:(id)arg1;
- (void)setChallengeResponse:(id)arg1;
- (void)setEmailAddress:(id)arg1;
- (void)setEventFrequency:(unsigned long long)arg1;
- (void)setFPANSuffix:(id)arg1;
- (void)setHostChallenge:(id)arg1;
- (void)setIdentities:(id)arg1;
- (void)setPasswordSetting:(unsigned long long)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setSeid:(id)arg1;
- (void)setServerEndpointIdentifier:(id)arg1;

@end
