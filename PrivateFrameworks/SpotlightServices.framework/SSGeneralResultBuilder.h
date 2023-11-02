
@interface SSGeneralResultBuilder : SSResultBuilder

+ (bool)isCoreSpotlightResult;
+ (bool)supportsResult:(id)arg1;

- (id)buildDescriptions;
- (id)buildDetailedRowCardSection;
- (id)buildFootnote;
- (id)buildSecondaryTitle;
- (id)buildSecondaryTitleImage;

@end
