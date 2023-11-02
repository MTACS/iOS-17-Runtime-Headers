
@interface SBHDefaultIconListLayoutProvider : NSObject <BSDescriptionProviding, SBIconListLayoutProvider> {
    NSMutableDictionary * _cachedListLayouts;
    unsigned long long  _layoutOptions;
    unsigned long long  _screenType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long layoutOptions;
@property (nonatomic, readonly) unsigned long long screenType;
@property (readonly) Class superclass;

+ (unsigned long long)currentDeviceScreenType;
+ (unsigned long long)defaultLayoutOptions;
+ (unsigned long long)extendedFloatingDockCapacityIconCount;
+ (id)frameworkFallbackInstance;

- (void).cxx_destruct;
- (void)configureAppLibraryConfiguration:(id)arg1 forScreenType:(unsigned long long)arg2 layoutOptions:(unsigned long long)arg3;
- (void)configureFloatingDockConfiguration:(id)arg1 forScreenType:(unsigned long long)arg2 layoutOptions:(unsigned long long)arg3;
- (void)configureFloatyFolderConfiguration:(id)arg1 forScreenType:(unsigned long long)arg2 layoutOptions:(unsigned long long)arg3;
- (void)configureFolderIconConfiguration:(id)arg1 forScreenType:(unsigned long long)arg2 numberOfRows:(unsigned long long)arg3 layoutOptions:(unsigned long long)arg4;
- (void)configureGridSizeClassSizes:(struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x_1_1_1; unsigned short x_1_1_2; } x1; struct SBHIconGridSize { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; struct SBHIconGridSize { unsigned short x_3_1_1; unsigned short x_3_1_2; } x3; struct SBHIconGridSize { unsigned short x_4_1_1; unsigned short x_4_1_2; } x4; struct SBHIconGridSize { unsigned short x_5_1_1; unsigned short x_5_1_2; } x5; }*)arg1 forScreenType:(unsigned long long)arg2 numberOfColumns:(unsigned long long)arg3 iconLocation:(id)arg4 layoutOptions:(unsigned long long)arg5;
- (void)configureIconAccessoryConfiguration:(id)arg1 forScreenType:(unsigned long long)arg2 layoutOptions:(unsigned long long)arg3;
- (void)configureLabelConfigurations:(id)arg1 forScreenType:(unsigned long long)arg2;
- (void)configureRootFolderConfiguration:(id)arg1 forScreenType:(unsigned long long)arg2 layoutOptions:(unsigned long long)arg3;
- (void)configureSidebarConfiguration:(id)arg1 forScreenType:(unsigned long long)arg2 layoutOptions:(unsigned long long)arg3;
- (void)configureSupportedIconGridSizeClasses:(unsigned long long*)arg1 forScreenType:(unsigned long long)arg2 iconLocation:(id)arg3 layoutOptions:(unsigned long long)arg4;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })homeScreenSearchOverlayInsetsForScreenType:(unsigned long long)arg1 layoutOptions:(unsigned long long)arg2 forAppLibrary:(bool)arg3;
- (id)init;
- (id)initWithLayoutOptions:(unsigned long long)arg1;
- (id)initWithScreenType:(unsigned long long)arg1;
- (id)initWithScreenType:(unsigned long long)arg1 layoutOptions:(unsigned long long)arg2;
- (id)layoutForIconLocation:(id)arg1;
- (unsigned long long)layoutOptions;
- (unsigned long long)layoutOptionsForIconLocation:(id)arg1;
- (id)makeLayoutForIconLocation:(id)arg1;
- (unsigned long long)screenType;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
