
@interface SVDDeviceUnit : NSObject <NSCopying, NSSecureCoding> {
    SVDDeviceUnitSwift * _backing;
}

@property (nonatomic, readonly) NSString *assistantId;
@property (nonatomic, readonly) NSString *homeKitAccessoryIdentifier;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isCommunalDevice;
@property (nonatomic, readonly) NSString *mediaRouteIdentifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long proximity;
@property (nonatomic, readonly) NSString *roomName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assistantId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)homeKitAccessoryIdentifier;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceUnit:(id)arg1;
- (id)initWithIdentifier:(id)arg1 assistantId:(id)arg2 builder:(id /* block */)arg3;
- (id)initWithIdentifier:(id)arg1 assistantId:(id)arg2 name:(id)arg3 roomName:(id)arg4 proximity:(long long)arg5;
- (bool)isCommunalDevice;
- (id)mediaRouteIdentifier;
- (id)name;
- (long long)proximity;
- (id)roomName;

@end
