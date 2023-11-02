
@interface NEAppInfoCache : NSObject {
    NSObject<OS_dispatch_queue> * _cacheQueue;
    NSMutableDictionary * _cachedSourceAppInfo;
    <NEAppInfoCacheLookupDelegate> * _lookupDelegate;
}

- (void).cxx_destruct;
- (id)init;

@end
