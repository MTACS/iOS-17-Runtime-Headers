
@interface DSArchiveService : NSObject <DSArchiveServiceProtocol, DSArchiveServiceStreamingInternal> {
    <DSArchiveServiceUnarchivingDelegate> * _unarchivingDelegate;
}

@property (nonatomic) <DSArchiveServiceUnarchivingDelegate> *unarchivingDelegate;

- (void).cxx_destruct;
- (id)archiveItemsAtURLs:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 compressionFormat:(unsigned long long)arg4 passphrase:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)archiveItemsWithURLs:(id)arg1 compressionFormat:(unsigned long long)arg2 destinationFolderURL:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)archiveItemsWithURLs:(id)arg1 passphrase:(id)arg2 addToKeychain:(bool)arg3 compressionFormat:(unsigned long long)arg4 destinationFolderURL:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)itemDescriptorsForItemAtURL:(id)arg1 passphrase:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)itemDescriptorsForItemAtURL:(id)arg1 passphrases:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)receiveArchivedItemsDescriptors:(id)arg1;
- (void)setUnarchivingDelegate:(id)arg1;
- (id)unarchiveItemAtURL:(id)arg1 passphrase:(id)arg2 destinationFolderURL:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)unarchiveItemAtURL:(id)arg1 passphrases:(id)arg2 addToKeychain:(bool)arg3 destinationFolderURL:(id)arg4 acceptedFormats:(unsigned long long)arg5 completionHandler:(id /* block */)arg6;
- (id)unarchiveItemAtURL:(id)arg1 passphrases:(id)arg2 destinationFolderURL:(id)arg3 acceptedFormats:(unsigned long long)arg4 completionHandler:(id /* block */)arg5;
- (id)unarchiveItemAtURL:(id)arg1 passphrases:(id)arg2 destinationFolderURL:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)unarchiveItemAtURL:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 acceptedFormats:(unsigned long long)arg4 passphrases:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)unarchivingDelegate;

@end
