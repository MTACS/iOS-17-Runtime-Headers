
@interface SiriPresentationIdentifierTransport : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _identifier;
}

@property (nonatomic, retain) NSNumber *identifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithSiriPresentationIdentifier:(long long)arg1;
- (void)setIdentifier:(id)arg1;
- (long long)siriPresentationIdentifier;

@end
