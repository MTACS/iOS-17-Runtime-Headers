
@interface ML3AccountCacheDatabase : NSObject {
    ML3MusicLibrary * _library;
    NSMutableDictionary * _propertiesCache;
    NSObject<OS_dispatch_queue> * accessQueue;
}

- (void).cxx_destruct;
- (id)_cacheEntryForDSID:(unsigned long long)arg1;
- (void)_setCacheEntry:(id)arg1 forDSID:(unsigned long long)arg2;
- (id)appleIDForDSID:(unsigned long long)arg1;
- (bool)getPropertiesForDSID:(unsigned long long)arg1 appleID:(id*)arg2 altDSID:(id*)arg3;
- (id)initWithLibrary:(id)arg1;
- (bool)setAppleID:(id)arg1 altDSID:(id)arg2 forDSID:(unsigned long long)arg3;
- (bool)setAppleID:(id)arg1 forDSID:(unsigned long long)arg2;

@end
