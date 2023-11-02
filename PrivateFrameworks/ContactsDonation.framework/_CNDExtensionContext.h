
@interface _CNDExtensionContext : NSExtensionContext <_CNDExtensionContextProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)makeHostProtocol;
+ (id)makeVendorProtocol;

@end
