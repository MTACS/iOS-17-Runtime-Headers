
@interface NPKIDVRemoteDeviceServiceServer : PDXPCService <NPKIDVRemoteDeviceServiceServerProtocol> {
    <NPKIDVRemoteDeviceServiceServerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NPKIDVRemoteDeviceServiceServerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (void)didReceiveEvent:(unsigned long long)arg1 fromRemoteDeviceWithID:(id)arg2 ackHandler:(id /* block */)arg3;
- (id)initWithConnection:(id)arg1 delegate:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
