
@interface IMBusinessNameManager : NSObject {
    NSMutableDictionary * _cache;
    NSLock * _cacheLock;
    NSMutableDictionary * _pendingRequests;
}

@property (retain) NSMutableDictionary *cache;
@property (retain) NSLock *cacheLock;
@property (retain) NSMutableDictionary *pendingRequests;

+ (id)placeholderBusinessName;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_fetchBusinessNameForUID:(id)arg1;
- (void)_fetchedBrandName:(id)arg1 forUID:(id)arg2;
- (id)businessNameForUID:(id)arg1 updateHandler:(id /* block */)arg2;
- (id)cache;
- (id)cacheLock;
- (id)init;
- (id)pendingRequests;
- (void)setCache:(id)arg1;
- (void)setCacheLock:(id)arg1;
- (void)setPendingRequests:(id)arg1;

@end
