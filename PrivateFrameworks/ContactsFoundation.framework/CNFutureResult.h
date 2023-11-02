
@interface CNFutureResult : NSObject {
    NSError * _error;
    id  _result;
}

@property (nonatomic, copy) NSError *error;
@property (nonatomic, retain) id result;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)error;
- (id)result;
- (void)setError:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setResult:(id)arg1 error:(id)arg2;

@end
