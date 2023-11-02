
@interface SASBulletinCache : NSObject {
    unsigned long long  _count;
    SASBulletinCacheNode * _newestNode;
    SASBulletinCacheNode * _oldestNode;
}

- (void).cxx_destruct;
- (void)_deleteNode:(id)arg1;
- (id)_findNodeForBulletinID:(id)arg1;
- (bool)_isFeedRelevant:(unsigned long long)arg1;
- (void)_purgeOldestNodes;
- (id)allBulletins;
- (id)cachedBulletinForID:(id)arg1;
- (id)init;
- (void)insertBulletin:(id)arg1 fromFeed:(unsigned long long)arg2;
- (bool)removeBulletinForID:(id)arg1;

@end
