
@interface _UIFocusLinearMovementCache : NSObject {
    double  _cooldownThreshold;
    struct { 
        unsigned int isInvalidated : 1; 
        unsigned int invalidateOnTimeout : 1; 
    }  _flags;
    double  _lastUpdate;
    NSArray * _linearItems;
    NSHashTable * _parentEnvironments;
}

- (void).cxx_destruct;
- (void)_invalidate;
- (void)_invalidateOnTimeout;
- (void)_updateParentEnvironmentIfNecessary;
- (void)environmentDidAppear:(id)arg1;
- (void)environmentWillDisappear:(id)arg1;
- (void)focusGroupPriorityDidChange:(id)arg1;
- (id)initWithFocusBehavior:(id)arg1;
- (void)invalidateFocusItemContainer:(id)arg1;
- (id)nextItemForRequest:(id)arg1;
- (void)scrollableContainerDidScroll:(id)arg1;
- (void)updateCacheWithContext:(id)arg1;

@end
