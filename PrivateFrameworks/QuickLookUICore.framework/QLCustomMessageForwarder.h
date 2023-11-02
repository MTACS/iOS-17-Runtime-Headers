
@interface QLCustomMessageForwarder : NSObject {
    <QLPreviewItemViewControllerDelegate> * _previewDelegate;
}

- (void).cxx_destruct;
- (void)forwardMessageToHostOfCustomViewController:(id)arg1 message:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithPreviewDelegate:(id)arg1;

@end
