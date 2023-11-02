
@interface SPBeaconRoleCategory : NSObject <NSCopying, NSSecureCoding> {
    NSString * _category;
    long long  _categoryId;
    NSArray * _roles;
}

@property (nonatomic, copy) NSString *category;
@property (nonatomic) long long categoryId;
@property (nonatomic, copy) NSArray *roles;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)category;
- (long long)categoryId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCategoryId:(long long)arg1 category:(id)arg2 roles:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)roles;
- (void)setCategory:(id)arg1;
- (void)setCategoryId:(long long)arg1;
- (void)setRoles:(id)arg1;

@end
