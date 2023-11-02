
@interface SSCachedViewResultBuilder : SSResultBuilder

+ (bool)isCoreSpotlightResult;
+ (bool)supportsResult:(id)arg1;

- (id)buildInlineCardSections;
- (bool)supportsClearingBackendData;

@end
