
@interface STMSizeCache : NSObject {
    NSDate * _cacheEventDate;
    unsigned long long  _cacheEventID;
    NSObject<OS_dispatch_source> * _cacheFlushTimer;
    <STMSizeCacheDelegate> * _delegate;
    NSMutableArray * _eventsToProcess;
    NSMutableDictionary * _itemsByPath;
    NSLock * _itemsLock;
    struct __CFString { } * _prefsKey;
}

@property (retain) NSDate *cacheEventDate;
@property unsigned long long cacheEventID;
@property <STMSizeCacheDelegate> *delegate;
@property (readonly) NSArray *items;
@property (retain) NSLock *itemsLock;

- (void).cxx_destruct;
- (void)_flushCache;
- (void)_writeCache;
- (void)addItem:(id)arg1;
- (void)addItem:(id)arg1 andComputeSizeSynchronously:(bool)arg2;
- (void)addItems:(id)arg1;
- (id)cacheEventDate;
- (unsigned long long)cacheEventID;
- (void)dealloc;
- (id)delegate;
- (void)flushCacheToPref;
- (id)initWithPrefsKey:(id)arg1;
- (id)itemForPath:(id)arg1;
- (id)items;
- (id)itemsContainedByPath:(id)arg1;
- (id)itemsContainingPath:(id)arg1;
- (id)itemsLock;
- (void)loadCacheFromPref;
- (void)notifyItemsAdded:(id)arg1;
- (void)notifySizesChanged:(id)arg1;
- (unsigned long long)processCacheEvents:(id)arg1;
- (void)pruneCache;
- (void)removeItem:(id)arg1;
- (void)removeItemForPath:(id)arg1;
- (void)setCacheEventDate:(id)arg1;
- (void)setCacheEventID:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setItemsLock:(id)arg1;
- (id)sizeOfItemForPath:(id)arg1;
- (void)updateLastCacheEventID:(unsigned long long)arg1;
- (void)updateSizeOfItem:(id)arg1 synchronous:(bool)arg2;
- (id)updatedSizeOfItemForPath:(id)arg1;
- (void)writeCacheToPref;

@end
