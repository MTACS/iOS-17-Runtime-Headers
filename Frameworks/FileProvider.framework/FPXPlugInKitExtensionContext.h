
@interface FPXPlugInKitExtensionContext : NSExtensionContext {
    FPXExtensionContext * _context;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (Class)principalClass;
+ (void)setPrincipalClass:(Class)arg1;

- (void).cxx_destruct;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;

@end
