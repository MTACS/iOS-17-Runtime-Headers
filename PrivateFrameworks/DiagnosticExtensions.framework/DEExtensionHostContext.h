
@interface DEExtensionHostContext : NSExtensionContext <DEExtensionHostProtocol> {
    id /* block */  _progressHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) id /* block */ progressHandler;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)attachmentListWithHandler:(id /* block */)arg1;
- (void)attachmentsForParameters:(id)arg1 withProgressHandler:(id /* block */)arg2 withHandler:(id /* block */)arg3;
- (void)collectionDidUpdateWithProgress:(id)arg1;
- (bool)hasEntitlement;
- (void)isExtensionEnhancedLoggingStateOnWithHandler:(id /* block */)arg1;
- (id /* block */)progressHandler;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setupForParameters:(id)arg1 withHandler:(id /* block */)arg2;
- (void)teardownForParameters:(id)arg1 withHandler:(id /* block */)arg2;

@end
