
@protocol PXStoryMutableMemoryFeedDataSourceManager <PXMutableSectionedDataSourceManager>

@required

- (bool)isActive;
- (void)setIsActive:(bool)arg1;
- (void)setWantsFavoritesOnly:(bool)arg1;
- (bool)wantsFavoritesOnly;

@end
