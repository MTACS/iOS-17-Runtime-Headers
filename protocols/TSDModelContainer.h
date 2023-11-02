
@protocol TSDModelContainer

@required

- (NSArray *)containedModels;
- (void)insertContainedModel:(TSPObject *)arg1 atIndex:(unsigned long long)arg2;
- (void)moveModel:(TSPObject *)arg1 toIndex:(unsigned long long)arg2;
- (void)removeContainedModel:(TSPObject *)arg1;

@end
