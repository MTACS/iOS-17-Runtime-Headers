
@interface CRKFetchMDMIdentityResultObject : CATTaskResultObject {
    NSString * _mdmIdentityCommonName;
}

@property (nonatomic, retain) NSString *mdmIdentityCommonName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mdmIdentityCommonName;
- (void)setMdmIdentityCommonName:(id)arg1;

@end
