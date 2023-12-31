
@interface MFMailComposeRemoteViewController : _UIRemoteViewController <MFMailComposeRemoteHost> {
    <MFMailComposeRemoteViewControllerDelegate> * _delegate;
}

@property (nonatomic) <MFMailComposeRemoteViewControllerDelegate> *delegate;

+ (id)exportedInterface;
+ (id)requestViewControllerWithConnectionHandler:(id /* block */)arg1;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)bodyFinishedDrawing;
- (id)delegate;
- (void)serviceCompositionFinishedWithResult:(long long)arg1 error:(id)arg2;
- (void)serviceCompositionRequestsSendWithBody:(id)arg1 recipients:(id)arg2 completion:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
