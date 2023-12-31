
@interface SUXMLHTTPRequestOperation : ISOperation {
    id /* block */  _outputBlock;
    SSURLRequestProperties * _requestProperties;
}

@property (copy) id /* block */ outputBlock;

- (void).cxx_destruct;
- (bool)_isAllowedURL:(id)arg1 withURLBag:(id)arg2;
- (id)initWithRequestProperties:(id)arg1;
- (id /* block */)outputBlock;
- (void)run;
- (void)setOutputBlock:(id /* block */)arg1;

@end
