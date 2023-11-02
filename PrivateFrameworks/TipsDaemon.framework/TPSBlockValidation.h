
@interface TPSBlockValidation : TPSTargetingValidation {
    id /* block */  _validationBlock;
}

@property (nonatomic, copy) id /* block */ validationBlock;

+ (id)blockValidationWithBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)initWithValidationBlock:(id /* block */)arg1;
- (void)setValidationBlock:(id /* block */)arg1;
- (void)validateWithCompletion:(id /* block */)arg1;
- (id /* block */)validationBlock;

@end
