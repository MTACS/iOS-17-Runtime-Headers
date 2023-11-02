
@interface WFRemoteActionUserInterface : NSObject <WFActionRemoteUserInterface> {
    NSXPCConnection * _connection;
    id /* block */  _onInterfaceInterruption;
    <WFActionRemoteUserInterface> * _remoteUserInterface;
    NSString * _userInterfaceType;
}

@property (nonatomic, readonly) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ onInterfaceInterruption;
@property (nonatomic, readonly) <WFActionRemoteUserInterface> *remoteUserInterface;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *userInterfaceType;

- (void).cxx_destruct;
- (bool)conformsToProtocol:(id)arg1;
- (id)connection;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithUserInterfaceType:(id)arg1 listenerEndpoint:(id)arg2 interface:(id)arg3;
- (id /* block */)onInterfaceInterruption;
- (id)remoteUserInterface;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setOnInterfaceInterruption:(id /* block */)arg1;
- (id)userInterfaceType;

@end
