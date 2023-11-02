
@interface CKCustomBlockValidator : CKPredicateValidatorInstance {
    id /* block */  _block;
}

@property (nonatomic, copy) id /* block */ block;

- (void).cxx_destruct;
- (id /* block */)block;
- (id)initWithBlock:(id /* block */)arg1;
- (void)setBlock:(id /* block */)arg1;
- (bool)validate:(id)arg1 error:(id*)arg2;

@end
