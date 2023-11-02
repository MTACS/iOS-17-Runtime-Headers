
@interface HDObserverQueryServer : HDQueryServer <HDQuantitySeriesObserver> {
    NSNumber * _anchor;
    bool  _deliverOnUnlock;
    bool  _observeUnfrozenSeries;
    NSArray * _queryDescriptors;
    NSDictionary * _sampleTypeToFilterMap;
    NSSet * _updatedSampleTypes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)queryClass;
+ (id)requiredEntitlements;
+ (bool)supportsAnchorBasedAuthorization;

- (void).cxx_destruct;
- (void)_queue_start;
- (void)_queue_stop;
- (bool)_shouldExecuteWhenProtectedDataIsUnavailable;
- (bool)_shouldListenForUpdates;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)objectTypes;
- (void)profile:(id)arg1 didDiscardSeriesOfType:(id)arg2;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (id /* block */)transactionalQuantityInsertHandlerForProfile:(id)arg1 journaled:(bool)arg2 count:(long long)arg3;

@end
