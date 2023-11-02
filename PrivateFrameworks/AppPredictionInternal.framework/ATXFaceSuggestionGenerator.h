
@interface ATXFaceSuggestionGenerator : NSObject <ATXPosterConfigurationCacheObserver, ATXPosterDescriptorCacheObserver> {
    <ATXFaceGalleryLayoutGeneratorComplicationDescriptorProviding> * _complicationDescriptorProvider;
    <ATXFaceGalleryLayoutGeneratorComplicationProviding> * _complicationProvider;
    ATXPosterConfigurationCache * _configurationCache;
    <ATXFaceSuggestionGeneratorDelegate> * _delegate;
    ATXPosterDescriptorCache * _descriptorCache;
    _PASQueueLock * _lock;
    NSObject<OS_dispatch_queue> * _outputQueue;
    <ATXFaceSuggestionParameters> * _parameters;
    _PASSimpleCoalescingTimer * _regenerationCoalescingTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ATXFaceSuggestionGeneratorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) ATXFaceGalleryConfiguration *faceGalleryConfiguration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool shouldUseDayZeroCuration;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createLayoutGeneratorWithDayZero:(bool)arg1 locale:(id)arg2;
- (void)_generateFaceGalleryConfigurationNotifyingWithGuardedData:(id)arg1;
- (void)configurationCacheDidUpdateWithNewConfigurations:(id)arg1 oldConfigurations:(id)arg2;
- (id)delegate;
- (void)descriptorCacheDidUpdateWithDescriptors:(id)arg1;
- (id)faceGalleryConfiguration;
- (id)initWithDescriptorCache:(id)arg1 configurationCache:(id)arg2 complicationProvider:(id)arg3 complicationDescriptorProvider:(id)arg4 parameters:(id)arg5;
- (void)regenerateFaceGalleryConfigurationCoalescedWithReason:(id)arg1;
- (void)regenerateFaceGalleryConfigurationImmediatelyWithReason:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldUseDayZeroCuration;

@end
