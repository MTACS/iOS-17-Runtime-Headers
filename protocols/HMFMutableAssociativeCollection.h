
@protocol HMFMutableAssociativeCollection <HMFAssociativeCollection>

@required

- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectsForKeys:(NSArray *)arg1;
- (void)setObject:(id)arg1 forKey:(id <NSCopying>)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id <NSCopying>)arg2;

@end
