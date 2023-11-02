
@interface CXSenderIdentity : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    CXAccount * _account;
    NSString * _localizedShortName;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic, readonly) CXAccount *account;
@property (nonatomic, readonly) CXHandle *handle;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (nonatomic, readonly, copy) NSString *localizedShortName;

+ (bool)supportsSecureCoding;
+ (id)unarchivedObjectClasses;
+ (id)unarchivedObjectFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)UUID;
- (id)account;
- (id)archivedDataWithError:(id*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 account:(id)arg2;
- (id)initWithUUID:(id)arg1 handle:(id)arg2 localizedName:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSenderIdentity:(id)arg1;
- (id)localizedName;
- (id)localizedShortName;

@end
