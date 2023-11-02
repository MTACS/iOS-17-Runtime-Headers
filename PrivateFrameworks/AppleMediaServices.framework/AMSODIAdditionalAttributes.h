
@interface AMSODIAdditionalAttributes : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _attributes;
}

@property (nonatomic, copy) NSDictionary *attributes;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAttributes:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAttributes:(id)arg1;

@end
