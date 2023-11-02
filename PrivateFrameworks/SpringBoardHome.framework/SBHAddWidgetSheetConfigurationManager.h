
@interface SBHAddWidgetSheetConfigurationManager : NSObject {
    unsigned long long  _addWidgetSheetLocation;
    unsigned long long  _addWidgetSheetStyle;
    unsigned long long  _allowedWidgetFamilies;
    bool  _allowsFakeWidgets;
    <SBHAddWidgetSheetConfigurationManagerDelegate> * _configurationManagerDelegate;
    NSArray * _editingSuggestedWidgetItems;
    SBHomeScreenDefaults * _homeScreenDefaults;
    SBHIconModel * _iconModel;
    <SBIconListLayoutProvider> * _listLayoutProvider;
    unsigned long long  _minimumRequiredSDKVersion;
    NSArray * _stackConfigurationSuggestedWidgetItems;
    <SBHWidgetDragHandling> * _widgetDragHandlerDelegate;
    CHSWidgetExtensionProvider * _widgetExtensionProvider;
}

@property (nonatomic) unsigned long long addWidgetSheetLocation;
@property (nonatomic) unsigned long long addWidgetSheetStyle;
@property (nonatomic) unsigned long long allowedWidgetFamilies;
@property (nonatomic) bool allowsFakeWidgets;
@property (nonatomic) <SBHAddWidgetSheetConfigurationManagerDelegate> *configurationManagerDelegate;
@property (nonatomic, retain) NSArray *editingSuggestedWidgetItems;
@property (nonatomic) SBHIconModel *iconModel;
@property (nonatomic) <SBIconListLayoutProvider> *listLayoutProvider;
@property (nonatomic) unsigned long long minimumRequiredSDKVersion;
@property (nonatomic, retain) NSArray *stackConfigurationSuggestedWidgetItems;
@property (nonatomic) <SBHWidgetDragHandling> *widgetDragHandlerDelegate;
@property (nonatomic, readonly) CHSWidgetExtensionProvider *widgetExtensionProvider;

+ (unsigned long long)_galleryVariantForAddWidgetSheetLocation:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_addBatteriesSpecialAvocadosToApplicationWidgetCollections:(id)arg1;
- (void)_addFilesSpecialAvocadosToApplicationWidgetCollections:(id)arg1;
- (void)_addShortcutsSpecialAvocadoToApplicationWidgetCollections:(id)arg1;
- (void)_addSiriSuggestionsSpecialAvocadosToApplicationWidgetCollections:(id)arg1;
- (unsigned long long)_defaultEditingSuggestedWidgetItemsFamilyMask;
- (void)_fetchGalleryContentForGridSize:(unsigned long long)arg1 withFamilyMask:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)_insertSmartStackSpecialAvocadosAtTheTopOfApplicationWidgetCollections:(id)arg1;
- (bool)_isDescriptorAllowed:(id)arg1;
- (bool)_isDescriptorSupported:(id)arg1;
- (bool)_isDescriptorUpdatedForSDKRequirements:(id)arg1;
- (bool)_isDescriptorVisibleByDefault:(id)arg1;
- (bool)_isVisibilityWidgetDefined:(long long)arg1;
- (bool)_shouldAddSpecialAvocadoOfType:(unsigned long long)arg1;
- (unsigned long long)_stackConfigurationGridSize;
- (id)_widgetIconForDescriptor:(id)arg1 sizeClass:(long long)arg2;
- (id)_widgetIconForDescriptors:(id)arg1 sizeClass:(long long)arg2;
- (unsigned long long)addWidgetSheetLocation;
- (unsigned long long)addWidgetSheetStyle;
- (unsigned long long)allowedWidgetFamilies;
- (bool)allowsFakeWidgets;
- (id)applicationWidgetCollectionsForEditingViewController:(id)arg1 withAllowedSizeClasses:(unsigned long long*)arg2 allowingNonStackableItems:(bool)arg3;
- (id)configurationManagerDelegate;
- (id)editingSuggestedWidgetItems;
- (void)fetchGalleryContentForHomeScreenEditingWithGridSize:(unsigned long long)arg1 addWidgetSheetViewController:(id)arg2;
- (void)fetchGalleryContentForStackConfigurationViewController:(id)arg1 addWidgetSheetViewController:(id)arg2;
- (id)homeScreenDefaults;
- (id)iconModel;
- (id)initWithWidgetExtensionProvider:(id)arg1;
- (id)listLayoutProvider;
- (unsigned long long)minimumRequiredSDKVersion;
- (void)setAddWidgetSheetLocation:(unsigned long long)arg1;
- (void)setAddWidgetSheetStyle:(unsigned long long)arg1;
- (void)setAllowedWidgetFamilies:(unsigned long long)arg1;
- (void)setAllowsFakeWidgets:(bool)arg1;
- (void)setConfigurationManagerDelegate:(id)arg1;
- (void)setEditingSuggestedWidgetItems:(id)arg1;
- (void)setIconModel:(id)arg1;
- (void)setListLayoutProvider:(id)arg1;
- (void)setMinimumRequiredSDKVersion:(unsigned long long)arg1;
- (void)setStackConfigurationSuggestedWidgetItems:(id)arg1;
- (void)setWidgetDragHandlerDelegate:(id)arg1;
- (id)stackConfigurationSuggestedWidgetItems;
- (void)updatePresentedWidgetEditingViewController:(id)arg1;
- (id)vendorNameForAppWithBundleIdentifier:(id)arg1;
- (id)widgetDragHandlerDelegate;
- (id)widgetExtensionProvider;

@end
