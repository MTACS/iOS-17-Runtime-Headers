
@interface WFShowWebPageActionUIKitUserInterface : WFEmbeddableActionUserInterface <SFSafariViewControllerDelegate, UIAdaptivePresentationControllerDelegate, WFShowWebPageActionUserInterface, WFWebViewControllerDelegate> {
    id /* block */  _completionHandler;
    WFFileRepresentation * _richTextFile;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WFFileRepresentation *richTextFile;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *userInterfaceType;

- (void).cxx_destruct;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)arg1;
- (id /* block */)completionHandler;
- (void)finishWithError:(id)arg1;
- (void)presentationControllerDidDismiss:(id)arg1;
- (id)richTextFile;
- (void)safariViewControllerDidFinish:(id)arg1;
- (void)safariViewControllerWillOpenInBrowser:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setRichTextFile:(id)arg1;
- (void)showRichText:(id)arg1 completion:(id /* block */)arg2;
- (void)showURL:(id)arg1 readerView:(bool)arg2 completion:(id /* block */)arg3;
- (void)webViewControllerDidFinish:(id)arg1;

@end
