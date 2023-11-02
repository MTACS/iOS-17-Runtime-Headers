
@protocol IRXPCService <NSObject>

@required

- (NSArray *)machServicesNames;
- (bool)shouldAcceptNewConnection:(NSXPCConnection *)arg1;

@optional

+ (id)serviceWithQueue:(NSObject<OS_dispatch_queue> *)arg1;

@end
