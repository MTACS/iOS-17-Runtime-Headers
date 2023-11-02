
@interface SFAirDropClassroomTransferManager : SFXPCClient <SFAirDropClassroomTransferManagerProtocol> {
    <SFAirDropClassroomTransferDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFAirDropClassroomTransferDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_getRemoteObjectProxyOnQueue:(id /* block */)arg1;
- (void)activate;
- (id)delegate;
- (id)exportedInterface;
- (void)invalidate;
- (id)machServiceName;
- (id)remoteObjectInterface;
- (void)setDelegate:(id)arg1;
- (bool)shouldEscapeXpcTryCatch;
- (void)transferWithIdentifierWasAccepted:(id)arg1;
- (void)transferWithIdentifierWasDeclined:(id)arg1 withFailureReason:(unsigned long long)arg2;
- (void)updateTransferWithIdentifier:(id)arg1 withState:(long long)arg2 information:(id)arg3 completionHandler:(id /* block */)arg4;

@end
