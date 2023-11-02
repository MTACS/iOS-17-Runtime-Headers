
@interface TSCacheFlushingManager : NSObject <TSCacheFlushingManagerType> {
    void cacheFlusher;
    void preFlushGroup;
    void storageLevelProvider;
}

- (void).cxx_destruct;
- (void)addPreFlushTask:(id /* block */)arg1;
- (id)createPreFlushTask;
- (void)enableFlushing;
- (id)init;

@end
