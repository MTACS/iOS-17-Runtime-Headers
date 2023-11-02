
@interface DMFFetchDevicePropertiesRequest : DMFTaskRequest {
    NSArray * _propertyKeys;
}

@property (nonatomic, copy) NSArray *propertyKeys;

+ (Class)allowlistedClassForResultObject;
+ (id)currentDevicePropertyKeys;
+ (id)devicePropertyKeysForPlatform:(unsigned long long)arg1;
+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)propertyKeys;
- (void)setPropertyKeys:(id)arg1;

@end
