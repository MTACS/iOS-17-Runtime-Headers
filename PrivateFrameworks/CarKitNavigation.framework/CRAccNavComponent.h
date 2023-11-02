
@interface CRAccNavComponent : NSObject <NSCopying, NSSecureCoding> {
    NSString * _accessoryUID;
    ACCNavigationAccessoryComponent * _component;
    NSNumber * _componentIdentifier;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) NSString *accessoryUID;
@property (nonatomic, readonly) ACCNavigationAccessoryComponent *component;
@property (nonatomic, readonly) NSNumber *componentIdentifier;
@property (nonatomic, readonly) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessoryUID;
- (id)component;
- (id)componentIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAccessoryUID:(id)arg1 component:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 accessoryUID:(id)arg2 component:(id)arg3;
- (id)uuid;

@end
