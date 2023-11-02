
@interface BRUploadAllFilesOperation : BROperation {
    BRContainer * _container;
    id /* block */  _uploadAllFilesCompletion;
}

@property (copy) id /* block */ uploadAllFilesCompletion;

- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)init;
- (id)initWithContainer:(id)arg1;
- (void)main;
- (void)setUploadAllFilesCompletion:(id /* block */)arg1;
- (id /* block */)uploadAllFilesCompletion;

@end
