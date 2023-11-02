
@interface SPAccessoryPairingConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSString * _name;
    NSString * _roleEmoji;
    long long  _roleId;
}

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *roleEmoji;
@property (nonatomic) long long roleId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 roleId:(long long)arg2 roleEmoji:(id)arg3;
- (id)name;
- (id)roleEmoji;
- (long long)roleId;
- (void)setName:(id)arg1;
- (void)setRoleEmoji:(id)arg1;
- (void)setRoleId:(long long)arg1;

@end
