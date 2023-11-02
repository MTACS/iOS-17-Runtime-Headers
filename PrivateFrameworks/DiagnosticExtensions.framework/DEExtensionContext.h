
@interface DEExtensionContext : NSExtensionContext <DEExtensionVendorProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)attachmentListWithHandler:(id /* block */)arg1;
- (void)attachmentsForParameters:(id)arg1 withHandler:(id /* block */)arg2;
- (bool)hasEntitlement;
- (void)isExtensionEnhancedLoggingStateOnWithHandler:(id /* block */)arg1;
- (void)setupWithParameters:(id)arg1 withHandler:(id /* block */)arg2;
- (void)teardownWithParameters:(id)arg1 withHandler:(id /* block */)arg2;

@end
