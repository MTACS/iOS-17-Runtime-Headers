
@interface HFHomePropertyCacheManager : NSObject <HFAccessoryObserver, HFHomeManagerObserver, HFHomeObserver> {
    NSMutableDictionary * _changedKeys;
    NSCache * _objectCaches;
}

@property (nonatomic, readonly) NSMutableDictionary *changedKeys;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSCache *objectCaches;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_clearCachedValues;
- (void)accessoryDidUpdateServices:(id)arg1;
- (id)cachedValuesForObject:(id)arg1;
- (id)changedKeys;
- (void)home:(id)arg1 didAddAccessory:(id)arg2;
- (void)home:(id)arg1 didAddService:(id)arg2 toServiceGroup:(id)arg3;
- (void)home:(id)arg1 didAddServiceGroup:(id)arg2;
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;
- (void)home:(id)arg1 didRemoveService:(id)arg2 fromServiceGroup:(id)arg3;
- (void)home:(id)arg1 didRemoveServiceGroup:(id)arg2;
- (void)homeKitDispatcher:(id)arg1 manager:(id)arg2 didChangeHome:(id)arg3;
- (void)homeManager:(id)arg1 didUpdateHH2State:(bool)arg2;
- (void)homeManagerDidFinishInitialDatabaseLoad:(id)arg1;
- (void)homeManagerDidFinishUnknownChange:(id)arg1;
- (id)init;
- (id)objectCaches;
- (void)resetTrackingChangedKeys;
- (void)setObjectCaches:(id)arg1;
- (void)stopTrackingChangedKeys;
- (id)valueForObject:(id)arg1 key:(id)arg2 invalidationReasons:(unsigned long long)arg3 recalculationBlock:(id /* block */)arg4;

@end
