
@interface WFType : NSObject <NSCopying, NSSecureCoding>

@property (nonatomic, readonly, copy) NSString *string;
@property (nonatomic, readonly) NSString *typeDescription;

+ (bool)supportsSecureCoding;

- (bool)conformsToClass:(Class)arg1;
- (bool)conformsToString:(id)arg1;
- (bool)conformsToType:(id)arg1;
- (bool)conformsToTypes:(id)arg1;
- (bool)conformsToUTType:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToClass:(Class)arg1;
- (bool)isEqualToType:(id)arg1;
- (bool)isEqualToUTType:(id)arg1;
- (id)string;
- (id)typeDescription;

@end
