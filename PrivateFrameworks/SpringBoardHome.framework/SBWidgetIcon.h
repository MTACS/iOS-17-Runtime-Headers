
@interface SBWidgetIcon : SBLeafIcon {
    bool  _allowsExternalSuggestions;
    bool  _allowsSuggestions;
    <SBLeafIconDataSource> * _lastUserSelectedDataSource;
    unsigned long long  _stackChangeReason;
}

@property (nonatomic, retain) SBHWidget *activeWidget;
@property (nonatomic) bool allowsExternalSuggestions;
@property (nonatomic) bool allowsSuggestions;
@property (nonatomic, readonly) <SBLeafIconDataSource> *firstSuggestedIconDataSource;
@property (nonatomic, readonly) SBHWidget *firstSuggestedWidget;
@property (nonatomic, readonly) unsigned long long iconDataSourcesExcludingSuggestionsCount;
@property (nonatomic, retain) <SBLeafIconDataSource> *lastUserSelectedDataSource;
@property (nonatomic) unsigned long long stackChangeReason;
@property (nonatomic, readonly, copy) NSArray *widgets;

- (void).cxx_destruct;
- (id)_fallbackBestDataSource;
- (bool)_hasDataSourceThatIgnoresAllOtherDataSources;
- (void)_setPropertiesFromIcon:(id)arg1;
- (id)activeWidget;
- (void)addDataSourcesFromWidgetIcons:(id)arg1;
- (void)addFirstSuggestedWidget;
- (bool)allowsExternalSuggestions;
- (bool)allowsSuggestions;
- (bool)canBeAddedToMultiItemDrag;
- (bool)canBeReceivedByIcon;
- (bool)canGenerateIconsInBackground;
- (bool)canReceiveGrabbedIcon;
- (id)copyWithSuggestionSource:(long long)arg1;
- (id)copyWithUniqueLeafIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)didAddIconDataSource:(id)arg1;
- (void)didRemoveIconDataSource:(id)arg1;
- (id)firstSuggestedIconDataSource;
- (id)firstSuggestedWidget;
- (id)firstWidgetPassingTest:(id /* block */)arg1;
- (unsigned long long)iconDataSourcesExcludingSuggestionsCount;
- (id)initWithCHSWidgetDescriptor:(id)arg1;
- (id)initWithCHSWidgetDescriptors:(id)arg1;
- (id)initWithCHSWidgetDescriptors:(id)arg1 suggestionSource:(long long)arg2;
- (id)initWithLeafIdentifier:(id)arg1 applicationBundleID:(id)arg2;
- (id)initWithWidget:(id)arg1;
- (id)initWithWidgetExtensionIdentifiers:(id)arg1 widgetKinds:(id)arg2;
- (id)initWithWidgetExtensionIdentifiers:(id)arg1 widgetKinds:(id)arg2 widgetContainerBundleIdentifiers:(id)arg3;
- (id)initWithWidgetExtensionIdentifiers:(id)arg1 widgetKinds:(id)arg2 widgetContainerBundleIdentifiers:(id)arg3 suggestionSource:(long long)arg4;
- (id)initWithWidgets:(id)arg1;
- (bool)isWidgetIcon;
- (bool)isWidgetStackIcon;
- (id)lastUserSelectedDataSource;
- (bool)matchesWidgetIcon:(id)arg1;
- (void)removeFirstSuggestedIconDataSource;
- (void)setActiveWidget:(id)arg1;
- (void)setAllowsExternalSuggestions:(bool)arg1;
- (void)setAllowsSuggestions:(bool)arg1;
- (void)setLastUserSelectedDataSource:(id)arg1;
- (void)setStackChangeReason:(unsigned long long)arg1;
- (unsigned long long)stackChangeReason;
- (unsigned long long)supportedGridSizeClasses;
- (bool)supportsConfiguration;
- (bool)supportsStackConfiguration;
- (void)updateLabel;
- (id)widgets;

@end
