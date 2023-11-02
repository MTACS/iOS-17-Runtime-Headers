
@protocol CNEnumeratorRefillStrategy

@required

- (NSArray *)batchesToRepresentObjects:(NSArray *)arg1 suggestedBatchSize:(unsigned long long)arg2;
- (NSArray *)objectsRepresentedByBatch:(id)arg1;

@end
