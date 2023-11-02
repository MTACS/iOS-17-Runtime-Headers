
@interface ANXPCManager : NSObject {
    void _connection;
    void _needsCheckIn;
    void checkInObservers;
    void checkInProvider;
    void delegate;
    void exportedInterface;
    void exportedObject;
    void isConnectionValid;
    void lock;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void machServiceName;
    void notifyRegisterToken;
    void remoteObjectInterface;
}

@property (nonatomic) <ANXPCManagerCheckInProvider> *checkInProvider;
@property (nonatomic, readonly) NSXPCConnection *connection;
@property (nonatomic) <ANXPCManagerDelegate> *delegate;

- (void).cxx_destruct;
- (void)addCheckInObserver:(id)arg1;
- (id)checkInProvider;
- (id)connection;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedInterface:(id)arg3 exportedObject:(id)arg4;
- (void)setCheckInProvider:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
