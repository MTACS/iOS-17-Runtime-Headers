
@interface CRKASMConcreteTrustedUser : CRKASMConcreteUser <CRKASMTrustedUser> {
    CRKASMCertificateVendor * _certificateVendor;
}

@property (nonatomic, readonly, copy) NSString *appleID;
@property (nonatomic, readonly) CRKASMCertificateVendor *certificateVendor;
@property (nonatomic, readonly, copy) NSSet *certificates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFederated, nonatomic, readonly) bool federated;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) <CRKASMNameComponents> *nameComponents;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)certificateVendor;
- (id)certificates;
- (id)description;
- (unsigned long long)hash;
- (id)initWithBackingPerson:(id)arg1 certificateVendor:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConcreteTrustedUser:(id)arg1;

@end
