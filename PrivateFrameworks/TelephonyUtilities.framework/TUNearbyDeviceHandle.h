
@interface TUNearbyDeviceHandle : NSObject <NSCopying, NSSecureCoding> {
    TUNearbyDeviceHandleCapabilities * _capabilities;
    long long  _deviceModel;
    NSDictionary * _knownIdentifiersByHandleType;
    NSString * _name;
}

@property (nonatomic, readonly) TUNearbyDeviceHandleCapabilities *capabilities;
@property (nonatomic, readonly) long long deviceModel;
@property (nonatomic, readonly) NSDictionary *knownIdentifiersByHandleType;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) NSDictionary *plistRepresentation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)capabilities;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)deviceModel;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifierDescription;
- (id)identifierWithType:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 knownIdentifiers:(id)arg2;
- (id)initWithName:(id)arg1 knownIdentifiers:(id)arg2 deviceModel:(long long)arg3;
- (id)initWithName:(id)arg1 knownIdentifiers:(id)arg2 deviceModel:(long long)arg3 capabilities:(id)arg4;
- (id)initWithType:(long long)arg1 identifier:(id)arg2 name:(id)arg3;
- (id)initWithType:(long long)arg1 identifier:(id)arg2 name:(id)arg3 capabilities:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDeviceHandle:(id)arg1;
- (bool)isEquivalentToDeviceHandle:(id)arg1;
- (id)knownIdentifiersByHandleType;
- (id)name;
- (id)plistRepresentation;

@end
