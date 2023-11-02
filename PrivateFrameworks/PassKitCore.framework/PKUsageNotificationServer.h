
@interface PKUsageNotificationServer : NSObject <NSXPCListenerDelegate, PKUsageNotificationServerExportedInterface> {
    NSMutableSet * _connections;
    NSXPCListener * _listener;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)initializeUsageNotificationServer;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)notifyPassUsed:(id)arg1 fromSource:(long long)arg2;
- (void)notifyPaymentPassUsedWithTransactionInfo:(id)arg1;
- (void)serviceResumed;
- (void)serviceSuspended;

@end
