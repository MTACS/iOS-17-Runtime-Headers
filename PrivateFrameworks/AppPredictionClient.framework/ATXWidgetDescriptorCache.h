
@interface ATXWidgetDescriptorCache : NSObject <CHSWidgetDescriptorProviderObserver> {
    NSSet * _allDescriptors;
    NSString * _cachePath;
    _PASSimpleCoalescingTimer * _coalescedDescriptorUpdateOperation;
    unsigned long long  _coalescedDescriptorUpdateOptions;
    NSDictionary * _containerBundleIdAndKindToHomeScreenDescriptorDictionary;
    NSDictionary * _intentToHomeScreenDescriptorDictionary;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSString * _legacyCachePath;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSHashTable * _observers;
    CHSWidgetDescriptorProvider * _provider;
}

@property (readonly, copy) NSSet *allWidgetDescriptorsAllowedOnLockscreen;
@property (readonly, copy) NSSet *complicationWidgetDescriptors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSSet *homeScreenDescriptors;
@property (readonly, copy) NSSet *inlineComplicationWidgetDescriptors;
@property (readonly, copy) NSSet *landscapeModularComplicationWidgetDescriptors;
@property (readonly, copy) NSSet *modularComplicationWidgetDescriptors;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_fetchAccessoryWidgetDescriptorMetadataOnInternalQueueWithError:(id*)arg1;
- (id)_fetchHomeScreenWidgetDescriptorMetadataOnInternalQueueWithError:(id*)arg1;
- (id)_mergeNewDescriptorsWithCachedMetadataOnInternalQueue:(id)arg1 descriptors:(id)arg2;
- (id)_queue_allVisibleDescriptors;
- (void)_queue_descriptorsDidChangeForDescriptorProvider:(id)arg1;
- (id)_queue_fetchAllDescriptorMetadataWithError:(id*)arg1;
- (id)_queue_fetchAllLegacyDescriptorMetadataWithError:(id*)arg1;
- (id)_queue_homeScreenWidgetDescriptors;
- (bool)_queue_writeAllDescriptorMetadata:(id)arg1 error:(id*)arg2;
- (void)_scheduleCoalescedDescriptorUpdateOperation;
- (id)_updateAllDescriptorMetadataOnInternalQueue;
- (void)_updateDescriptorMappings;
- (id)allWidgetDescriptorsAllowedOnLockscreen;
- (id)complicationWidgetDescriptors;
- (void)dealloc;
- (void)descriptorsDidChangeForDescriptorProvider:(id)arg1;
- (id)fetchAccessoryWidgetDescriptorMetadataWithError:(id*)arg1;
- (id)fetchHomeScreenWidgetDescriptorMetadataWithError:(id*)arg1;
- (id)homeScreenDescriptorForContainerBundleId:(id)arg1 widgetKind:(id)arg2;
- (id)homeScreenDescriptorForExtensionBundleId:(id)arg1 kind:(id)arg2;
- (id)homeScreenDescriptorForIntent:(id)arg1;
- (id)homeScreenDescriptorForWidget:(id)arg1;
- (id)homeScreenDescriptors;
- (id)init;
- (id)initWithCachePath:(id)arg1 legacyCachePath:(id)arg2;
- (id)initWithProvider:(id)arg1 cachePath:(id)arg2 legacyCachePath:(id)arg3;
- (id)inlineComplicationWidgetDescriptors;
- (id)landscapeModularComplicationWidgetDescriptors;
- (id)modularComplicationWidgetDescriptors;
- (void)prepareForTermination;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;

@end
