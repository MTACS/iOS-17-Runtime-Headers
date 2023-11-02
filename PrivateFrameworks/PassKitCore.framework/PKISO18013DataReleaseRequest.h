
@interface PKISO18013DataReleaseRequest : NSObject {
    NSData * _authenticationACL;
    PKTransactionReleasedData * _dataElements;
    NSData * _externalizedAuthenticationContext;
    NSData * _iconData;
    NSURL * _iconURL;
    NSNumber * _industryCode;
    NSString * _organizationName;
    NSString * _organizationUnit;
    NSString * _rpIdentifier;
}

@property (nonatomic, retain) NSData *authenticationACL;
@property (nonatomic, retain) PKTransactionReleasedData *dataElements;
@property (nonatomic, retain) NSData *externalizedAuthenticationContext;
@property (nonatomic, retain) NSData *iconData;
@property (nonatomic, retain) NSURL *iconURL;
@property (nonatomic, retain) NSNumber *industryCode;
@property (nonatomic, retain) NSString *organizationName;
@property (nonatomic, retain) NSString *organizationUnit;
@property (nonatomic, retain) NSString *rpIdentifier;

- (void).cxx_destruct;
- (id)authenticationACL;
- (id)dataElements;
- (id)externalizedAuthenticationContext;
- (id)iconData;
- (id)iconURL;
- (id)industryCode;
- (id)organizationName;
- (id)organizationUnit;
- (id)rpIdentifier;
- (void)setAuthenticationACL:(id)arg1;
- (void)setDataElements:(id)arg1;
- (void)setExternalizedAuthenticationContext:(id)arg1;
- (void)setIconData:(id)arg1;
- (void)setIconURL:(id)arg1;
- (void)setIndustryCode:(id)arg1;
- (void)setOrganizationName:(id)arg1;
- (void)setOrganizationUnit:(id)arg1;
- (void)setRpIdentifier:(id)arg1;

@end
