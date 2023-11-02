
@interface _UIActivityResourceLoader : NSObject {
    NSObject<OS_dispatch_group> * _group;
    id /* block */  _loadBlock;
    NSObject<OS_dispatch_queue> * _queue;
    id  _resource;
}

- (void).cxx_destruct;
- (void)_getResourceWithBlock:(id /* block */)arg1;
- (void)_loadResourceWithBlock:(id /* block */)arg1;
- (void)getResourceWithBlock:(id /* block */)arg1;
- (id)initWithQueue:(id)arg1 loadBlock:(id /* block */)arg2;
- (void)loadResourceIfNeeded;

@end
