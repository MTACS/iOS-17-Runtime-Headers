
@interface CNUIUserActionListDataSource : NSObject <CNUIUserActionListDataSource> {
    unsigned long long  _cacheCapacity;
    double  _cacheEntryExpirationAge;
    double  _cacheEntryRefreshAge;
    CNUIUserActionDisambiguationModeler * _modeler;
    CNUIUserActionListModelCache * _models;
    <CNScheduler> * _resolutionScheduler;
    <CNSchedulerProvider> * _schedulerProvider;
    bool  _tracksChanges;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CNUIUserActionDisambiguationModeler *modeler;
@property (nonatomic, retain) CNUIUserActionListModelCache *models;
@property (nonatomic, readonly) <CNScheduler> *resolutionScheduler;
@property (nonatomic, readonly) <CNSchedulerProvider> *schedulerProvider;
@property (readonly) Class superclass;
@property (nonatomic) bool tracksChanges;

+ (id)allActionTypes;
+ (id)allSupportedActionTypes;
+ (id)allSupportedActionTypesWithCapabilities:(id)arg1;
+ (id)descriptorForRequiredKeys;
+ (id)displayNameForButtonForActionType:(id)arg1;
+ (id)displayNameForDisambiguationForActionType:(id)arg1;
+ (bool)isSupportedActionType:(id)arg1;
+ (id)makeCacheWithCapacity:(unsigned long long)arg1 expirationAge:(double)arg2 timeProvider:(id)arg3;
+ (id)os_log;

- (void).cxx_destruct;
- (id)actionTypesForConsumer:(id)arg1;
- (id)actionTypesToUpdateForSelectedItem:(id)arg1;
- (id)consumer:(id)arg1 actionModelsForContact:(id)arg2 actionType:(id)arg3;
- (id)consumer:(id)arg1 actionModelsForContact:(id)arg2 actionType:(id)arg3 handler:(id /* block */)arg4;
- (id)consumer:(id)arg1 currentActionModelForContact:(id)arg2 actionType:(id)arg3;
- (void)consumer:(id)arg1 didSelectItem:(id)arg2 forContact:(id)arg3 actionType:(id)arg4;
- (id)consumer:(id)arg1 imageForActionType:(id)arg2;
- (id)consumer:(id)arg1 localizedButtonDisplayNameForActionType:(id)arg2;
- (id)consumer:(id)arg1 localizedDisplayNameForActionType:(id)arg2;
- (id)consumer:(id)arg1 localizedDisplayNameForButtonWithDefaultAction:(id)arg2 actionType:(id)arg3;
- (void)dealloc;
- (id)initWithDiscoveringEnvironment:(id)arg1;
- (id)initWithSchedulerProvider:(id)arg1;
- (id)initWithSchedulerProvider:(id)arg1 idsAvailabilityProvider:(id)arg2;
- (void)makeCacheAndTransferContents;
- (id)makeCacheWithCurrentSettings;
- (id)makeModelObservableForContact:(id)arg1 actionType:(id)arg2;
- (id)modeler;
- (id)models;
- (id)modelsForContact:(id)arg1 actionType:(id)arg2;
- (void)performFirstResolutionForEntry:(id)arg1 contact:(id)arg2 actionType:(id)arg3;
- (void)refreshEntry:(id)arg1 contact:(id)arg2 actionType:(id)arg3;
- (id)resolutionScheduler;
- (id)schedulerProvider;
- (void)setCacheCapacity:(unsigned long long)arg1;
- (void)setCacheEntryExpirationAge:(double)arg1;
- (void)setCacheEntryRefreshAge:(double)arg1;
- (void)setContactStore:(id)arg1;
- (void)setModeler:(id)arg1;
- (void)setModels:(id)arg1;
- (void)setTracksChanges:(bool)arg1;
- (bool)shouldUseLabelForButtonWithDefaultAction:(id)arg1;
- (id)thirdPartyActionsForContact:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3;
- (id)thirdPartyActionsForContactProperty:(id)arg1;
- (id)thirdPartyTargetsForActionTypes:(id)arg1;
- (bool)tracksChanges;

@end
