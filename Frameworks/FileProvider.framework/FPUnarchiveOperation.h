
@interface FPUnarchiveOperation : FPActionOperation <DSArchiveServiceUnarchivingDelegate> {
    id  _coordinationAccessToken;
    NSFileCoordinator * _coordinator;
    FPItem * _destinationFolder;
    bool  _hasStitchedUnarchivedItems;
    FPItem * _item;
    NSURL * _itemURL;
    id /* block */  _passphraseRequestBlock;
    FPItemID * _placeholderID;
    FPProviderDomain * _providerDomain;
    id /* block */  _unarchiveCompletionBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ passphraseRequestBlock;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ unarchiveCompletionBlock;

- (void).cxx_destruct;
- (void)_importUnarchivedContentAtURL:(id)arg1 archiveName:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_newParentProgressWithCompletedUnitCount:(long long)arg1;
- (void)_unarchiveAndHandleIncorrectPassphraseURL:(id)arg1 archiveName:(id)arg2 service:(id)arg3 passphrase:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_unarchiveURL:(id)arg1 archiveName:(id)arg2 service:(id)arg3 passphrase:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_unarchiveURLInDSEnumeratedDomain:(id)arg1 service:(id)arg2 passphrase:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_unarchiveURLInFPEnumeratedDomain:(id)arg1 archiveName:(id)arg2 service:(id)arg3 passphrase:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)actionMain;
- (id)findUniqueUnarchivedName:(id)arg1 isFolder:(bool)arg2 parent:(id)arg3;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (bool)getHasUnarchivedMultipleItems:(bool*)arg1 firstUnarchivedItemURL:(id*)arg2 forArchiveFolderURL:(id)arg3 error:(id*)arg4;
- (id)initWithItem:(id)arg1 destinationFolder:(id)arg2;
- (id /* block */)passphraseRequestBlock;
- (void)service:(id)arg1 didReceiveArchivedItemsDescriptors:(id)arg2;
- (void)setPassphraseRequestBlock:(id /* block */)arg1;
- (void)setUnarchiveCompletionBlock:(id /* block */)arg1;
- (id /* block */)unarchiveCompletionBlock;

@end
