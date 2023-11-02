
@interface SidecarSession : NSObject {
    long long  _dataLink;
    <SidecarSessionDelegate> * _delegate;
    SidecarDevice * _device;
    long long  _handle;
    unsigned int  _isRemote;
    NSObject<OS_dispatch_queue> * _queue;
    SidecarService * _service;
    _Atomic long long  _state;
    long long  _transport;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) int dataLink;
@property <SidecarSessionDelegate> *delegate;
@property (nonatomic, readonly) SidecarDevice *device;
@property (readonly) long long handle;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) SidecarService *service;
@property (nonatomic, readonly) long long transport;
@property (readonly) NSUUID *uuid;

- (void).cxx_destruct;
- (void)_closeWithError:(id)arg1;
- (void)closeWithError:(id)arg1 completion:(id /* block */)arg2;
- (void)connectWithTransport:(long long)arg1 reconnectToSession:(id)arg2;
- (int)dataLink;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)device;
- (long long)handle;
- (id)init;
- (id)initWithRemote:(id)arg1 device:(id)arg2 dataLink:(int)arg3 service:(id)arg4 error:(id*)arg5;
- (id)initWithService:(id)arg1 device:(id)arg2;
- (void)listenForStreamType:(long long)arg1 flags:(unsigned long long)arg2 identifier:(id)arg3 processUniqueID:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)openStreamForType:(long long)arg1 flags:(unsigned long long)arg2 identifier:(id)arg3 processUniqueID:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (id)queue;
- (void)sendMessage:(id)arg1 completion:(id /* block */)arg2;
- (id)service;
- (void)setDelegate:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)timeSyncWithCompletion:(id /* block */)arg1;
- (long long)transport;
- (id)uuid;

@end
