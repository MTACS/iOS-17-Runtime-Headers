
@interface SASButtonIdentifierTransport : NSObject <NSCopying, NSSecureCoding> {
    NSString * _identifier;
}

@property (nonatomic, retain) NSString *identifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_identifierMatchesSiriButtonIdentifier:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithSiriButtonIdentifier:(long long)arg1;
- (id)initWithString:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (long long)siriButtonIdentifier;

@end
