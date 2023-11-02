
@interface ASCPlaceholderOfferMetadata : ASCOfferMetadata

+ (bool)supportsSecureCoding;

- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPlaceholder;

@end
