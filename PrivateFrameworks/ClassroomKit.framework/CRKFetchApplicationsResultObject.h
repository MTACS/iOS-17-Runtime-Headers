
@interface CRKFetchApplicationsResultObject : CATTaskResultObject {
    NSDictionary * _applicationsByIdentifier;
}

@property (nonatomic, copy) NSDictionary *applicationsByIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applicationsByIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setApplicationsByIdentifier:(id)arg1;

@end
