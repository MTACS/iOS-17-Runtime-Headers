
@interface CRKIdentityServiceFetchCertificatesResultObject : CATTaskResultObject {
    NSDictionary * _certificatesByPersonLinkID;
}

@property (nonatomic, copy) NSDictionary *certificatesByPersonLinkID;

- (void).cxx_destruct;
- (id)certificatesByPersonLinkID;
- (void)setCertificatesByPersonLinkID:(id)arg1;

@end
