
@interface IDSServerBagCacheLoader : NSObject {
    id /* block */  _cacheDidReloadBlock;
    IDSServerBagConfig * _config;
    CUTDeferredTaskQueue * _handleExternalLoadTaskQueue;
    bool  _postingNotification;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, copy) id /* block */ cacheDidReloadBlock;
@property (nonatomic, retain) IDSServerBagConfig *config;
@property (nonatomic, retain) CUTDeferredTaskQueue *handleExternalLoadTaskQueue;
@property (nonatomic) bool postingNotification;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id /* block */)cacheDidReloadBlock;
- (id)clearOverrideValues;
- (id)config;
- (void)dealloc;
- (id)handleExternalLoadTaskQueue;
- (id)initWithConfig:(id)arg1 queue:(id)arg2;
- (id)loadFromCacheWithError:(id*)arg1;
- (id)loadOverrideValuesIfPresent;
- (bool)postingNotification;
- (id)queue;
- (void)setCacheDidReloadBlock:(id /* block */)arg1;
- (void)setConfig:(id)arg1;
- (void)setHandleExternalLoadTaskQueue:(id)arg1;
- (void)setPostingNotification:(bool)arg1;
- (void)setQueue:(id)arg1;
- (id)writeOverrideValues:(id)arg1;
- (id)writeRawContents:(id)arg1;

@end
