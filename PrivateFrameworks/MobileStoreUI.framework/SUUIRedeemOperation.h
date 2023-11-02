
@interface SUUIRedeemOperation : NSOperation {
    bool  _cameraRecognized;
    SUUIClientContext * _clientContext;
    NSString * _code;
    id /* block */  _resultBlock;
}

@property (nonatomic) bool cameraRecognized;
@property (nonatomic, retain) SUUIClientContext *clientContext;
@property (copy) id /* block */ resultBlock;

- (void).cxx_destruct;
- (void)_applyThankYouDictionary:(id)arg1 toRedeem:(id)arg2;
- (id)_authenticationContext;
- (id)_itemsForItemIdentifiers:(id)arg1;
- (id)_performRequestWithProperties:(id)arg1 error:(id*)arg2;
- (id)_redeemForSuccessDictionary:(id)arg1;
- (id)_requestPropertiesForThankYouWithURL:(id)arg1;
- (bool)cameraRecognized;
- (id)clientContext;
- (id)initWithCode:(id)arg1;
- (void)main;
- (id /* block */)resultBlock;
- (void)setCameraRecognized:(bool)arg1;
- (void)setClientContext:(id)arg1;
- (void)setResultBlock:(id /* block */)arg1;

@end
