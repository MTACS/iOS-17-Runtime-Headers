
@interface TUUserNotificationProviderXPCClient : NSObject <TUUserNotificationProviderDataSource, TUUserNotificationsProviderXPCServer> {
    NSObject<OS_dispatch_queue> * _queue;
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (id)asynchronousServer;
+ (void)setAsynchronousServer:(id)arg1;
+ (void)setSynchronousServer:(id)arg1;
+ (id)synchronousServer;
+ (id)userNotificationProviderServerXPCInterface;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (oneway void)momentCapturedForStreamToken:(long long)arg1 requesterID:(id)arg2 reply:(id /* block */)arg3;
- (id)queue;
- (id)serverWithErrorHandler:(id /* block */)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)synchronousServerWithErrorHandler:(id /* block */)arg1;
- (id)xpcConnection;

@end
