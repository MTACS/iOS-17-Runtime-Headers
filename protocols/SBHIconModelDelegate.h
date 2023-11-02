
@protocol SBHIconModelDelegate <NSObject>

@required

- (struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x_1_1_1; unsigned short x_1_1_2; } x1; struct SBHIconGridSize { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; struct SBHIconGridSize { unsigned short x_3_1_1; unsigned short x_3_1_2; } x3; struct SBHIconGridSize { unsigned short x_4_1_1; unsigned short x_4_1_2; } x4; struct SBHIconGridSize { unsigned short x_5_1_1; unsigned short x_5_1_2; } x5; })gridSizeClassSizesForIconModel:(SBHIconModel *)arg1;
- (NSIndexPath *)iconModel:(SBHIconModel *)arg1 customInsertionIndexPathForIcon:(SBIcon *)arg2 inRootFolder:(SBRootFolder *)arg3;
- (void)iconModel:(SBHIconModel *)arg1 launchIcon:(SBIcon *)arg2 fromLocation:(NSString *)arg3 context:(id <SBHIconLaunchContext>)arg4;
- (struct SBHIconGridSize { unsigned short x1; unsigned short x2; })iconModel:(SBHIconModel *)arg1 listGridSizeForFolderClass:(Class)arg2;
- (NSString *)iconModel:(SBHIconModel *)arg1 localizedFolderNameForDefaultDisplayName:(NSString *)arg2;
- (unsigned long long)iconModel:(SBHIconModel *)arg1 maxColumnCountForListInRootFolderWithInterfaceOrientation:(long long)arg2;
- (unsigned long long)iconModel:(SBHIconModel *)arg1 maxRowCountForListInRootFolderWithInterfaceOrientation:(long long)arg2;
- (unsigned long long)maxIconCountForDockForIconModel:(SBHIconModel *)arg1;
- (unsigned long long)maxListCountForFoldersForIconModel:(SBHIconModel *)arg1;

@optional

- (unsigned long long)allowedGridSizeClassesForDockForIconModel:(SBHIconModel *)arg1;
- (unsigned long long)allowedGridSizeClassesForTodayListForIconModel:(SBHIconModel *)arg1;
- (bool)canSaveIconState:(SBHIconModel *)arg1;
- (NSDictionary *)defaultIconStateForIconModel:(SBHIconModel *)arg1;
- (void)didDeleteIconState:(SBHIconModel *)arg1;
- (void)didSaveIconState:(SBHIconModel *)arg1;
- (unsigned long long)iconModel:(SBHIconModel *)arg1 allowedGridSizeClassesForFolderClass:(Class)arg2;
- (SBHIconGridPath *)iconModel:(SBHIconModel *)arg1 customInsertionGridPathForIcon:(SBIcon *)arg2 inRootFolder:(SBRootFolder *)arg3;
- (SBHIconRelativePath *)iconModel:(SBHIconModel *)arg1 customInsertionRelativePathForIcon:(SBIcon *)arg2 inRootFolder:(SBRootFolder *)arg3;
- (void)iconModel:(SBHIconModel *)arg1 didAddIcon:(SBIcon *)arg2;
- (Class)iconModel:(SBHIconModel *)arg1 iconClassForApplicationWithBundleIdentifier:(NSString *)arg2 proposedClass:(Class)arg3;
- (struct SBHIconGridSize { unsigned short x1; unsigned short x2; })iconModel:(SBHIconModel *)arg1 listWithNonDefaultSizedIconsGridSizeForFolderClass:(Class)arg2;
- (bool)iconModel:(SBHIconModel *)arg1 listsAllowRotatedLayoutForFolderClass:(Class)arg2;
- (long long)iconModel:(SBHIconModel *)arg1 listsFixedIconLocationBehaviorForFolderClass:(Class)arg2;
- (unsigned long long)iconModel:(SBHIconModel *)arg1 listsIconLayoutBehaviorForFolderClass:(Class)arg2;
- (bool)iconModel:(SBHIconModel *)arg1 shouldAvoidPlacingIconOnFirstPage:(SBLeafIcon *)arg2;
- (bool)iconModel:(SBHIconModel *)arg1 shouldPlaceIconOnIgnoredList:(SBLeafIcon *)arg2;
- (bool)iconModel:(SBHIconModel *)arg1 shouldRemoveIcon:(SBIcon *)arg2;
- (void)iconModel:(SBHIconModel *)arg1 willRemoveIcon:(SBIcon *)arg2;
- (unsigned long long)listRotatedLayoutClusterGridSizeClassForIconModel:(SBHIconModel *)arg1;
- (unsigned long long)maxColumnCountForTodayListForIconModel:(SBHIconModel *)arg1;
- (unsigned long long)maxRowCountForFavoriteTodayListForIconModel:(SBHIconModel *)arg1;
- (void)willUnarchiveIconModel:(SBHIconModel *)arg1 withMetadata:(NSDictionary *)arg2;

@end
