
@interface _LSInstaller : NSObject <LSInstallationServiceProtocol> {
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (void)performShimmedInstallOfArtifact:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)performShimmedUninstallOfApplicationWithIdentifier:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)setXpcConnection:(id)arg1;
- (id)xpcConnection;

@end
