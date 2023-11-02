
@interface BRSharingCopyEtagOperation : BROperation {
    NSURL * _fileURL;
    id /* block */  _sharingEtagCompletionBlock;
}

@property (copy) id /* block */ sharingEtagCompletionBlock;

- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithURL:(id)arg1;
- (void)main;
- (void)setSharingEtagCompletionBlock:(id /* block */)arg1;
- (id /* block */)sharingEtagCompletionBlock;

@end
