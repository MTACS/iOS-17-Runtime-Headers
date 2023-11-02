
@interface BLHLSKeyFetcher : NSObject {
    bool  _ignoreCache;
}

@property (nonatomic) bool ignoreCache;

+ (id)sharedInstance;

- (id)fetchOfflineKeyForMediaItem:(id)arg1 identity:(id)arg2 completion:(id /* block */)arg3;
- (id)fetchOnlineKeyForMediaItem:(id)arg1 loadingRequest:(id)arg2;
- (bool)ignoreCache;
- (id)init;
- (void)setIgnoreCache:(bool)arg1;

@end
