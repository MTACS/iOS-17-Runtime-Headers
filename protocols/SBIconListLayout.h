
@protocol SBIconListLayout <NSObject>

@required

- (struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })iconImageInfo;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })layoutInsetsForOrientation:(long long)arg1;
- (unsigned long long)numberOfColumnsForOrientation:(long long)arg1;
- (unsigned long long)numberOfRowsForOrientation:(long long)arg1;

@optional

- (UIFont *)accessoryFontForContentSizeCategory:(NSString *)arg1 options:(unsigned long long)arg2;
- (SBHAppLibraryVisualConfiguration *)appLibraryVisualConfiguration;
- (double)editingAnimationStrengthForGridSizeClass:(unsigned long long)arg1;
- (SBHFloatingDockVisualConfiguration *)floatingDockVisualConfiguration;
- (SBHFloatyFolderVisualConfiguration *)floatyFolderVisualConfiguration;
- (SBHFolderIconVisualConfiguration *)folderIconVisualConfiguration;
- (SBHIconAccessoryVisualConfiguration *)iconAccessoryVisualConfiguration;
- (struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x_1_1_1; unsigned short x_1_1_2; } x1; struct SBHIconGridSize { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; struct SBHIconGridSize { unsigned short x_3_1_1; unsigned short x_3_1_2; } x3; struct SBHIconGridSize { unsigned short x_4_1_1; unsigned short x_4_1_2; } x4; struct SBHIconGridSize { unsigned short x_5_1_1; unsigned short x_5_1_2; } x5; })iconGridSizeClassSizes;
- (struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })iconImageInfoForGridSizeClass:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })iconSpacingForOrientation:(long long)arg1;
- (UIFont *)labelFontForContentSizeCategory:(NSString *)arg1 options:(unsigned long long)arg2;
- (SBHIconLabelVisualConfiguration *)labelVisualConfigurationForContentSizeCategory:(NSString *)arg1 options:(unsigned long long)arg2;
- (void)noteIcons:(NSArray *)arg1 didDropAtCoordinate:(struct SBIconCoordinate { long long x1; long long x2; })arg2 inList:(SBIconListModel *)arg3;
- (SBHRootFolderVisualConfiguration *)rootFolderVisualConfiguration;
- (unsigned long long)rotatedLayoutClusterGridSizeClass;
- (SBHSidebarVisualConfiguration *)sidebarVisualConfiguration;
- (unsigned long long)supportedIconGridSizeClasses;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })widgetContentMargins;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })widgetContentMarginsWithBackgroundRemoved;
- (double)widgetScaleFactor;
- (bool)widgetsSupportDynamicText;

@end
