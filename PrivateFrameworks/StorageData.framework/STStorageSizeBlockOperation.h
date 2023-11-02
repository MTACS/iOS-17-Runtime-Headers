
@interface STStorageSizeBlockOperation : STStorageSizeOperation {
    STStorageApp * _app;
    id /* block */  _sizeBlock;
}

@property (retain) STStorageApp *app;
@property (copy) id /* block */ sizeBlock;

+ (id)operationWithSizeBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)app;
- (void)main;
- (void)setApp:(id)arg1;
- (void)setSizeBlock:(id /* block */)arg1;
- (id /* block */)sizeBlock;

@end
