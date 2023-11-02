
@interface SUUIRedeemPreflightOperation : NSOperation {
    SUUIClientContext * _clientContext;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _forcesAuthentication;
    bool  _loadsRedeemCodeMetadata;
    id /* block */  _outputBlock;
    NSString * _redeemCode;
    SUUIRedeemConfiguration * _redeemConfiguration;
    SUUIRedeemViewControllerLegacy * _redeemViewController;
}

@property (nonatomic) bool forcesAuthentication;
@property bool loadsRedeemCodeMetadata;
@property (copy) id /* block */ outputBlock;
@property (retain) SUUIRedeemConfiguration *redeemConfiguration;
@property (nonatomic) SUUIRedeemViewControllerLegacy *redeemViewController;

- (void).cxx_destruct;
- (id)_authenticationContext;
- (id)_initSUUIRedeemPreflightOperation;
- (id)_redeemCodeMetadataWithClientContext:(id)arg1;
- (bool)forcesAuthentication;
- (id)init;
- (id)initWithClientContext:(id)arg1 redeemCode:(id)arg2 forcesAuthentication:(bool)arg3;
- (bool)loadsRedeemCodeMetadata;
- (void)main;
- (id /* block */)outputBlock;
- (id)redeemConfiguration;
- (id)redeemViewController;
- (void)setForcesAuthentication:(bool)arg1;
- (void)setLoadsRedeemCodeMetadata:(bool)arg1;
- (void)setOutputBlock:(id /* block */)arg1;
- (void)setRedeemConfiguration:(id)arg1;
- (void)setRedeemViewController:(id)arg1;

@end
