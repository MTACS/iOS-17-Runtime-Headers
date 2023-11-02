
@interface __NSPlaceholderSet : NSMutableSet

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;

- (void)addObject:(id)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
- (id)initWithSet:(id)arg1 copyItems:(bool)arg2;
- (id)member:(id)arg1;
- (id)objectEnumerator;
- (oneway void)release;
- (void)removeObject:(id)arg1;
- (id)retain;
- (unsigned long long)retainCount;

@end
