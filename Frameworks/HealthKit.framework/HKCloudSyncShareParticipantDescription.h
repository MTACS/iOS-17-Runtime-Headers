
@interface HKCloudSyncShareParticipantDescription : NSObject <NSCopying, NSSecureCoding> {
    NSString * _acceptanceStatus;
    NSString * _identity;
    NSString * _permission;
    NSString * _role;
}

@property (nonatomic, readonly, copy) NSString *acceptanceStatus;
@property (nonatomic, readonly, copy) NSString *identity;
@property (nonatomic, readonly, copy) NSString *permission;
@property (nonatomic, readonly, copy) NSString *role;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)acceptanceStatus;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identity;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentity:(id)arg1 role:(id)arg2 acceptanceStatus:(id)arg3 permission:(id)arg4;
- (id)permission;
- (id)role;

@end
