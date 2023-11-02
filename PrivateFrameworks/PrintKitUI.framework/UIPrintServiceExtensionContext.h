
@interface UIPrintServiceExtensionContext : NSExtensionContext

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)_gatherPrintersForPrintInfo:(id)arg1 reply:(id /* block */)arg2;
- (void)dealloc;
- (id)init;

@end
