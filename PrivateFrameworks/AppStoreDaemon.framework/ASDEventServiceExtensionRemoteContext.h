
@interface ASDEventServiceExtensionRemoteContext : ASDEventServiceExtensionContext <ASDEventServiceExtensionRemoteXPCInterface> {
    ASDEventServiceExtension * _extensionInstance;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) ASDEventServiceExtension *extensionInstance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)didReceiveInstallationEvent:(id)arg1;
- (id)extensionInstance;
- (void)setExtensionInstance:(id)arg1;

@end
