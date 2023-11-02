
@interface AMSMultiUserService : NSObject <AMSMachService>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_createXPCConnection;
+ (bool)isConnectionEntitled:(id)arg1;
+ (id)machServiceName;
+ (id)proxyObject;
+ (id)proxyObjectAsync;
+ (id)serviceInterface;
+ (void)setSharedConnection:(id)arg1;
+ (id)sharedConnection;
+ (id)sharedConnectionAccessQueue;

@end
