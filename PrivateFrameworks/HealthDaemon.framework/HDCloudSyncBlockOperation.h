
@interface HDCloudSyncBlockOperation : HDCloudSyncOperation {
    id /* block */  _block;
}

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 block:(id /* block */)arg3;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 synchronousBlock:(id /* block */)arg3;
- (void)main;
- (void)skip;

@end
