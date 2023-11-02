
@interface WBSSavedAccountContext : NSObject <NSCopying, NSSecureCoding> {
    NSString * _nameForPersistence;
}

@property (nonatomic, readonly) NSString *nameForPersistence;

+ (id)defaultContext;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithSafariProfileIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)nameForPersistence;

@end
