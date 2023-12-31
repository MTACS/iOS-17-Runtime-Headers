
@interface SKUIRedeemStepViewController : UIViewController {
    SKUIClientContext * _clientContext;
    SKUIRedeemConfiguration * _configuration;
    NSOperationQueue * _operationQueue;
    <SKUIRedeemStepDelegate> * _redeemStepDelegate;
}

@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (nonatomic, retain) SKUIRedeemConfiguration *configuration;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (nonatomic) <SKUIRedeemStepDelegate> *redeemStepDelegate;
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
