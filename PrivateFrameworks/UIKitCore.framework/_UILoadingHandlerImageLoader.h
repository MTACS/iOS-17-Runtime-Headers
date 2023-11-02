
@interface _UILoadingHandlerImageLoader : _UIImageLoader {
    id /* block */  _loadingHandler;
    NSObject<OS_dispatch_queue> * _loadingQueue;
}

- (void).cxx_destruct;
- (void)_really_loadImage:(id /* block */)arg1;
- (id)initWithLoadingQueue:(id)arg1 handler:(id /* block */)arg2;

@end
