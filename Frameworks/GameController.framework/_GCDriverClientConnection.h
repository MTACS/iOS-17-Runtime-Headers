
@interface _GCDriverClientConnection : _GCIPCRemoteIncomingConnection <_GCDeviceDriverConnection>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <_GCDriverServerInterface> *exportedObject;
@property (readonly) unsigned long long hash;
@property (getter=isInvalid, nonatomic, readonly) bool invalid;
@property (readonly) Class superclass;

- (id)connectToDeviceService:(id)arg1 withClient:(id)arg2;
- (void)connectToDeviceService:(id)arg1 withClient:(id)arg2 reply:(id /* block */)arg3;
- (id)exportedObject;
- (id)initWithConnection:(id)arg1 fromProcess:(id)arg2;
- (void)setExportedObject:(id)arg1;

@end
