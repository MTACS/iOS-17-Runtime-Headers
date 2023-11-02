
@interface CNChangeHistoryLegacyResultEnumerator : NSEnumerator {
    CNQueue * _batchFetchQueue;
    CNQueue * _changes;
    <CNEnumeratorRefillStrategy> * _refillStrategy;
}

@property (nonatomic, readonly) CNQueue *batchFetchQueue;
@property (nonatomic, readonly, copy) CNQueue *changes;
@property (nonatomic, readonly) <CNEnumeratorRefillStrategy> *refillStrategy;

+ (id)contactEnumeratorWithChanges:(id)arg1 keysToFetch:(id)arg2 unifyResults:(bool)arg3 contactStore:(id)arg4;
+ (id)groupEnumeratorWithChanges:(id)arg1 contactStore:(id)arg2;

- (void).cxx_destruct;
- (void)_fetchNextBatch;
- (id)batchFetchQueue;
- (id)changes;
- (id)initWithChanges:(id)arg1 refillStrategy:(id)arg2;
- (id)nextObject;
- (id)refillStrategy;

@end
