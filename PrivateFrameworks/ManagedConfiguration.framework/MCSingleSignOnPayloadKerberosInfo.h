
@interface MCSingleSignOnPayloadKerberosInfo : NSObject {
    NSArray * _URLPrefixMatches;
    NSString * _accountGUID;
    NSString * _accountTypeGUID;
    NSArray * _appIdentifierMatches;
    NSString * _certificateUUID;
    NSString * _principalName;
    NSString * _realm;
}

@property (nonatomic, retain) NSArray *URLPrefixMatches;
@property (nonatomic, retain) NSString *accountGUID;
@property (nonatomic, retain) NSString *accountTypeGUID;
@property (nonatomic, retain) NSArray *appIdentifierMatches;
@property (nonatomic, retain) NSString *certificateUUID;
@property (nonatomic, retain) NSString *principalName;
@property (nonatomic, retain) NSString *realm;

- (void).cxx_destruct;
- (id)URLPrefixMatches;
- (id)accountGUID;
- (id)accountTypeGUID;
- (id)appIdentifierMatches;
- (id)certificateUUID;
- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)principalName;
- (id)realm;
- (void)setAccountGUID:(id)arg1;
- (void)setAccountTypeGUID:(id)arg1;
- (void)setAppIdentifierMatches:(id)arg1;
- (void)setCertificateUUID:(id)arg1;
- (void)setPrincipalName:(id)arg1;
- (void)setRealm:(id)arg1;
- (void)setURLPrefixMatches:(id)arg1;
- (id)stubDictionary;
- (bool)validateAppIdentifierMatch:(id)arg1 outError:(id*)arg2;
- (bool)validateURLPrefixMatch:(id)arg1 outNormalizedString:(id*)arg2 outError:(id*)arg3;

@end