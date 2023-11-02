
@interface CRKASMConcreteRoster : NSObject <CRKASMRoster> {
    CRKASMCertificateVendor * _certificateVendor;
    NSArray * _courses;
    <CRKASMOrganization> * _organization;
    <CRKASMUser> * _user;
}

@property (nonatomic, readonly, copy) NSSet *allTrustedUserCertificates;
@property (nonatomic, readonly) CRKASMCertificateVendor *certificateVendor;
@property (nonatomic, readonly, copy) NSArray *courses;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CRKASMOrganization> *organization;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <CRKASMUser> *user;

- (void).cxx_destruct;
- (id)allTrustedUserCertificates;
- (id)allTrustedUserIdentifiers;
- (id)certificateVendor;
- (id)courses;
- (id)description;
- (unsigned long long)hash;
- (id)initWithOrganization:(id)arg1 user:(id)arg2 courses:(id)arg3 certificateVendor:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)organization;
- (id)user;

@end
