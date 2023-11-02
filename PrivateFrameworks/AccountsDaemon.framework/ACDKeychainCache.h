
@interface ACDKeychainCache : NSObject {
    unsigned int  _cacheValidityDuration;
    NSDictionary * _cachesByUsername;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cachesLock;
    NSMutableDictionary * _expirersByUsername;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _expirersLock;
}

@property unsigned int cacheValidityDuration;
@property (retain) NSDictionary *cachesByUsername;
@property (retain) NSMutableDictionary *expirersByUsername;

- (void).cxx_destruct;
- (void)cacheData:(id)arg1 forService:(id)arg2 username:(id)arg3 syncState:(unsigned long long)arg4;
- (unsigned int)cacheValidityDuration;
- (id)cachesByUsername;
- (void)clearCacheForSyncState:(unsigned long long)arg1;
- (void)clearDataForService:(id)arg1 username:(id)arg2 syncState:(unsigned long long)arg3;
- (id)dataForService:(id)arg1 username:(id)arg2 syncState:(unsigned long long)arg3;
- (id)expirersByUsername;
- (id)initWithValidityDuration:(unsigned int)arg1;
- (void)setCacheValidityDuration:(unsigned int)arg1;
- (void)setCachesByUsername:(id)arg1;
- (void)setExpirersByUsername:(id)arg1;

@end
