
@interface CRKFetchStagedAdHocIdentityCertificateResultObject : CATTaskResultObject {
    NSData * _stagedAdHocIdentityCertificate;
}

@property (nonatomic, copy) NSData *stagedAdHocIdentityCertificate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setStagedAdHocIdentityCertificate:(id)arg1;
- (id)stagedAdHocIdentityCertificate;

@end
