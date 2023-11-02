
@interface ACNotifyAccountCache : NSObject {
    NSArray * _cachedAccounts;
    NSString * _key;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _notifyAccountCacheLock;
    <ACNotifyReading> * _reader;
}

@property (nonatomic, retain) NSString *key;
@property (retain) <ACNotifyReading> *reader;

+ (id)cacheKeyForSuffix:(id)arg1;
+ (unsigned long long)generationForAccounts:(id)arg1;
+ (id)suffixForAccountsForAccountType:(id)arg1 fetchOptions:(unsigned long long)arg2;

- (void).cxx_destruct;
- (void)_lock_clearCcachedAccounts;
- (void)cacheAccounts:(id)arg1;
- (id)cachedAccounts;
- (void)clearCachedAccounts;
- (unsigned long long)generation;
- (id)initWithKey:(id)arg1;
- (id)initWithKey:(id)arg1 reader:(id)arg2;
- (id)key;
- (id)reader;
- (void)setKey:(id)arg1;
- (void)setReader:(id)arg1;

@end
