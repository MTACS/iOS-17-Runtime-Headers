
@interface VSTestSetupPreparationOperation : VSAsyncOperation {
    NSArray * _errors;
    NSOperationQueue * _privateQueue;
}

@property (nonatomic, retain) NSArray *errors;
@property (nonatomic, retain) NSOperationQueue *privateQueue;

- (void).cxx_destruct;
- (void)addError:(id)arg1;
- (id)errors;
- (void)executionDidBegin;
- (id)init;
- (id)privateQueue;
- (void)setErrors:(id)arg1;
- (void)setPrivateQueue:(id)arg1;

@end
