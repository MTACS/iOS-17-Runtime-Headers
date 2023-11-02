
@interface _UIStatusBarDataAggregator : NSObject {
    NSMutableDictionary * _coalescedKeys;
    NSMutableDictionary * _coalescedTimers;
    Class  _dataClass;
    NSCountedSet * _delayedKeys;
    _UIStatusBarData * _overlayData;
    NSMutableDictionary * _pendingUpdates;
    id /* block */  _updateBlock;
}

@property (nonatomic, readonly, copy) NSSet *coalescedEntryKeys;
@property (nonatomic, retain) NSMutableDictionary *coalescedKeys;
@property (nonatomic, retain) NSMutableDictionary *coalescedTimers;
@property (nonatomic, copy) Class dataClass;
@property (nonatomic, readonly, copy) NSSet *delayedEntryKeys;
@property (nonatomic, retain) NSCountedSet *delayedKeys;
@property (nonatomic, copy) _UIStatusBarData *overlayData;
@property (nonatomic, retain) NSMutableDictionary *pendingUpdates;
@property (nonatomic, copy) id /* block */ updateBlock;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_coalescedUpdateForEntryKeys:(id)arg1;
- (void)_updateForCoalescedKeysWithData:(id)arg1;
- (void)_updateForDelayedKeysWithData:(id)arg1;
- (void)_updateForOverlayWithData:(id)arg1;
- (void)_updateFromPendingUpdatesForKeys:(id)arg1 block:(id /* block */)arg2;
- (id)_updatedDataFromData:(id)arg1 delayedKeys:(id)arg2;
- (void)beginCoalescingUpdatesForEntryKeys:(id)arg1 delay:(double)arg2;
- (void)beginDelayingUpdatesForEntryKeys:(id)arg1;
- (id)coalescedEntryKeys;
- (id)coalescedKeys;
- (id)coalescedTimers;
- (Class)dataClass;
- (id)delayedEntryKeys;
- (id)delayedKeys;
- (void)endCoalescingUpdatesForEntryKeys:(id)arg1;
- (void)endDelayingUpdatesForEntryKeys:(id)arg1;
- (id)initWithUpdateBlock:(id /* block */)arg1;
- (id)overlayData;
- (id)pendingUpdates;
- (void)setCoalescedKeys:(id)arg1;
- (void)setCoalescedTimers:(id)arg1;
- (void)setDataClass:(Class)arg1;
- (void)setDelayedKeys:(id)arg1;
- (void)setOverlayData:(id)arg1;
- (void)setPendingUpdates:(id)arg1;
- (void)setUpdateBlock:(id /* block */)arg1;
- (id /* block */)updateBlock;
- (void)updateWithData:(id)arg1;

@end
