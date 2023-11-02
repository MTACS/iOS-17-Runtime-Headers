
@interface AccessoryDetection : NSObject <ACCConnectionInfoDelegateProtocol> {
    void * _aabc;
    ACCConnectionInfo * _connection;
    NSObject<OS_os_log> * _logHandle;
    NSString * _sleeveUUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)accessoryEndpointAttached:(id)arg1 transportType:(int)arg2 protocol:(int)arg3 properties:(id)arg4 forConnection:(id)arg5;
- (void)accessoryEndpointDetached:(id)arg1 forConnection:(id)arg2;
- (id)initWithAABC:(void*)arg1;
- (void)start;
- (void)stop;

@end
