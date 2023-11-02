
@interface TUSenderIdentity : NSObject <NSCopying, NSSecureCoding> {
    NSString * _ISOCountryCode;
    NSUUID * _UUID;
    NSUUID * _accountUUID;
    TUHandle * _handle;
    NSString * _localizedName;
    NSString * _localizedServiceName;
    NSString * _localizedShortName;
}

@property (nonatomic, readonly, copy) NSString *ISOCountryCode;
@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic, readonly) NSUUID *accountUUID;
@property (nonatomic, readonly) TUHandle *handle;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (nonatomic, readonly, copy) NSString *localizedServiceName;
@property (nonatomic, readonly, copy) NSString *localizedShortName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ISOCountryCode;
- (id)UUID;
- (id)accountUUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSenderIdentity:(id)arg1;
- (id)initWithUUID:(id)arg1 accountUUID:(id)arg2 ISOCountryCode:(id)arg3 localizedName:(id)arg4 localizedShortName:(id)arg5 localizedServiceName:(id)arg6 handle:(id)arg7;
- (id)initWithUUID:(id)arg1 accountUUID:(id)arg2 localizedName:(id)arg3 localizedShortName:(id)arg4 handle:(id)arg5;
- (id)initWithUUID:(id)arg1 accountUUID:(id)arg2 localizedName:(id)arg3 localizedShortName:(id)arg4 localizedServiceName:(id)arg5 handle:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSenderIdentity:(id)arg1;
- (id)localizedName;
- (id)localizedServiceName;
- (id)localizedShortName;

@end
