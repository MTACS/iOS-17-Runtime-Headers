
@interface ASBulletinStore : NSObject {
    NSArray * _bulletins;
}

@property (nonatomic, readonly) NSArray *bulletins;

- (void).cxx_destruct;
- (void)_persistBulletins;
- (void)addBulletins:(id)arg1;
- (id)bulletins;
- (void)loadBulletins;
- (void)removeAllBulletins;
- (void)removeBulletinsMatchingCriteria:(id /* block */)arg1;
- (void)removeBulletinsOlderThanInterval:(double)arg1;

@end
