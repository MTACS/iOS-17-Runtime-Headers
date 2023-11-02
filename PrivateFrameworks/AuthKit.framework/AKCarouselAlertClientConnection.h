
@interface AKCarouselAlertClientConnection : NSObject {
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (id)sharedConnection;

- (void).cxx_destruct;
- (id)connection;
- (void)dealloc;
- (void)dismissAlert:(id)arg1;
- (id)init;
- (id)internalQueue;
- (void)presentAlertWithDictionary:(id)arg1 completion:(id /* block */)arg2;
- (void)setInternalQueue:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)unsafe_invalidate;
- (id)xpcConnection;

@end
