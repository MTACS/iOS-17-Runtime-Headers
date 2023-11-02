
@interface DOCDownloadImportManager : NSObject

- (bool)_doc_destinationLocationExists:(long long)arg1;
- (id)_moveItemAtURL:(id)arg1 toNamedLocation:(long long)arg2 error:(id*)arg3;
- (void)importPlaceholderAtURLToDownloadsDirectory:(id)arg1 completion:(id /* block */)arg2;
- (id)interface;
- (void)replacePlaceholder:(id)arg1 withFinalFileURL:(id)arg2 completionHandler:(id /* block */)arg3;

@end
