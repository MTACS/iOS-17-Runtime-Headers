
@interface TPSServiceConnection : NSObject <_TPSXPCExportable> {
    _TPSXPCConnection * _connection;
    NSXPCInterface * _exportedInterfaceInstance;
    NSXPCInterface * _remoteInterfaceInstance;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSXPCInterface *exportedInterfaceInstance;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSXPCInterface *remoteInterfaceInstance;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)connection;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)exportedInterfaceInstance;
- (void)invalidate;
- (id)remoteInterface;
- (id)remoteInterfaceInstance;
- (void)setExportedInterfaceInstance:(id)arg1;
- (void)setRemoteInterfaceInstance:(id)arg1;

@end
