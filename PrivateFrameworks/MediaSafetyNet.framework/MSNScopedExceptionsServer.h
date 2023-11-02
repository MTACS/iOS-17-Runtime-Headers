
@interface MSNScopedExceptionsServer : NSObject <MSNScopedExceptionsProtocol, NSXPCListenerDelegate> {
    NSMutableArray * _activeExceptions;
    NSXPCListener * _listener;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)proxiesForException:(id)arg1;
+ (id)proxyForMachServiceName:(id)arg1;
+ (id)sharedCamProxy;
+ (id)sharedMicProxy;
+ (id)sharedProxy;
+ (id)validEntitlements;
+ (id)validExceptions;

- (void).cxx_destruct;
- (void)beginException:(id)arg1;
- (void)endException:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (bool)isConnectionAllowedToAssertException:(id)arg1;
- (bool)isExceptionInEffect:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
