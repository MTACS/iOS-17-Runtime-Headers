
@interface PLResultSuccess : PLResult {
    id  _result;
}

- (void).cxx_destruct;
- (id)description;
- (id)error;
- (id)initWithResult:(id)arg1;
- (bool)isFailure;
- (bool)isSuccess;
- (id)result;
- (id)resultWithError:(id*)arg1;

@end
