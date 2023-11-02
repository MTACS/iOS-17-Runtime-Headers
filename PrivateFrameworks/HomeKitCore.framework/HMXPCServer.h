
@interface HMXPCServer : NSObject {
    HMXPCServerInternal * _xpcServer;
}

@property (nonatomic, readonly) HMXPCServerInternal *xpcServer;

- (void).cxx_destruct;
- (id)initWithStoreURL:(id)arg1;
- (void)start;
- (id)xpcServer;

@end
