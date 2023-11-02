
@interface GEOClientRequestInfo : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _requests;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
