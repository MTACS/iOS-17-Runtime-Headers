
@interface BBDismissalSyncCacheItem : NSObject {
    NSMutableArray * _dismissalDictionariesAndFeeds;
    NSMutableDictionary * _dismissalIDToFeeds;
}

@property (nonatomic, readonly) NSMutableArray *dismissalDictionariesAndFeeds;
@property (nonatomic, readonly) NSMutableDictionary *dismissalIDToFeeds;

- (void).cxx_destruct;
- (void)cacheDismissalDictionaries:(id)arg1 dismissalIDs:(id)arg2 forFeeds:(unsigned long long)arg3;
- (id)description;
- (id)dismissalDictionariesAndFeeds;
- (id)dismissalIDToFeeds;
- (id)findBulletinMatch:(id)arg1;
- (id)init;
- (id)purgeExpired;
- (void)removeBulletinMatch:(id)arg1;

@end
