
@interface SPBeaconUpdates : NSObject <NSCopying, NSSecureCoding> {
    NSString * _emoji;
    NSString * _name;
    bool  _restoreDefaultName;
    long long  _roleId;
}

@property (nonatomic, copy) NSString *emoji;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) bool restoreDefaultName;
@property (nonatomic) long long roleId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)emoji;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 roleId:(long long)arg2;
- (id)name;
- (bool)restoreDefaultName;
- (long long)roleId;
- (void)setEmoji:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRestoreDefaultName:(bool)arg1;
- (void)setRoleId:(long long)arg1;

@end
