
@interface CSSmartSiriVolumeClient : NSObject <CSSmartSiriVolumeServiceDelegate> {
    <CSSmartSiriVolumeClientDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    NSXPCConnection * _ssvConnection;
}

@property (nonatomic) <CSSmartSiriVolumeClientDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSXPCConnection *ssvConnection;

- (void).cxx_destruct;
- (void)_createClientConnection;
- (id)_getRemoteServiceProxyObject;
- (void)dealloc;
- (id)delegate;
- (void)didTTSVolumeChangeForReason:(unsigned long long)arg1;
- (id)getVolumeForTTSType:(unsigned long long)arg1 withContext:(id)arg2;
- (id)init;
- (id)queue;
- (void)setDelegate:(id)arg1;
- (void)setPermanentVolumeOffsetWithDirection:(bool)arg1;
- (void)setQueue:(id)arg1;
- (void)setSmartSiriVolumeDirection:(bool)arg1;
- (void)setSmartSiriVolumePercentage:(float)arg1;
- (void)setSsvConnection:(id)arg1;
- (id)ssvConnection;

@end
