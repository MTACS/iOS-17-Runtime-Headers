
@interface DMFFetchApplicationsResultObject : CATTaskResultObject {
    NSDictionary * _applicationsByIdentifier;
}

@property (nonatomic, readonly, copy) NSDictionary *applicationsByIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applicationsByIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithApplicationsByIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
