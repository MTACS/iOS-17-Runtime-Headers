
@interface PKPeerPaymentMessageComposeController : NSObject <MFMessageComposeViewControllerDelegate> {
    id /* block */  _completionHandler;
    UIViewController * _currentHostController;
    MSMessage * _message;
    NSString * _recipientAddress;
}

@property (nonatomic) UIViewController *currentHostController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MSMessage *message;
@property (nonatomic, readonly, copy) NSString *recipientAddress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)currentHostController;
- (id)initWithMessage:(id)arg1 recipientAddress:(id)arg2;
- (id)message;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)presentMessageOverController:(id)arg1 presentationHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)recipientAddress;
- (void)setCurrentHostController:(id)arg1;

@end
