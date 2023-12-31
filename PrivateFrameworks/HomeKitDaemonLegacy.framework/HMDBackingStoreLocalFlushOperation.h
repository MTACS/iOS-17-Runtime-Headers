
@interface HMDBackingStoreLocalFlushOperation : NSOperation {
    bool  _clearCloud;
    id /* block */  _resultHandler;
    HMDBackingStoreLocal * _store;
}

@property (nonatomic) bool clearCloud;
@property (nonatomic, copy) id /* block */ resultHandler;
@property (nonatomic, retain) HMDBackingStoreLocal *store;

- (void).cxx_destruct;
- (bool)clearCloud;
- (id)initWithStore:(id)arg1 clearCloud:(bool)arg2 resultHandler:(id /* block */)arg3;
- (void)main;
- (id /* block */)resultHandler;
- (void)setClearCloud:(bool)arg1;
- (void)setResultHandler:(id /* block */)arg1;
- (void)setStore:(id)arg1;
- (id)store;

@end
