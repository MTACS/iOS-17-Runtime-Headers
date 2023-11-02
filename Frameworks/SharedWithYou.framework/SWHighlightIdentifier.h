
@interface SWHighlightIdentifier : NSObject <NSCopying, NSSecureCoding> {
    NSString * _stringIdentifier;
}

@property (nonatomic, copy) NSString *stringIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithStringIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setStringIdentifier:(id)arg1;
- (id)stringIdentifier;

@end
