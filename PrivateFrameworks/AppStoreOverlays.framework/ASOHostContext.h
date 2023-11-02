
@interface ASOHostContext : NSExtensionContext <ASOHostProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)dismissOverlayWithReply:(id /* block */)arg1;
- (void)presentOverlayWithConfiguration:(id)arg1 delegate:(id)arg2 reply:(id /* block */)arg3;
- (id)serviceContext;

@end
