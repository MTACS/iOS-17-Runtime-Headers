
@interface AVVCKeepAliveManager : NSObject {
    struct AVVCKeepAliveImpl { int (**x1)(); } * _impl;
    NSObject<OS_dispatch_queue> * mKeepAliveDispatchQueue;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)createWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (void)destroyWithCompletion:(id /* block */)arg1;
- (id)getDispatchQueue;
- (id)init;
- (void)startWithCompletion:(id /* block */)arg1;
- (void)stopWithCompletion:(id /* block */)arg1;

@end
