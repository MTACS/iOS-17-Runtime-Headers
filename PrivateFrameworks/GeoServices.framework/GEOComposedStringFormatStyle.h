
@interface GEOComposedStringFormatStyle : NSObject <NSCopying, NSSecureCoding> {
    NSString * _token;
    int  _type;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
