
@interface RPVideoEditorHostViewController : _UIRemoteViewController <RPVideoEditorExtensionHostProtocol> {
    RPVideoEditorExtensionHostContext * _hostContext;
    RPPreviewViewController * _previewViewController;
}

@property (nonatomic, retain) RPVideoEditorExtensionHostContext *hostContext;
@property (nonatomic) RPPreviewViewController *previewViewController;

- (void).cxx_destruct;
- (oneway void)extensionDidFinishWithActivityTypes:(id)arg1;
- (id)hostContext;
- (id)previewViewController;
- (void)setHostContext:(id)arg1;
- (void)setPreviewViewController:(id)arg1;

@end
