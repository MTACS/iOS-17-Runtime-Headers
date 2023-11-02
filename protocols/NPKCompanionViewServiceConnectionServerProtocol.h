
@protocol NPKCompanionViewServiceConnectionServerProtocol <PDXPCServiceExportedInterface>

@required

- (void)presentRemotePassItemSelectionViewControllerForRequest:(void *)arg1 contact:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NPKRemotePassActionSelectItemRequest *, CNContact *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)presentRemotePassValueEntryViewControllerForRequest:(void *)arg1 contact:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NPKRemotePassActionEnterValueRequest *, CNContact *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
