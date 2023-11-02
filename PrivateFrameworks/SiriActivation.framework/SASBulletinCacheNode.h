
@interface SASBulletinCacheNode : NSObject {
    AFBulletin * _bulletin;
    SASBulletinCacheNode * _nextNode;
    SASBulletinCacheNode * _previousNode;
}

@property (nonatomic, retain) AFBulletin *bulletin;
@property (nonatomic, retain) SASBulletinCacheNode *nextNode;
@property (nonatomic, retain) SASBulletinCacheNode *previousNode;

- (void).cxx_destruct;
- (id)bulletin;
- (id)nextNode;
- (id)previousNode;
- (void)setBulletin:(id)arg1;
- (void)setNextNode:(id)arg1;
- (void)setPreviousNode:(id)arg1;

@end
