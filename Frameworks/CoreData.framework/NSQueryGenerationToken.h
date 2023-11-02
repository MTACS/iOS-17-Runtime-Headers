
@interface NSQueryGenerationToken : NSObject <NSCopying, NSSecureCoding>

+ (id)currentQueryGenerationToken;
+ (void)initialize;
+ (id)nostoresQueryGenerationToken;
+ (bool)supportsSecureCoding;
+ (id)unpinnedQueryGenerationToken;

- (bool)_isEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
