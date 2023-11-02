
@interface BRCThumbnailGenerateOperation : _BRCOperation <BRCOperationSubclass> {
    id /* block */  _saveThumbnailCompletionBlock;
    NSURL * _targetURL;
    NSURL * _url;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ saveThumbnailCompletionBlock;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURL *targetURL;

- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithDocumentAtURL:(id)arg1 targetURL:(id)arg2;
- (void)main;
- (id /* block */)saveThumbnailCompletionBlock;
- (void)setSaveThumbnailCompletionBlock:(id /* block */)arg1;
- (bool)shouldRetryForError:(id)arg1;
- (id)targetURL;

@end
