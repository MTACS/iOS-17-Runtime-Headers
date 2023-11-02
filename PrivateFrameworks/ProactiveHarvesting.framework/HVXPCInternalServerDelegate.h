
@interface HVXPCInternalServerDelegate : NSObject <NSXPCListenerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)server;
+ (void)start;

- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
