
@interface NFHardwareManagerXPC : NSObject {
    long long  _clientCount;
    NSHashTable * _delegates;
    NSXPCConnection * _xpcConnection;
    NSObject<OS_dispatch_queue> * _xpcQueue;
}

@property (readonly) NSXPCConnection *connection;

+ (id)sharedXPC;

- (void).cxx_destruct;
- (void)addDelegate:(id)arg1;
- (id)connection;
- (id)init;
- (void)removeDelegate:(id)arg1;

@end
