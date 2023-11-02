
@protocol PXNavigationListItem <NSObject, NSCopying>

@required

- (NSString *)accessoryGlyphImageName;
- (NSString *)accessoryTitle;
- (NSString *)badgeString;
- (PHCollection *)collection;
- (NSString *)glyphImageName;
- (NSString *)identifier;
- (long long)indentationLevel;
- (bool)isDeletable;
- (bool)isDraggable;
- (bool)isExpandable;
- (bool)isExpanded;
- (bool)isGroup;
- (bool)isRemovable;
- (bool)isRenamable;
- (bool)isReorderable;
- (unsigned long long)lockState;
- (id)representedObject;
- (void)setBadgeString:(NSString *)arg1;
- (long long)style;
- (NSString *)title;
- (NSString *)visualDescription;

@optional

- (NSString *)cpAnalyticsEventName;
- (NSObject<PXAnonymousViewController> *)viewControllerForCollectionWithGridPresentation:(id <PXGridPresentation>)arg1 existingAssetsFetchResult:(id <PXDisplayAssetFetchResult>)arg2;

@end
