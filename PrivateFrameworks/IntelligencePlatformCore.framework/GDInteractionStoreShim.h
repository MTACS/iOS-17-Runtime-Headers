
@interface GDInteractionStoreShim : NSObject

+ (id)interactionFromCDInteraction:(id)arg1;
+ (id)interactionHistoryEnumeratorFromStore:(id)arg1 batchSize:(unsigned long long)arg2;
+ (id)interactionHistoryEnumeratorFromStore:(id)arg1 predicate:(id)arg2 sortDescriptor:(id)arg3 batchSize:(unsigned long long)arg4;
+ (id)interactionHistoryEnumeratorWithBatchSize:(unsigned long long)arg1;
+ (id)interactionHistoryEnumeratorWithPredicate:(id)arg1 sortDescriptor:(id)arg2 batchSize:(unsigned long long)arg3;
+ (id)interactionHistoryFromStore:(id)arg1;

@end
