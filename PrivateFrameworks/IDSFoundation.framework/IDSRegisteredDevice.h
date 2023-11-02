
@interface IDSRegisteredDevice : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _URIs;
    NSString * _hardwareVersion;
    NSString * _name;
    NSData * _publicDeviceIdentity;
    NSData * _pushToken;
}

@property (nonatomic, readonly) NSArray *URIs;
@property (nonatomic, readonly) NSString *hardwareVersion;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSData *publicDeviceIdentity;
@property (nonatomic, readonly) NSData *pushToken;

+ (id)registeredDeviceFromDependentRegistrationDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URIs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)hardwareVersion;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 hardwareVersion:(id)arg2 pushToken:(id)arg3 URIs:(id)arg4 publicDeviceIdentity:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRegisteredDevice:(id)arg1;
- (id)name;
- (id)publicDeviceIdentity;
- (id)pushToken;

@end
