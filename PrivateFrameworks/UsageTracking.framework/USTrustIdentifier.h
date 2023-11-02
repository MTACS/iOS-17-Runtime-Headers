
@interface USTrustIdentifier : NSObject <NSCopying, NSSecureCoding> {
    NSString * _identifier;
    bool  _trusted;
}

@property (readonly, copy) NSString *identifier;
@property (readonly) bool trusted;

+ (id)identifierWithIdentifier:(id)arg1 trusted:(bool)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_USTrustIdentifierCommonInitWithIdentifier:(id)arg1 trusted:(bool)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 trusted:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)trusted;

@end
