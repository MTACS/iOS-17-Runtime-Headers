
@interface SUUIClientContextPreviewContainer : IKJSObject <SUUIClientContextPreviewContainer> {
    SUUIClientContext * _clientContext;
    SUUIPreviewContainerViewController * _previewContainerViewController;
}

- (void).cxx_destruct;
- (id)initWithAppContext:(id)arg1 clientContext:(id)arg2 previewContainerViewController:(id)arg3;
- (void)previewDocument:(id)arg1 :(id)arg2;

@end
