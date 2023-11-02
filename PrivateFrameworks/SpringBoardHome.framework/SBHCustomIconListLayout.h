
@interface SBHCustomIconListLayout : NSObject <SBIconListLayout> {
    <SBIconListLayout> * _baseListLayout;
    NSMapTable * _overriddenSelectors;
}

@property (nonatomic, readonly, copy) SBHAppLibraryVisualConfiguration *appLibraryVisualConfiguration;
@property (nonatomic, readonly) <SBIconListLayout> *baseListLayout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) SBHFloatingDockVisualConfiguration *floatingDockVisualConfiguration;
@property (nonatomic, readonly, copy) SBHFloatyFolderVisualConfiguration *floatyFolderVisualConfiguration;
@property (nonatomic, readonly, copy) SBHFolderIconVisualConfiguration *folderIconVisualConfiguration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) SBHIconAccessoryVisualConfiguration *iconAccessoryVisualConfiguration;
@property (nonatomic, readonly) struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x_1_1_1; unsigned short x_1_1_2; } x1; struct SBHIconGridSize { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; struct SBHIconGridSize { unsigned short x_3_1_1; unsigned short x_3_1_2; } x3; struct SBHIconGridSize { unsigned short x_4_1_1; unsigned short x_4_1_2; } x4; struct SBHIconGridSize { unsigned short x_5_1_1; unsigned short x_5_1_2; } x5; } iconGridSizeClassSizes;
@property (nonatomic, readonly) struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; } iconImageInfo;
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
- (id)baseListLayout;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)init;
- (id)initWithBaseListLayout:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })layoutInsetsForOrientation:(long long)arg1;
- (unsigned long long)numberOfColumnsForOrientation:(long long)arg1;
- (unsigned long long)numberOfRowsForOrientation:(long long)arg1;
- (void)removeListLayoutForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setListLayout:(id)arg1 forSelector:(SEL)arg2;

@end
