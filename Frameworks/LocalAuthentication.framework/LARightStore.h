
@interface LARightStore : NSObject {
    unsigned long long  _instanceID;
    <LAKeyStore> * _keyStore;
    NSObject<OS_dispatch_queue> * _workQueue;
}

+ (id)sharedStore;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)removeAllRightsWithCompletion:(id /* block */)arg1;
- (void)removeRight:(id)arg1 completion:(id /* block */)arg2;
- (void)removeRightForIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)rightForIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)saveRight:(id)arg1 identifier:(id)arg2 completion:(id /* block */)arg3;
- (void)saveRight:(id)arg1 identifier:(id)arg2 secret:(id)arg3 completion:(id /* block */)arg4;

@end
