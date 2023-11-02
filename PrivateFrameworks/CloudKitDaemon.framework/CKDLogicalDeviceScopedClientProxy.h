
@interface CKDLogicalDeviceScopedClientProxy : NSObject {
    CKDXPCConnection * _clientConnection;
    CKDLogicalDeviceContext * _deviceContext;
    bool  _hasBeenThrottled;
    <CKXPCLogicalDeviceScopedClient> * _logicalDeviceScopedClientProxyCreator;
    int  _pid;
}

@property (nonatomic) CKDXPCConnection *clientConnection;
@property (nonatomic, retain) CKDLogicalDeviceContext *deviceContext;
@property bool hasBeenThrottled;
@property (nonatomic, retain) <CKXPCLogicalDeviceScopedClient> *logicalDeviceScopedClientProxyCreator;
@property (nonatomic) int pid;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)_getLogicalDeviceScopedClientProxyCreatorSynchronous:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)addThrottle:(id)arg1;
- (id)clientConnection;
- (id)description;
- (id)deviceContext;
- (void)getLogicalDeviceScopedClientProxySynchronous:(bool)arg1 errorHandler:(id /* block */)arg2 clientProxyHandler:(id /* block */)arg3;
- (bool)hasBeenThrottled;
- (id)initWithClientConnection:(id)arg1 deviceContext:(id)arg2;
- (id)logicalDeviceScopedClientProxyCreator;
- (id)openFileWithOpenInfo:(id)arg1 error:(id*)arg2;
- (int)pid;
- (bool)processIsAttached;
- (id)readBytesOfInMemoryAssetContentWithUUID:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3 error:(id*)arg4;
- (void)resetThrottles;
- (void)setClientConnection:(id)arg1;
- (void)setDeviceContext:(id)arg1;
- (void)setHasBeenThrottled:(bool)arg1;
- (void)setLogicalDeviceScopedClientProxyCreator:(id)arg1;
- (void)setPid:(int)arg1;
- (void)tearDown;

@end
