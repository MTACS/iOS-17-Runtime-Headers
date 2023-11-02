
@interface PXLoadingStatusManager : NSObject {
    NSMutableSet * __invalidLoadingStatusItemIdentifiers;
    bool  __isUpdateScheduled;
    NSMutableDictionary * __itemIdentifierByLoadOperationTrackingID;
    NSMapTable * __loadOperationTrackingIDsByItemIdentifier;
    NSMapTable * __loadingStatusByItemIdentifier;
    NSMutableDictionary * __loadingStatusByLoadOperationTrackingID;
    NSHashTable * _observers;
}

@property (nonatomic, readonly) NSMutableSet *_invalidLoadingStatusItemIdentifiers;
@property (setter=_setUpdateScheduled:, nonatomic) bool _isUpdateScheduled;
@property (nonatomic, readonly) NSMutableDictionary *_itemIdentifierByLoadOperationTrackingID;
@property (nonatomic, readonly) NSMapTable *_loadOperationTrackingIDsByItemIdentifier;
@property (nonatomic, readonly) NSMapTable *_loadingStatusByItemIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *_loadingStatusByLoadOperationTrackingID;

+ (id)defaultManager;

- (void).cxx_destruct;
- (void)_didUpdateLoadOperationWithTrackingID:(id)arg1 withProgress:(double)arg2 indeterminate:(bool)arg3;
- (id)_invalidLoadingStatusItemIdentifiers;
- (void)_invalidateLoadingStatusForItemIdentifier:(id)arg1;
- (bool)_isUpdateScheduled;
- (id)_itemIdentifierByLoadOperationTrackingID;
- (id)_loadOperationTrackingIDsByItemIdentifier;
- (id)_loadingStatusByItemIdentifier;
- (id)_loadingStatusByLoadOperationTrackingID;
- (bool)_needsUpdate;
- (void)_resetLoadingStatusForItemIdentifierIfAppropriate:(id)arg1;
- (void)_setLoadingStatus:(id)arg1 forItemIdentifier:(id)arg2;
- (void)_setLoadingStatus:(id)arg1 forLoadOperationTrackingID:(id)arg2;
- (void)_setNeedsUpdate;
- (void)_setUpdateScheduled:(bool)arg1;
- (void)_updateIfNeeded;
- (void)_updateLoadingStatusForItemIdentifier:(id)arg1;
- (void)_updateLoadingStatusForItemIdentifierIfNeeded:(id)arg1;
- (void)_updateLoadingStatusForItemIdentifiersIfNeeded;
- (void)_updateNowIfNeeded;
- (void)didCancelLoadOperationWithTrackingID:(id)arg1;
- (void)didCompleteLoadOperationWithTrackingID:(id)arg1 withSuccess:(bool)arg2 error:(id)arg3;
- (void)didUpdateLoadOperationWithIndeterminateProgressWithTrackingID:(id)arg1;
- (void)didUpdateLoadOperationWithTrackingID:(id)arg1 withProgress:(double)arg2;
- (id)init;
- (id)loadingStatusForItemIdentifier:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (id)willBeginLoadOperationWithItemIdentifier:(id)arg1;

@end
