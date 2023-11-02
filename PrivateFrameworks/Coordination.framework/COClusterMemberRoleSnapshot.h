
@interface COClusterMemberRoleSnapshot : NSObject <NSCopying, NSSecureCoding> {
    COClusterMember * _member;
    COClusterRole * _role;
    bool  _stale;
}

@property (nonatomic, readonly) COClusterMember *member;
@property (nonatomic, readonly) COClusterRole *role;
@property (getter=isStale, nonatomic) bool stale;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMember:(id)arg1 role:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSnapshot:(id)arg1;
- (bool)isStale;
- (id)member;
- (id)role;
- (void)setStale:(bool)arg1;

@end
