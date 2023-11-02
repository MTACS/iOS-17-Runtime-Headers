
@interface SBIconListGridLayout : NSObject <BSDescriptionProviding, SBIconListLayout> {
    UIFont * _accessoryBoldFont;
    UIFont * _accessoryFont;
    NSMutableDictionary * _labelFonts;
    SBIconListGridLayoutConfiguration * _layoutConfiguration;
}

@property (nonatomic, readonly, copy) SBHAppLibraryVisualConfiguration *appLibraryVisualConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) SBHFloatingDockVisualConfiguration *floatingDockVisualConfiguration;
@property (nonatomic, readonly, copy) SBHFloatyFolderVisualConfiguration *floatyFolderVisualConfiguration;
@property (nonatomic, readonly, copy) SBHFolderIconVisualConfiguration *folderIconVisualConfiguration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) SBHIconAccessoryVisualConfiguration *iconAccessoryVisualConfiguration;
@property (nonatomic, readonly) struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x_1_1_1; unsigned short x_1_1_2; } x1; struct SBHIconGridSize { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; struct SBHIconGridSize { unsigned short x_3_1_1; unsigned short x_3_1_2; } x3; struct SBHIconGridSize { unsigned short x_4_1_1; unsigned short x_4_1_2; } x4; struct SBHIconGridSize { unsigned short x_5_1_1; unsigned short x_5_1_2; } x5; } iconGridSizeClassSizes;
@property (nonatomic, readonly) struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; } iconImageInfo;
@property (nonatomic, readonly, copy) SBIconListGridLayoutConfiguration *layoutConfiguration;
@property (nonatomic, readonly, copy) SBHRootFolderVisualConfiguration *rootFolderVisualConfiguration;
@property (nonatomic, readonly) unsigned long long rotatedLayoutClusterGridSizeClass;
@property (nonatomic, readonly, copy) SBHSidebarVisualConfiguration *sidebarVisualConfiguration;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long supportedIconGridSizeClasses;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } widgetContentMargins;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } widgetContentMarginsWithBackgroundRemoved;
@property (nonatomic, readonly) double widgetScaleFactor;
@property (nonatomic, readonly) bool widgetsSupportDynamicText;

- (void).cxx_destruct;
- (id)accessoryBoldFont;
- (id)accessoryFont;
- (id)accessoryFontForContentSizeCategory:(id)arg1 options:(unsigned long long)arg2;
- (id)appLibraryVisualConfiguration;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (double)editingAnimationStrengthForGridSizeClass:(unsigned long long)arg1;
- (id)floatingDockVisualConfiguration;
- (id)floatyFolderVisualConfiguration;
- (id)folderIconVisualConfiguration;
- (unsigned long long)hash;
- (id)iconAccessoryVisualConfiguration;
- (struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x_1_1_1; unsigned short x_1_1_2; } x1; struct SBHIconGridSize { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; struct SBHIconGridSize { unsigned short x_3_1_1; unsigned short x_3_1_2; } x3; struct SBHIconGridSize { unsigned short x_4_1_1; unsigned short x_4_1_2; } x4; struct SBHIconGridSize { unsigned short x_5_1_1; unsigned short x_5_1_2; } x5; })iconGridSizeClassSizes;
- (struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })iconImageInfo;
- (struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })iconImageInfoForGridSizeClass:(unsigned long long)arg1;
- (id)init;
- (id)initWithLayoutConfiguration:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)labelFontForContentSizeCategory:(id)arg1 options:(unsigned long long)arg2;
- (id)labelVisualConfigurationForContentSizeCategory:(id)arg1 options:(unsigned long long)arg2;
- (id)layoutConfiguration;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })layoutInsetsForOrientation:(long long)arg1;
- (void)noteIcons:(id)arg1 didDropAtCoordinate:(struct SBIconCoordinate { long long x1; long long x2; })arg2 inList:(id)arg3;
- (unsigned long long)numberOfColumnsForOrientation:(long long)arg1;
- (unsigned long long)numberOfRowsForOrientation:(long long)arg1;
- (id)rootFolderVisualConfiguration;
- (unsigned long long)rotatedLayoutClusterGridSizeClass;
- (id)sidebarVisualConfiguration;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (unsigned long long)supportedIconGridSizeClasses;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })widgetContentMargins;
- (bool)widgetsSupportDynamicText;

@end
