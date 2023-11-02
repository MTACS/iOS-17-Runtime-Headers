
@interface AFConnectionEntitlementCache : NSObject {
    NSMutableDictionary * _bundleIDToPIDMap;
    NSMutableDictionary * _cache;
}

+ (id)sharedCache;

- (void).cxx_destruct;
- (void)cacheEntitlement:(id)arg1 forPID:(int)arg2 bundleID:(id)arg3;
- (bool)hasEntitlement:(id)arg1 forPID:(int)arg2;
- (id)init;

@end
