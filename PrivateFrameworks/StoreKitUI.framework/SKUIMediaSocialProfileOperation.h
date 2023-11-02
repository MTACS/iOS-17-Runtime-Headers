
@interface SKUIMediaSocialProfileOperation : SSVComplexOperation {
    NSLock * _lock;
    id /* block */  _outputBlock;
}

@property (copy) id /* block */ outputBlock;

- (void).cxx_destruct;
- (id)_profileWithResponseDictionary:(id)arg1;
- (id)init;
- (id)initWithClientContext:(id)arg1;
- (void)main;
- (id /* block */)outputBlock;
- (void)setOutputBlock:(id /* block */)arg1;

@end
