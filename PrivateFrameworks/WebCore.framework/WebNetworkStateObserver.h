
@interface WebNetworkStateObserver : NSObject {
    struct BlockPtr<void ()>="m_block"@? {}  block;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)arg1;
- (void)networkStateChanged:(id)arg1;

@end
