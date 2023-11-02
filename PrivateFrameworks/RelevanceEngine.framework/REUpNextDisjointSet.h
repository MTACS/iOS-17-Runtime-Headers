
@interface REUpNextDisjointSet : NSObject <NSCopying> {
    NSMapTable * _nodes;
}

@property (nonatomic, readonly) unsigned long long count;

- (void).cxx_destruct;
- (void)addItem:(id)arg1;
- (id)allItemsConnectedToItem:(id)arg1;
- (void)connectItem:(id)arg1 withItem:(id)arg2;
- (bool)containsItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (id)init;
- (bool)isItem:(id)arg1 connectedToItem:(id)arg2;
- (void)removeItem:(id)arg1;

@end
