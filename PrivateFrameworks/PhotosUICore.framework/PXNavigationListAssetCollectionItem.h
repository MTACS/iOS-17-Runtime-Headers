
@interface PXNavigationListAssetCollectionItem : PXNavigationListDisplayAssetCollectionItem

@property (nonatomic, readonly) PHAssetCollection *collection;

- (id)accessoryGlyphImageName;
- (id)accessoryTitle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cpAnalyticsEventName;
- (id)initWithAssetCollection:(id)arg1 itemCount:(long long)arg2;
- (bool)isDraggable;
- (id)viewControllerForCollectionWithGridPresentation:(id)arg1 existingAssetsFetchResult:(id)arg2;

@end
