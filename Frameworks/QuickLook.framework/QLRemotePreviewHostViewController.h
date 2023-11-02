
@interface QLRemotePreviewHostViewController : _UIRemoteViewController {
    NSExtension * _extension;
    QLRemoteItemViewController * _remoteItemViewController;
    id  _request;
}

@property (nonatomic, retain) NSExtension *extension;
@property QLRemoteItemViewController *remoteItemViewController;
@property (nonatomic, retain) id request;

- (void).cxx_destruct;
- (id)extension;
- (id)remoteItemViewController;
- (id)request;
- (void)setExtension:(id)arg1;
- (void)setRemoteItemViewController:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
