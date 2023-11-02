
@interface TPSTargetingValidateOperation : TPSAsyncOperation {
    NSString * _context;
    long long  _result;
    TPSTargetingValidation * _validator;
}

@property (nonatomic, copy) NSString *context;
@property (nonatomic) long long result;
@property (nonatomic, readonly) TPSTargetingValidation *validator;

- (void).cxx_destruct;
- (void)cancel;
- (id)context;
- (id)description;
- (id)initWithTargetingCondition:(id)arg1;
- (void)main;
- (long long)result;
- (void)setContext:(id)arg1;
- (void)setResult:(long long)arg1;
- (id)validator;

@end
