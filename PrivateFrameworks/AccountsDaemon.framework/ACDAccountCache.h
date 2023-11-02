
@interface ACDAccountCache : NSObject {
    unsigned int  _cacheValidityDuration;
    NSMutableDictionary * _cachedAccountIDsByType;
    NSMutableDictionary * _cachedAccountTypesByID;
    NSMutableDictionary * _cachedAccountsByID;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cachesLock;
    NSMutableDictionary * _expirersByID;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _expirersLock;
    NSMutableDictionary * _generationWritersByKey;
}

@property unsigned int cacheValidityDuration;
@property (retain) NSMutableDictionary *cachedAccountIDsByType;
@property (retain) NSMutableDictionary *cachedAccountTypesByID;
@property (retain) NSMutableDictionary *cachedAccountsByID;
@property (retain) NSMutableDictionary *expirersByID;
@property (retain) NSMutableDictionary *generationWritersByKey;

- (void).cxx_destruct;
- (id)_expirerIdentifierForAccountTypeID:(id)arg1;
- (id)_keyForType:(id)arg1 justActive:(bool)arg2;
- (void)_lock_cacheGenerationForAccounts:(id)arg1 cacheSuffix:(id)arg2;
- (void)_lock_removeAccountsForType:(id)arg1;
- (void)_lock_resetAllAccountTypeIdentifiers;
- (void)_lock_resetCacheGenerationsForChildren:(id)arg1 recurseDepth:(unsigned long long)arg2 store:(id)arg3;
- (void)_lock_resetGenerationForType:(id)arg1;
- (id)_lock_writerForKey:(id)arg1;
- (void)_resetParentAccountForCachedAccountIfNeeded:(id)arg1;
- (void)cacheAccount:(id)arg1;
- (void)cacheAccountType:(id)arg1;
- (void)cacheAccounts:(id)arg1 forType:(id)arg2 justActive:(bool)arg3;
- (void)cacheGenerationForAccounts:(id)arg1 cacheSuffix:(id)arg2;
- (unsigned int)cacheValidityDuration;
- (id)cachedAccountForIdentifier:(id)arg1;
- (id)cachedAccountIDsByType;
- (id)cachedAccountTypeForID:(id)arg1;
- (id)cachedAccountTypesByID;
- (id)cachedAccountsByID;
- (id)cachedAccountsOfType:(id)arg1 justActive:(bool)arg2;
- (void)clearCache;
- (id)expirersByID;
- (id)generationWritersByKey;
- (id)initWithValidityDuration:(unsigned int)arg1;
- (void)removeAccount:(id)arg1 store:(id)arg2;
- (void)removeAccountType:(id)arg1;
- (void)setCacheValidityDuration:(unsigned int)arg1;
- (void)setCachedAccountIDsByType:(id)arg1;
- (void)setCachedAccountTypesByID:(id)arg1;
- (void)setCachedAccountsByID:(id)arg1;
- (void)setExpirersByID:(id)arg1;
- (void)setGenerationWritersByKey:(id)arg1;

@end
