
@interface LiveFSXattrCache : NSObject {
    NSMutableDictionary * _cacheEntries;
    unsigned long long  _entryCount;
    unsigned long long  _entryLifetime;
    unsigned long long  _maxItemSize;
    unsigned long long  _maxItems;
    bool  _noXattrsPresent;
    struct timespec { 
        long long tv_sec; 
        long long tv_nsec; 
    }  _noXattrsPresentSetTime;
}

@property bool noXattrsPresent;

+ (id)xattrCacheWithMaxItems:(unsigned long long)arg1 andMaxItemSize:(unsigned long long)arg2;
+ (id)xattrCacheWithMaxItems:(unsigned long long)arg1 maxItemSize:(unsigned long long)arg2 andEntryLifetimeInSeconds:(unsigned long long)arg3;

- (void).cxx_destruct;
- (id)dataForName:(id)arg1 wasNegative:(bool*)arg2;
- (void)dealloc;
- (id)initWithMaxItems:(unsigned long long)arg1 andMaxItemSize:(unsigned long long)arg2;
- (id)initWithMaxItems:(unsigned long long)arg1 maxItemSize:(unsigned long long)arg2 andEntryLifetimeInSeconds:(unsigned long long)arg3;
- (void)insertEntryForData:(id)arg1 forName:(id)arg2;
- (void)invalidate;
- (bool)noXattrsPresent;
- (void)setData:(id)arg1 forName:(id)arg2;
- (void)setNegativeForName:(id)arg1;
- (void)setNoXattrsPresent:(bool)arg1;

@end
