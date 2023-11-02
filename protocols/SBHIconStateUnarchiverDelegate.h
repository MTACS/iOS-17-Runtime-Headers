
@protocol SBHIconStateUnarchiverDelegate <NSObject>

@optional

- (unsigned long long)allowedGridSizeClassesForDockForIconStateUnarchiver:(SBHIconStateUnarchiver *)arg1;
- (unsigned long long)allowedGridSizeClassesForTodayListForIconStateUnarchiver:(SBHIconStateUnarchiver *)arg1;
- (struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x_1_1_1; unsigned short x_1_1_2; } x1; struct SBHIconGridSize { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; struct SBHIconGridSize { unsigned short x_3_1_1; unsigned short x_3_1_2; } x3; struct SBHIconGridSize { unsigned short x_4_1_1; unsigned short x_4_1_2; } x4; struct SBHIconGridSize { unsigned short x_5_1_1; unsigned short x_5_1_2; } x5; })gridSizeClassSizesForIconStateUnarchiver:(SBHIconStateUnarchiver *)arg1;
- (unsigned long long)iconStateUnarchiver:(SBHIconStateUnarchiver *)arg1 allowedGridSizeClassesForFolderClass:(Class)arg2;
- (SBWidgetIcon *)iconStateUnarchiver:(SBHIconStateUnarchiver *)arg1 didUnarchiveWidgetIcon:(SBWidgetIcon *)arg2;
- (struct SBHIconGridSize { unsigned short x1; unsigned short x2; })iconStateUnarchiver:(SBHIconStateUnarchiver *)arg1 listGridSizeForFolderClass:(Class)arg2;
- (struct SBHIconGridSize { unsigned short x1; unsigned short x2; })iconStateUnarchiver:(SBHIconStateUnarchiver *)arg1 listWithNonDefaultSizedIconsGridSizeForFolderClass:(Class)arg2;
- (bool)iconStateUnarchiver:(SBHIconStateUnarchiver *)arg1 listsAllowRotatedLayoutForFolderClass:(Class)arg2;
- (long long)iconStateUnarchiver:(SBHIconStateUnarchiver *)arg1 listsFixedIconLocationBehaviorForFolderClass:(Class)arg2;
- (unsigned long long)iconStateUnarchiver:(SBHIconStateUnarchiver *)arg1 listsIconLayoutBehaviorForFolderClass:(Class)arg2;
- (unsigned long long)listRotatedLayoutClusterGridSizeClassForIconStateUnarchiver:(SBHIconStateUnarchiver *)arg1;
- (unsigned long long)maxIconCountForDockForIconStateUnarchiver:(SBHIconStateUnarchiver *)arg1;
- (unsigned long long)maxListCountForFoldersForIconStateUnarchiver:(SBHIconStateUnarchiver *)arg1;

@end
