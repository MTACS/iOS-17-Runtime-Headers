
@interface CXAccount : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    NSString * _accountDescription;
    CXHandle * _handle;
    NSString * _isoCountryCode;
    NSString * _serviceName;
    NSString * _shortLabel;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic, readonly, copy) NSString *accountDescription;
@property (nonatomic, readonly) CXHandle *handle;
@property (nonatomic, readonly, copy) NSString *isoCountryCode;
@property (nonatomic, readonly, copy) NSString *serviceName;
@property (nonatomic, readonly, copy) NSString *shortLabel;

+ (bool)supportsSecureCoding;
+ (id)unarchivedObjectClasses;
+ (id)unarchivedObjectFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)UUID;
- (id)accountDescription;
- (id)archivedDataWithError:(id*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 description:(id)arg2 serviceName:(id)arg3 isoCountryCode:(id)arg4 handle:(id)arg5;
- (id)initWithUUID:(id)arg1 description:(id)arg2 serviceName:(id)arg3 isoCountryCode:(id)arg4 handle:(id)arg5 shortLabel:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAccount:(id)arg1;
- (id)isoCountryCode;
- (id)serviceName;
- (id)shortLabel;

@end
