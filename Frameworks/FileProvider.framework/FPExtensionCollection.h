
@interface FPExtensionCollection : FPItemCollection {
    FPItemID * _alternateID;
    FPExtensionCollectionDSCopySubscriber * _dsCopySubscriber;
    id  _providerDomainMonitoringContext;
    FPExtensionEnumerationSettings * _settings;
}

@property (copy) FPExtensionEnumerationSettings *settings;

+ (bool)_item:(id)arg1 isCollectionRootForObservedItemID:(id)arg2;
+ (bool)item:(id)arg1 isValidForObservedItemID:(id)arg2;

- (void).cxx_destruct;
- (void)_failMonitoringWithError:(id)arg1;
- (void)_startMonitoringDSCopyProgress;
- (void)_startMonitoringDomains;
- (void)_stopMonitoringDomains;
- (id)createDataSourceWithSortDescriptors:(id)arg1;
- (id)description;
- (id)enumeratedItemID;
- (id)initWithSettings:(id)arg1;
- (bool)isCollectionValidForItem:(id)arg1;
- (bool)isRootItem:(id)arg1;
- (bool)recoverFromError:(id)arg1;
- (id)scopedSearchQuery;
- (void)setSettings:(id)arg1;
- (id)settings;
- (bool)shouldRetryError:(id)arg1;
- (void)startObserving;
- (void)stopObserving;
- (void)updateRootItem:(id)arg1;

@end
