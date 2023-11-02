
@interface STMSizer : STMSizeCache <STMSizeCacheDelegate> {
    struct __FSEventStream { } * _fsStream;
    NSMutableDictionary * _pendingEventsByPath;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _pendingEventsLock;
    NSArray * _rootPaths;
    bool  _streamRunning;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *rootPaths;
@property (readonly) Class superclass;

+ (id)containersWithClass:(unsigned long long)arg1;
+ (id)listOfUsedPathsInOverrides:(id)arg1;
+ (id)sharedAppSizer;

- (void).cxx_destruct;
- (void)_asyncProcessPendingEvents:(id)arg1;
- (void)addApp:(id)arg1;
- (void)addApps:(id)arg1;
- (id)addContainer:(id)arg1;
- (id)addContainers:(id)arg1;
- (id)addURL:(id)arg1;
- (id)addURL:(id)arg1 usingFastSizingIfPossible:(bool)arg2;
- (id)addURLs:(id)arg1;
- (id)addURLs:(id)arg1 usingFastSizingIfPossible:(bool)arg2;
- (id)cachePathOfContainer:(id)arg1;
- (id)cacheSizeForContainer:(id)arg1;
- (id)containersForApp:(id)arg1;
- (void)dealloc;
- (void)flushCacheAsynchronously;
- (id)initWithPrefsKey:(id)arg1;
- (id)pathOfContainer:(id)arg1;
- (void)processEvents:(id)arg1;
- (void)processPendingEvents;
- (void)reloadAppContainer:(id)arg1;
- (id)rootPaths;
- (void)setEvent:(id)arg1 forItem:(id)arg2;
- (void)setRootPaths:(id)arg1;
- (id)sizeForContainer:(id)arg1;
- (id)sizeForURL:(id)arg1;
- (void)startSizer;
- (void)stopSizer;
- (id)updatedCacheSizeForContainer:(id)arg1;
- (id)updatedSizeForContainer:(id)arg1;
- (id)updatedSizeForURL:(id)arg1;

@end
