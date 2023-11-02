
@interface CNUICoreApplicationAuthorizationItem : NSObject <NSCopying, NSSecureCoding> {
    long long  _authorization;
    NSString * _bundleIdentifier;
    long long  _deviceType;
    NSData * _icon;
    NSString * _name;
    CNUICoreApplicationAuthorizationItem * _snapshot;
}

@property (nonatomic) long long authorization;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) long long deviceType;
@property (nonatomic, readonly) bool hasChanges;
@property (nonatomic, readonly) NSData *icon;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) CNUICoreApplicationAuthorizationItem *snapshot;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)authorization;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)deviceType;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasChanges;
- (unsigned long long)hash;
- (id)icon;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIcon:(id)arg1 name:(id)arg2 bundleIdentifier:(id)arg3 deviceType:(long long)arg4 authorization:(long long)arg5;
- (id)initWithIcon:(id)arg1 name:(id)arg2 bundleIdentifier:(id)arg3 deviceType:(long long)arg4 authorization:(long long)arg5 shouldTakeSnapshot:(bool)arg6;
- (bool)isEqual:(id)arg1;
- (id)itemBySettingIcon:(id)arg1;
- (id)name;
- (void)setAuthorization:(long long)arg1;
- (id)snapshot;

@end
