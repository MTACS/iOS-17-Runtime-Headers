
@interface GKMatchmakerExtensionHostContext : GKExtensionHostContext <GKMatchmakerHostProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)shareMatchWithRequest:(id)arg1 handler:(id /* block */)arg2;

@end
