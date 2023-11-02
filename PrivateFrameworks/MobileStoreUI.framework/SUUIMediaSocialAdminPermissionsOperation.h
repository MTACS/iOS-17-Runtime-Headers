
@interface SUUIMediaSocialAdminPermissionsOperation : SSVComplexOperation {
    SUUIClientContext * _clientContext;
    id /* block */  _outputBlock;
}

@property (copy) id /* block */ outputBlock;

- (void).cxx_destruct;
- (id)_authorsWithResponseDictionary:(id)arg1;
- (id)_lookupResponseForMissingAuthors:(id)arg1 error:(id*)arg2;
- (id)initWithClientContext:(id)arg1;
- (void)main;
- (id /* block */)outputBlock;
- (void)setOutputBlock:(id /* block */)arg1;

@end
