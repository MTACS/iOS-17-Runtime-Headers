
@interface INUIVoiceShortcutHostContext : NSExtensionContext <INUIVoiceShortcutRemoteHostingInterface> {
    <INUIVoiceShortcutRemoteHostingInterface> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <INUIVoiceShortcutRemoteHostingInterface> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_allowedItemPayloadClasses;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (id)delegate;
- (void)remoteViewControllerDidCancel;
- (void)remoteViewControllerDidCreateVoiceShortcut:(id)arg1 error:(id)arg2;
- (void)remoteViewControllerDidDeleteVoiceShortcutWithIdentifier:(id)arg1;
- (void)remoteViewControllerDidUpdateVoiceShortcut:(id)arg1 error:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
