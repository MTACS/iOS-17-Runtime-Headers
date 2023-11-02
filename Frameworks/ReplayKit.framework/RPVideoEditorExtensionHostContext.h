
@interface RPVideoEditorExtensionHostContext : NSExtensionContext <RPVideoEditorExtensionHostProtocol> {
    RPVideoEditorHostViewController * _hostViewController;
}

@property (nonatomic) RPVideoEditorHostViewController *hostViewController;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (oneway void)extensionDidFinishWithActivityTypes:(id)arg1;
- (id)extensionObjectProxy;
- (id)hostViewController;
- (void)setHostViewController:(id)arg1;

@end
