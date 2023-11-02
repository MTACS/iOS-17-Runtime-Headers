
@interface PUUUIDSelectionManager : PXObservable <PUMutableUUIDSelectionManager, _PUOneUpSelectionIndicatorCompatibleManager> {
    NSMutableSet * __mutableSelectedUUIDs;
}

@property (nonatomic, readonly, copy) NSMutableSet *_mutableSelectedUUIDs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSSet *selectedUUIDs;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_mutableSelectedUUIDs;
- (void)addSelectedUUID:(id)arg1;
- (void)deselectAllUUIDs;
- (id)init;
- (id)initWithSelectedUUIDs:(id)arg1;
- (bool)isSelectedUUID:(id)arg1;
- (id)mutableChangeObject;
- (void)performChanges:(id /* block */)arg1;
- (bool)pu_isAssetReferenceSelected:(id)arg1;
- (void)pu_registerSelectionIndicatorObserver:(id)arg1;
- (void)pu_unregisterSelectionIndicatorObserver:(id)arg1;
- (void)removeSelectedUUID:(id)arg1;
- (id)selectedUUIDs;
- (void)setSelectedUUIDs:(id)arg1;

@end
