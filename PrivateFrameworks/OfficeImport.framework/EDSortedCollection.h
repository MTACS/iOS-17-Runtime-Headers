
@interface EDSortedCollection : EDKeyedCollection

- (unsigned long long)addObject:(id)arg1;
- (unsigned long long)addObject:(id)arg1 overrideDuplicate:(bool)arg2;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;

@end
