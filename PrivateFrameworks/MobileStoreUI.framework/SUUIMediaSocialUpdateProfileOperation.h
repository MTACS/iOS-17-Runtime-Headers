
@interface SUUIMediaSocialUpdateProfileOperation : SSVComplexOperation {
    SUUIClientContext * _clientContext;
    NSString * _entityType;
    NSNumber * _identifier;
    NSLock * _lock;
    id /* block */  _outputBlock;
    NSMutableDictionary * _parameters;
}

@property (copy) NSString *entityType;
@property (copy) NSNumber *identifier;
@property (copy) id /* block */ outputBlock;

- (void).cxx_destruct;
- (id)_imageDictionaryFromPhotoUpload:(id)arg1;
- (id)_requestBodyWithError:(id*)arg1;
- (id)_requestWithError:(id*)arg1;
- (id)entityType;
- (id)identifier;
- (id)initWithClientContext:(id)arg1;
- (void)main;
- (id /* block */)outputBlock;
- (void)setEntityType:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setOutputBlock:(id /* block */)arg1;
- (void)setValue:(id)arg1 forProfileField:(id)arg2;

@end
