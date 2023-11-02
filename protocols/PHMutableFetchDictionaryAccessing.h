
@protocol PHMutableFetchDictionaryAccessing <PHFetchDictionaryAccessing>

@required

- (void)removeObjectForKey:(id <NSCopying>)arg1;
- (void)setObject:(id)arg1 forKey:(id <NSCopying>)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id <NSCopying>)arg2;

@end
