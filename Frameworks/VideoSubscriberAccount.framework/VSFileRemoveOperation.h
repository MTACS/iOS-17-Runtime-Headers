
@interface VSFileRemoveOperation : VSAsyncOperation {
    NSError * _error;
    NSURL * _fileURL;
}

@property (nonatomic, copy) NSError *error;
@property (nonatomic, copy) NSURL *fileURL;

- (void).cxx_destruct;
- (id)error;
- (void)executionDidBegin;
- (id)fileURL;
- (void)setError:(id)arg1;
- (void)setFileURL:(id)arg1;

@end
