
@interface _UIViewServiceViewControllerDeputyXPCInterface : NSObject <_UIViewServiceDeputyXPCInterface> {
    NSXPCInterface * _exportedInterface;
    NSXPCInterface * _remoteViewControllerInterface;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)interfaceWithExportedInterface:(id)arg1 remoteViewControllerInterface:(id)arg2;

- (void).cxx_destruct;
- (id)connectionInvocation;
- (id)connectionProtocol;
- (SEL)connectionSelector;
- (id)exportedInterface;
- (id)hostObjectInterface;

@end
