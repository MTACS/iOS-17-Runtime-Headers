
@interface CRKIdentityServiceFetchCertificatesRequest : CATTaskRequest {
    NSArray * _personLinkIDs;
}

@property (nonatomic, copy) NSArray *personLinkIDs;

- (void).cxx_destruct;
- (id)personLinkIDs;
- (void)setPersonLinkIDs:(id)arg1;

@end
