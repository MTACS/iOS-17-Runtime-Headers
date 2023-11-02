
@interface AMSCommerceService : NSObject

+ (id)_createXPCConnection;
+ (id)proxyObject;
+ (id)proxyObjectAsync;
+ (void)setSharedConnection:(id)arg1;
+ (id)sharedConnection;
+ (id)sharedConnectionAccessQueue;

@end
