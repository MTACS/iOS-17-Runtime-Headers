
@protocol NPKCompanionViewServiceConnectionServerDelegate <NSObject>

@required

- (void)viewServiceConnectionServer:(void *)arg1 didRequestPresentRemotePassItemSelectionViewControllerForRequest:(void *)arg2 contact:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NPKCompanionViewServiceConnectionServer *, NPKRemotePassActionSelectItemRequest *, CNContact *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)viewServiceConnectionServer:(void *)arg1 didRequestPresentRemotePassValueEntryViewControllerForRequest:(void *)arg2 contact:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NPKCompanionViewServiceConnectionServer *, NPKRemotePassActionEnterValueRequest *, CNContact *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
