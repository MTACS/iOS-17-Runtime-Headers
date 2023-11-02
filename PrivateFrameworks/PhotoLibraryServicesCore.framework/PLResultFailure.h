
@interface PLResultFailure : PLResult {
    NSError * _error;
}

- (void).cxx_destruct;
- (id)description;
- (id)error;
- (id)initWithError:(id)arg1;
- (bool)isFailure;
- (bool)isSuccess;
- (id)result;
- (id)resultWithError:(id*)arg1;

@end
