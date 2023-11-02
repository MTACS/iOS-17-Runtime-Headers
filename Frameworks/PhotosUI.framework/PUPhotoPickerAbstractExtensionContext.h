
@interface PUPhotoPickerAbstractExtensionContext : NSExtensionContext

+ (id)_allowedItemPayloadClasses;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)firstPayloadFromExtensionItems:(id)arg1 completion:(id /* block */)arg2;
- (void)invalidateContext;
- (id)principalObject;
- (id)proxy;

@end
