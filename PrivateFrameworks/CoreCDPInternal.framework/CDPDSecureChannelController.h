
@interface CDPDSecureChannelController : NSObject {
    CDPDSecureChannelContext * _secureChannelContext;
}

- (void).cxx_destruct;
- (void)_processAndReplyWithMessage:(id)arg1 completion:(id /* block */)arg2;
- (void)_startListeningWithProxy:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)joinCircle:(id /* block */)arg1;
- (void)startCircleApplicationApprovalServerWithContext:(id)arg1 completion:(id /* block */)arg2;

@end
