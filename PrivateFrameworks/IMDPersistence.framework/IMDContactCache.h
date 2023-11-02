
@interface IMDContactCache : NSObject {
    NSCache * _cache;
    NSData * _currentHistoryToken;
}

@property (nonatomic, retain) NSCache *cache;
@property (nonatomic, retain) NSData *currentHistoryToken;

+ (id)contactsForVCardAtPath:(id)arg1;
+ (id)sharedInstance;
+ (void)updateAttributes:(id)arg1 withAddressFromContact:(id)arg2;
+ (void)vCardCoordinateForMapURL:(id)arg1 outLatitude:(float*)arg2 outLongitude:(float*)arg3;
+ (id)vCardMapURLForContact:(id)arg1;
+ (id)vCardNameForContact:(id)arg1;

- (void).cxx_destruct;
- (id)_handlesMatchingContactIdentifier:(id)arg1;
- (id)cache;
- (void)cacheContact:(id)arg1 forKey:(id)arg2;
- (void)cacheContactsFromFetchResults:(id)arg1 forAliases:(id)arg2;
- (id)cachedContactForKey:(id)arg1;
- (void)contactStoreDidChange:(id)arg1;
- (id)currentHistoryToken;
- (id)init;
- (void)removeCachedContactForKey:(id)arg1;
- (void)resetCache;
- (void)setCache:(id)arg1;
- (void)setCurrentHistoryToken:(id)arg1;
- (void)updateCacheForAliases:(id)arg1;

@end
