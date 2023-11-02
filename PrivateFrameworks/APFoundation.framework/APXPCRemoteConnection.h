
@interface APXPCRemoteConnection : NSObject {
    NSMutableArray * _delegates;
    NSString * _machService;
    int  _numClients;
    APUnfairLock * _unfairLock;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, retain) NSMutableArray *delegates;
@property (nonatomic, readonly) NSString *machService;
@property (nonatomic) int numClients;
@property (nonatomic, readonly) APUnfairLock *unfairLock;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (void)addSharedConnection:(id)arg1 forMachService:(id)arg2;
+ (id)connectionFor:(id)arg1;
+ (id)connectionForMachService:(id)arg1;
+ (void)removeSharedConnectionForMachService:(id)arg1;
+ (id)sharedConnectionFor:(id)arg1;
+ (id)sharedConnections;

- (void).cxx_destruct;
- (void)addDelegate:(id)arg1;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (void)dealloc;
- (void)decreaseConnectionCount;
- (id)delegates;
- (void)increaseConnectionCount;
- (id)initWithDelegate:(id)arg1;
- (void)invalidateForDelegate:(id)arg1;
- (id)machService;
- (int)numClients;
- (void)removeDelegate:(id)arg1;
- (void)setDelegates:(id)arg1;
- (void)setNumClients:(int)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)unfairLock;
- (id)xpcConnection;

@end
