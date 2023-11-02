
@interface CNUICoreFamilyMemberContactsModel : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _items;
}

@property (nonatomic, readonly) NSArray *items;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithItems:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)items;

@end
