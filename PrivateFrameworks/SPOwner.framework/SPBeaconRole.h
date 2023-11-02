
@interface SPBeaconRole : NSObject <NSCopying, NSSecureCoding> {
    NSString * _role;
    NSString * _roleEmoji;
    long long  _roleId;
}

@property (nonatomic, copy) NSString *role;
@property (nonatomic, copy) NSString *roleEmoji;
@property (nonatomic) long long roleId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRoleId:(long long)arg1 role:(id)arg2 roleEmoji:(id)arg3;
- (id)role;
- (id)roleEmoji;
- (long long)roleId;
- (void)setRole:(id)arg1;
- (void)setRoleEmoji:(id)arg1;
- (void)setRoleId:(long long)arg1;

@end
