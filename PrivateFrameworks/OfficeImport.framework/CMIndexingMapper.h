
@interface CMIndexingMapper : CMDocumentMapper

- (void)finishMappingWithState:(id)arg1;
- (void)mapElement:(id)arg1 atIndex:(unsigned long long)arg2 withState:(id)arg3 isLastElement:(bool)arg4;
- (void)mapSummaryWithState:(id)arg1;
- (void)mapWithState:(id)arg1;
- (void)startMappingWithState:(id)arg1;

@end
