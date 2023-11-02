
@interface EMWorkbookIndexingMapper : CMIndexingMapper

@property (readonly) EDWorkbook *document;

- (void)finishMappingWithState:(id)arg1;
- (void)mapElement:(id)arg1 atIndex:(unsigned long long)arg2 withState:(id)arg3 isLastElement:(bool)arg4;
- (void)setElementCount:(unsigned long long)arg1;

@end
