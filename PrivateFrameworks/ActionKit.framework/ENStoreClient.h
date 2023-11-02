
@interface ENStoreClient : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)handleError:(id)arg1;
- (id)init;
- (void)invokeAsyncBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)invokeAsyncBoolBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)invokeAsyncInt32Block:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)invokeAsyncObjectBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)queue;
- (void)setQueue:(id)arg1;

@end
