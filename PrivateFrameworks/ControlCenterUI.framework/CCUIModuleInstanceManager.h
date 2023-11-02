
@interface CCUIModuleInstanceManager : NSObject <CCSModuleRepositoryObserver, CCUIContentModuleContextDelegate> {
    <CCUIContentModuleContextDelegate> * _contextDelegate;
    NSSet * _enabledModuleIdentifiers;
    NSMutableDictionary * _moduleInstanceByIdentifier;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _queue;
    CCSModuleRepository * _repository;
    <CCUIControlCenterSystemAgent> * _systemAgent;
}

@property (nonatomic) <CCUIContentModuleContextDelegate> *contextDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSSet *enabledModuleIdentifiers;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *moduleInstances;
@property (readonly) Class superclass;

+ (void)initialize;
+ (void)setupSharedInstanceWithSystemAgent:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_initWithSystemAgent:(id)arg1 repository:(id)arg2;
- (id)_instantiateModuleWithMetadata:(id)arg1;
- (id)_loadBundlesForModuleMetadata:(id)arg1;
- (void)_loadBundlesForModuleMetadata:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_runBlockOnObservers:(id /* block */)arg1;
- (void)_updateModuleInstances;
- (void)addObserver:(id)arg1;
- (void)contentModuleContext:(id)arg1 didUpdateHomeGestureDismissalAllowed:(bool)arg2;
- (void)contentModuleContext:(id)arg1 enqueueStatusUpdate:(id)arg2;
- (id)contentModuleContext:(id)arg1 requestsSensorActivityDataForActiveSensorType:(unsigned long long)arg2;
- (id)contextDelegate;
- (void)dismissControlCenterForContentModuleContext:(id)arg1;
- (void)dismissExpandedViewForContentModuleContext:(id)arg1;
- (id)enabledModuleIdentifiers;
- (bool)loadModuleWithBundleIdentifier:(id)arg1;
- (void)loadableModulesChangedForModuleRepository:(id)arg1;
- (id)moduleInstances;
- (struct CCUIModuleLayoutSize { unsigned long long x1; unsigned long long x2; })moduleLayoutSizeForContentModuleContext:(id)arg1 forOrientation:(long long)arg2;
- (void)removeObserver:(id)arg1;
- (void)requestExpandModuleForContentModuleContext:(id)arg1;
- (void)requestModuleLayoutSizeUpdateForContentModuleContext:(id)arg1;
- (void)setContextDelegate:(id)arg1;
- (void)setEnabledModuleIdentifiers:(id)arg1;

@end
