
@interface INExtensionContextHost : NSExtensionContext <INExtensionContextHosting> {
    NSBundle * _extensionBundle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSBundle *extensionBundle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_allowedItemPayloadClasses;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (id)extensionBundle;
- (void)setExtensionBundle:(id)arg1;

@end
