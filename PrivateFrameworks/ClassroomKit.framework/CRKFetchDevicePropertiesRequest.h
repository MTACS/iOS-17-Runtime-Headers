
@interface CRKFetchDevicePropertiesRequest : CATTaskRequest {
    NSArray * _propertyKeys;
}

@property (nonatomic, copy) NSArray *propertyKeys;

+ (Class)allowlistedClassForResultObject;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)propertyKeys;
- (void)setPropertyKeys:(id)arg1;

@end
