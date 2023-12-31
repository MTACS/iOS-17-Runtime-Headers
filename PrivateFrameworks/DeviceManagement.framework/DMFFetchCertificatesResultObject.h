
@interface DMFFetchCertificatesResultObject : CATTaskResultObject {
    NSArray * _certificates;
}

@property (nonatomic, readonly, copy) NSArray *certificates;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)certificates;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCertificates:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
