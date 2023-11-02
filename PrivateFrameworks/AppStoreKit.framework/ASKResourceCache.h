
@interface ASKResourceCache : NSObject {
    NSCache * _contents;
    _ASKResourceCacheGroup * _group;
}

@property (nonatomic, readonly) NSCache *contents;
@property (nonatomic) bool evictsObjectsWhenApplicationEntersBackground;
@property (nonatomic, readonly) _ASKResourceCacheGroup *group;
@property (nonatomic, readonly) bool isGroupMember;
@property (nonatomic) unsigned long long limit;

- (void).cxx_destruct;
- (void)addResource:(id)arg1 forKey:(id)arg2;
- (id)contents;
- (void)dealloc;
- (bool)evictsObjectsWhenApplicationEntersBackground;
- (id)group;
- (id)init;
- (id)initWithGroupOfCache:(id)arg1;
- (bool)isGroupMember;
- (unsigned long long)limit;
- (void)removeAllResources;
- (void)replaceResourcesForKey:(id)arg1 withResource:(id)arg2;
- (id)resourcesForKey:(id)arg1;
- (void)setEvictsObjectsWhenApplicationEntersBackground:(bool)arg1;
- (void)setLimit:(unsigned long long)arg1;

@end
