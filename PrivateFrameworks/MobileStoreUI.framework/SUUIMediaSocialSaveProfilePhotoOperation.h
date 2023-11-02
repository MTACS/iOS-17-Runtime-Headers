
@interface SUUIMediaSocialSaveProfilePhotoOperation : SSVComplexOperation {
    SUUIClientContext * _clientContext;
    NSLock * _lock;
    id /* block */  _outputBlock;
    UIImage * _photo;
}

- (void).cxx_destruct;
- (id)_photoUploadWithResponseDictionary:(id)arg1;
- (id)_requestWithError:(id*)arg1;
- (id)initWithClientContext:(id)arg1;
- (void)main;
- (id /* block */)outputBlock;
- (void)setOutputBlock:(id /* block */)arg1;
- (void)setPhoto:(id)arg1;

@end
