
@interface PXFeedSubscriptionSectionInfo : PXFeedAssetsSectionInfo

- (bool)isMine;
- (long long)sectionType;
- (void)updateFromCloudFeedEntry;

@end
