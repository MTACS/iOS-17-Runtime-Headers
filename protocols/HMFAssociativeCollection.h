
@protocol HMFAssociativeCollection

@required

- (NSArray *)allKeys;
- (NSArray *)allValues;
- (unsigned long long)count;
- (void)enumerateKeysAndObjectsUsingBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, id, bool*, void*
- (void)enumerateKeysAndObjectsWithOptions:(void *)arg1 usingBlock:(void *)arg2; // needs 2 arg types, found 9: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, id, bool*, void*
- (NSEnumerator *)keyEnumerator;
- (NSEnumerator *)objectEnumerator;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (NSArray *)objectsForKeys:(NSArray *)arg1 notFoundMarker:(id)arg2;

@end
