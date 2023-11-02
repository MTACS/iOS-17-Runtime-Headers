
@interface RESortedDictionary : NSObject <NSCopying> {
    NSMutableArray * _order;
    NSMutableDictionary * _values;
}

@property (readonly) unsigned long long count;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg1;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
