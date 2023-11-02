
@interface ICPostToInstagramAction : ICDocumentAction {
    WFFileRepresentation * _instagramRepresentation;
}

@property (nonatomic, retain) WFFileRepresentation *instagramRepresentation;

- (void).cxx_destruct;
- (void)appDidResume:(id)arg1;
- (void)dealloc;
- (id)inputContentClasses;
- (id)instagramRepresentation;
- (void)performActionWithInput:(id)arg1 parameters:(id)arg2 userInterface:(id)arg3 successHandler:(id /* block */)arg4 errorHandler:(id /* block */)arg5;
- (void)setInstagramRepresentation:(id)arg1;
- (void)shareAsALAssetWithItem:(id)arg1 caption:(id)arg2 userInterface:(id)arg3 successHandler:(id /* block */)arg4 errorHandler:(id /* block */)arg5;
- (void)shareAsImageFileWithItem:(id)arg1 caption:(id)arg2 userInterface:(id)arg3 successHandler:(id /* block */)arg4 errorHandler:(id /* block */)arg5;

@end
