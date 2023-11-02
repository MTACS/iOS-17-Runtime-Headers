
@interface _SFSaveToFilesOperation : NSObject <UIDocumentPickerDelegate, _SFDownloadPlaceholderImporter> {
    _SFActivityItemProviderCollection * _collection;
    NSString * _containerDirectoryPath;
    <_SFSaveToFilesOperationDelegate> * _delegate;
    UIDocumentPickerViewController * _documentPickerViewController;
    _SFDownload * _download;
    id /* block */  _downloadPlaceholderCompletionHandler;
    id /* block */  _prepareDownloadPlaceholderHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_SFSaveToFilesOperationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_copyFileData:(id /* block */)arg1;
- (void)_finishWithURL:(id)arg1;
- (void)_showDocumentPickerForFileURL:(id)arg1 sourceURL:(id)arg2 willStartDownload:(bool)arg3;
- (id)_temporaryFileWithName:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)documentPickerWasCancelled:(id)arg1;
- (void)importPlaceholderForDownload:(id)arg1 fromURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithActivityItemProviderCollection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)start;

@end
