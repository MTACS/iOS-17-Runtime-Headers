
@interface UIActivityItemsConfiguration : NSObject <UIActivityItemsConfigurationReading> {
    NSArray * __excludedInteractions;
    NSArray * _activityItems;
    id /* block */  _applicationActivitiesProvider;
    NSArray * _excludedActivityTypes;
    NSArray * _itemProviders;
    id  _localObject;
    id /* block */  _metadataProvider;
    id /* block */  _perItemMetadataProvider;
    id /* block */  _previewProvider;
    NSArray * _supportedInteractions;
    UIActivityViewController * _vc;
}

@property (nonatomic, readonly, copy) NSArray *_activityItems;
@property (setter=_setExcludedActivityTypes:, nonatomic, copy) NSArray *_excludedActivityTypes;
@property (setter=_setExcludedInteractions:, nonatomic, copy) NSArray *_excludedInteractions;
@property (nonatomic, readonly) bool _hasItemsForActivityItemsConfiguration;
@property (nonatomic, readonly, copy) NSArray *applicationActivitiesForActivityItemsConfiguration;
@property (nonatomic, copy) id /* block */ applicationActivitiesProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *itemProvidersForActivityItemsConfiguration;
@property (nonatomic, retain) id localObject;
@property (nonatomic, copy) id /* block */ metadataProvider;
@property (nonatomic, copy) id /* block */ perItemMetadataProvider;
@property (nonatomic, copy) id /* block */ previewProvider;
@property (setter=pui_setExcludedActivityTypes:, nonatomic, copy) NSArray *pui_excludedActivityTypes;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *supportedInteractions;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_itemsForSystemSharingFromActivityItemsConfiguration:(id)arg1 wrapperBlock:(id /* block */)arg2;
+ (id)activityItemsConfigurationWithItemProviders:(id)arg1;
+ (id)activityItemsConfigurationWithObjects:(id)arg1;

- (void).cxx_destruct;
- (id)_activityItems;
- (void)_commonInit;
- (id)_excludedActivityTypes;
- (id)_excludedInteractions;
- (bool)_hasItemsForActivityItemsConfiguration;
- (id)_initWithActivityItemSources:(id)arg1;
- (id)_initWithActivityItems:(id)arg1 applicationActivities:(id)arg2;
- (void)_setExcludedActivityTypes:(id)arg1;
- (void)_setExcludedInteractions:(id)arg1;
- (id)activityItemsConfigurationMetadataForItemAtIndex:(long long)arg1 key:(id)arg2;
- (id)activityItemsConfigurationMetadataForKey:(id)arg1;
- (id)activityItemsConfigurationPreviewForItemAtIndex:(long long)arg1 intent:(id)arg2 suggestedSize:(struct CGSize { double x1; double x2; })arg3;
- (bool)activityItemsConfigurationSupportsInteraction:(id)arg1;
- (id)applicationActivitiesForActivityItemsConfiguration;
- (id /* block */)applicationActivitiesProvider;
- (id)initWithItemProviders:(id)arg1;
- (id)initWithObjects:(id)arg1;
- (id)itemProviders;
- (id)itemProvidersForActivityItemsConfiguration;
- (id)localObject;
- (id /* block */)metadataProvider;
- (id /* block */)perItemMetadataProvider;
- (id /* block */)previewProvider;
- (void)setApplicationActivitiesProvider:(id /* block */)arg1;
- (void)setLocalObject:(id)arg1;
- (void)setMetadataProvider:(id /* block */)arg1;
- (void)setPerItemMetadataProvider:(id /* block */)arg1;
- (void)setPreviewProvider:(id /* block */)arg1;
- (void)setSupportedInteractions:(id)arg1;
- (id)supportedInteractions;

// Image: /System/Library/PrivateFrameworks/NewsFeed.framework/NewsFeed

- (id)initNAWithActivityItemSources:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI

+ (id)mt_configurationWithActivityItems:(id)arg1;

- (id)pui_excludedActivityTypes;
- (void)pui_setExcludedActivityTypes:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI

- (id)initTSWithActivityItemSources:(id)arg1;
- (void)ts_setExcludedActivityTypes:(id)arg1;

@end
