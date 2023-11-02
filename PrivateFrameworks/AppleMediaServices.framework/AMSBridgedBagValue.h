
@interface AMSBridgedBagValue : AMSFrozenBagValue {
    AMSPromise * _valuePromise;
}

@property (nonatomic, retain) AMSPromise *valuePromise;

- (void).cxx_destruct;
- (id)initWithKey:(id)arg1 valueType:(unsigned long long)arg2 valuePromise:(id)arg3;
- (void)setValuePromise:(id)arg1;
- (id)valuePromise;
- (void)valueWithCompletion:(id /* block */)arg1;

@end
