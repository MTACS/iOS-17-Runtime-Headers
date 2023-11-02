
@interface STStorageOperation : NSOperation {
    NSError * _error;
    id  _output;
}

@property (retain) NSError *error;
@property (retain) id output;

- (void).cxx_destruct;
- (id)error;
- (id)output;
- (void)setError:(id)arg1;
- (void)setOutput:(id)arg1;

@end
