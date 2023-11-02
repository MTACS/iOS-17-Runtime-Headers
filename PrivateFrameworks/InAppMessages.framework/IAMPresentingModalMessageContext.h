
@interface IAMPresentingModalMessageContext : NSObject {
    IAMMessage * _message;
    IAMMessageGroup * _messageGroup;
    NSTimer * _presentationExpirationTimer;
    id /* block */  _presentationHandler;
    UIViewController * _presentingViewController;
}

@property (nonatomic, retain) IAMMessage *message;
@property (nonatomic, retain) IAMMessageGroup *messageGroup;
@property (nonatomic, retain) NSTimer *presentationExpirationTimer;
@property (nonatomic, copy) id /* block */ presentationHandler;
@property (nonatomic) UIViewController *presentingViewController;

- (void).cxx_destruct;
- (id)initWithMessage:(id)arg1 messageGroup:(id)arg2 presentingViewController:(id)arg3 presentationExpirationTimer:(id)arg4 presentationHandler:(id /* block */)arg5;
- (id)message;
- (id)messageGroup;
- (id)presentationExpirationTimer;
- (id /* block */)presentationHandler;
- (id)presentingViewController;
- (void)setMessage:(id)arg1;
- (void)setMessageGroup:(id)arg1;
- (void)setPresentationExpirationTimer:(id)arg1;
- (void)setPresentationHandler:(id /* block */)arg1;
- (void)setPresentingViewController:(id)arg1;

@end
