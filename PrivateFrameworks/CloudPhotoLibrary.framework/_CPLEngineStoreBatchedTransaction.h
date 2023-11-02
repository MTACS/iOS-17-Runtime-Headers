
@interface _CPLEngineStoreBatchedTransaction : NSObject {
    id /* block */  _block;
    id /* block */  _completionHandler;
    CPLTransaction * _dirty;
}

@property (nonatomic, copy) id /* block */ block;
@property (nonatomic, copy) id /* block */ completionHandler;

- (void).cxx_destruct;
- (void)_releaseDirty;
- (id /* block */)block;
- (id /* block */)completionHandler;
- (void)dealloc;
- (id)init;
- (void)setBlock:(id /* block */)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;

@end
