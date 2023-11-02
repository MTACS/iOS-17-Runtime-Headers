
@protocol BCCloudKitChangeTokenStore <BDSCloudKitSupportSignOut>

@required

- (bool)cloudSyncEnabled;
- (void)serverChangeTokenWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CKServerChangeToken *, void*
- (void)storeServerChangeToken:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: CKServerChangeToken *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
