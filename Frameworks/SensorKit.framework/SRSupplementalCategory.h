
@interface SRSupplementalCategory : NSObject <NSCopying, NSSecureCoding> {
    NSString * _identifier;
}

@property (nonatomic, readonly, copy) NSString *identifier;

+ (id)new;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)sr_dictionaryRepresentation;

@end
