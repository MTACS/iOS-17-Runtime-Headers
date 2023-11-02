
@interface PKMetalConfig : NSObject {
    <MTLDevice> * _device;
    bool  _privateResourceHandler;
    NSObject<OS_dispatch_queue> * _renderQueue;
    PKMetalResourceHandler * _resourceHandler;
}

- (void).cxx_destruct;
- (id)init;

@end
