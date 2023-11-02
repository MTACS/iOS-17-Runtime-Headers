
@interface CDPRecoveryKeyCache : NSObject {
    AAFKeychainManager * _keychainManager;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)cacheRecoveryKey:(id)arg1 forAltDSID:(id)arg2 error:(id*)arg3;
- (void)deleteCache;
- (id)fetchRecoveryKeyFromCacheForAltDSID:(id)arg1;
- (id)init;

@end
