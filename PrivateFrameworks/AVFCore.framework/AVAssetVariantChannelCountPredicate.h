
@interface AVAssetVariantChannelCountPredicate : AVAssetVariantRenditionSpecificAttributePredicate

+ (bool)supportsSecureCoding;

- (id)initWithChannelCount:(long long)arg1 mediaSelectionOption:(id)arg2 operatorType:(unsigned long long)arg3;
- (id)initWithCoder:(id)arg1;
- (id)valueForAlternate:(id)arg1;

@end
