
@interface PXFeedAlbumCreatedSectionInfo : PXFeedSectionInfo

- (bool)isMine;
- (long long)sectionType;
- (long long)typeForItemAtIndex:(long long)arg1;
- (void)updateFromCloudFeedEntry;

@end
