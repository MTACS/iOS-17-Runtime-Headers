
@interface DDRemoteActionViewServiceContext : NSExtensionContext <DDRemoteActionViewServiceProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_allowedItemPayloadClasses;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)enableUserInteraction:(bool)arg1;
- (void)prepareViewControllerWithContext:(id)arg1 completionHandler:(id /* block */)arg2;

@end
