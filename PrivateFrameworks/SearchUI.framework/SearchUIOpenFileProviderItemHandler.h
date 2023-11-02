
@interface SearchUIOpenFileProviderItemHandler : SearchUICommandHandler <QLPreviewControllerDataSource> {
    NSURL * _fileProviderURL;
}

@property (retain) NSURL *fileProviderURL;

+ (id)fallbackCommandForRowModel:(id)arg1 environment:(id)arg2;

- (void).cxx_destruct;
- (id)createViewControllerForCommand:(id)arg1 environment:(id)arg2;
- (id)defaultSymbolName;
- (void)fetchFileProviderURLWithCompletionHandler:(id /* block */)arg1;
- (void)fetchShareableURLWithCompletionHandler:(id /* block */)arg1;
- (id)fileProviderURL;
- (id)itemProviderForCopy;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (bool)openFileURLInPlaceInDefaultApplicationIfPossible:(id)arg1;
- (void)performCommand:(id)arg1 triggerEvent:(unsigned long long)arg2 environment:(id)arg3;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (void)setFileProviderURL:(id)arg1;
- (bool)supportsCopy;
- (bool)supportsShare;

@end
