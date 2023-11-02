
@interface LASecret : NSObject {
    <LAKeyStoreGenericPassword> * _genp;
    unsigned long long  _instanceID;
    LARight * _right;
    NSObject<OS_dispatch_queue> * _workQueue;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)identifier;
- (id)initWithGenericPassword:(id)arg1;
- (void)loadDataWithCompletion:(id /* block */)arg1;
- (id)right;
- (void)setRight:(id)arg1;

@end
