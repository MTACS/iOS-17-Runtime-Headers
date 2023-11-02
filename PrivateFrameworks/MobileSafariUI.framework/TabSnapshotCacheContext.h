
@interface TabSnapshotCacheContext : NSObject {
    unsigned long long  _capacity;
    NSOrderedSet * _identifiersToCache;
    bool  _updating;
}

@property (nonatomic) unsigned long long capacity;
@property (nonatomic, retain) NSOrderedSet *identifiersToCache;
@property (nonatomic) bool updating;

- (void).cxx_destruct;
- (unsigned long long)capacity;
- (id)description;
- (id)identifiersToCache;
- (void)setCapacity:(unsigned long long)arg1;
- (void)setIdentifiersToCache:(id)arg1;
- (void)setUpdating:(bool)arg1;
- (bool)updating;

@end
