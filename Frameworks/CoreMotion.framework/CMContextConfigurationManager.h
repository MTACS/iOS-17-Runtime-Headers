
@interface CMContextConfigurationManager : NSObject {
    NSObject<OS_dispatch_queue> * fInternalQueue;
    void * fLocationdConnection;
}

- (void)connect;
- (void)dealloc;
- (void)disconnect;
- (id)init;
- (void)writeContextConfiguration:(id)arg1 withHandler:(id /* block */)arg2;

@end
