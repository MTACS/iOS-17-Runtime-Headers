
@interface SUUIRedeemStepViewController : UIViewController {
    SUUIClientContext * _clientContext;
    SUUIRedeemConfiguration * _configuration;
    NSOperationQueue * _operationQueue;
    <SUUIRedeemStepDelegate> * _redeemStepDelegate;
}

@property (nonatomic, retain) SUUIClientContext *clientContext;
@property (nonatomic, retain) SUUIRedeemConfiguration *configuration;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (nonatomic) <SUUIRedeemStepDelegate> *redeemStepDelegate;
@property (nonatomic, readonly) bool shouldShowPassbookLearnMore;

- (void).cxx_destruct;
- (id)clientContext;
- (id)configuration;
- (id)operationQueue;
- (id)redeemStepDelegate;
- (void)setClientContext:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setRedeemStepDelegate:(id)arg1;
- (bool)shouldShowPassbookLearnMore;

@end
