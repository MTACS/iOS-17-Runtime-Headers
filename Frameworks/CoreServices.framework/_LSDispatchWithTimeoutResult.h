
@interface _LSDispatchWithTimeoutResult : NSObject {
    NSError * _error;
    id  _result;
}

@property (retain) NSError *error;
@property (retain) id result;

- (void).cxx_destruct;
- (id)error;
- (id)result;
- (void)setError:(id)arg1;
- (void)setResult:(id)arg1;

@end
