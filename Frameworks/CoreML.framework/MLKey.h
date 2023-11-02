
@interface MLKey : NSObject <NSCopying, NSSecureCoding> {
    NSString * _name;
    NSString * _scope;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *scope;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deletingPrefixingScope:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasGlobalScope;
- (bool)hasSameNameAsKey:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyName:(id)arg1;
- (id)initWithKeyName:(id)arg1 scope:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)scope;
- (id)scopedTo:(id)arg1;

@end
