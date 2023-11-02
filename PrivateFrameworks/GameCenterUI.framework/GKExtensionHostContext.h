
@interface GKExtensionHostContext : NSExtensionContext <GKExtensionHostProtocol> {
    GKExtensionRemoteViewController * _remoteViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) GKExtensionRemoteViewController *remoteViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)messageFromExtension:(id)arg1;
- (id)remoteViewController;
- (void)setRemoteViewController:(id)arg1;

@end
