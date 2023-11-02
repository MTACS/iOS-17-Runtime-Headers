
@interface _UISelectorDictionary : NSObject <NSCopying> {
    NSMapTable * _map;
}

@property (nonatomic, readonly) NSArray *allObjects;
@property (nonatomic, readonly) _UISelectorSet *allSelectors;
@property (nonatomic, readonly) unsigned long long count;

- (void).cxx_destruct;
- (void)addEntriesFromDictionary:(id)arg1;
- (id)allObjects;
- (id)allSelectors;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)description;
- (void)enumerateSelectorsAndObjectsUsingBlock:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithMap:(id)arg1;
- (id)initWithMapping:(id /* block */)arg1 objects:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)objectForSelector:(SEL)arg1;
- (void)removeObjectForSelector:(SEL)arg1;
- (void)removeObjectsForSelectors:(id)arg1;
- (void)setObject:(id)arg1 forSelector:(SEL)arg2;

@end
