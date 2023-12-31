
@interface DMFFetchLocationResultObject : CATTaskResultObject {
    CLLocation * _location;
}

@property (nonatomic, readonly, copy) CLLocation *location;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(id)arg1;
- (id)location;

@end
