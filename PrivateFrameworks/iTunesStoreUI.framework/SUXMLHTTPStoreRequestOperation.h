
@interface SUXMLHTTPStoreRequestOperation : ISOperation {
    SSAuthenticationContext * _authenticationContext;
    ISDataProvider * _dataProvider;
    id /* block */  _outputBlock;
    SSURLRequestProperties * _requestProperties;
}

@property (nonatomic, retain) SSAuthenticationContext *authenticationContext;
@property (nonatomic, retain) ISDataProvider *dataProvider;
@property (copy) id /* block */ outputBlock;

- (void).cxx_destruct;
- (id)authenticationContext;
- (id)dataProvider;
- (id)initWithRequestProperties:(id)arg1;
- (id /* block */)outputBlock;
- (void)run;
- (void)setAuthenticationContext:(id)arg1;
- (void)setDataProvider:(id)arg1;
- (void)setOutputBlock:(id /* block */)arg1;

@end
