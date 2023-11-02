
@interface ASCEmptyOfferMetadata : ASCOfferMetadata

+ (bool)supportsSecureCoding;

- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;

@end
