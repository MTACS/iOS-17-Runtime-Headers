
@interface AUHostExtensionContext : NSExtensionContext {
    AUHostDelegate * _delegate;
    NSExtension * _extension;
}

@property (nonatomic, retain) AUHostDelegate *delegate;
@property (nonatomic, retain) NSExtension *extension;
@property (nonatomic, readonly) NSXPCConnection *xpcConnection;

+ (id)_allowedItemPayloadClasses;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (bool)conformsToProtocol:(id)arg1;

- (void).cxx_destruct;
- (id)_derivedExtensionAuxiliaryHostProtocol;
- (bool)conformsToProtocol:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)extension;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)setExtension:(id)arg1;
- (id)xpcConnection;

@end
