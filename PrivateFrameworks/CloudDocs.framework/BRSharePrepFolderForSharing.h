
@interface BRSharePrepFolderForSharing : BRShareOperation {
    id /* block */  _prepFolderSharingCompletionBlock;
}

@property (copy) id /* block */ prepFolderSharingCompletionBlock;

- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithURL:(id)arg1;
- (void)main;
- (id /* block */)prepFolderSharingCompletionBlock;
- (void)setPrepFolderSharingCompletionBlock:(id /* block */)arg1;

@end
