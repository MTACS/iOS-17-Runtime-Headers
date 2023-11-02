
@interface ISKVOProxyRecord : NSObject {
    ISKVOProxy * _proxy;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) ISKVOProxy *proxy;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)initWithProxy:(id)arg1 queue:(id)arg2;
- (id)proxy;
- (id)queue;

@end
