
@interface PUTileTree : NSObject <NSCopying> {
    NSMutableDictionary * __objectsByTileIdentifier;
    bool  _useUniqueLeafs;
}

@property (nonatomic, readonly) NSMutableDictionary *_objectsByTileIdentifier;
@property (nonatomic, readonly) bool useUniqueLeafs;

- (void).cxx_destruct;
- (id)_objectsByTileIdentifier;
- (void)addObject:(id)arg1 withTileIdentifier:(id)arg2;
- (bool)containsObject:(id)arg1 withTileIdentifier:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg1;
- (void)enumerateObjectsWithTileIdentifier:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)init;
- (id)initUsingUniqueLeafs:(bool)arg1;
- (id)initWithTileTree:(id)arg1;
- (id)objectWithTileIdentifier:(id)arg1;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1 withTileIdentifier:(id)arg2;
- (void)removeObjectWithTileIdentifier:(id)arg1;
- (bool)useUniqueLeafs;

@end
