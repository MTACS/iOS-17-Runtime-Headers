
@interface AMSPromiseResult : NSObject {
    NSError * _error;
    id  _result;
}

@property (nonatomic, copy) NSError *error;
@property (nonatomic, retain) id result;

- (void).cxx_destruct;
- (id)error;
- (id)initWithResult:(id)arg1 error:(id)arg2;
- (id)result;
- (void)setError:(id)arg1;
- (void)setResult:(id)arg1;

@end
