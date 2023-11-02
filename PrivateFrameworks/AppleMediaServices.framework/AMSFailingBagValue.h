
@interface AMSFailingBagValue : AMSFrozenBagValue {
    NSError * _error;
}

@property (nonatomic, retain) NSError *error;

- (void).cxx_destruct;
- (id)error;
- (id)initWithKey:(id)arg1 valueType:(unsigned long long)arg2 error:(id)arg3;
- (void)setError:(id)arg1;
- (void)valueWithCompletion:(id /* block */)arg1;

@end
