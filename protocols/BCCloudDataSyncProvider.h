
@protocol BCCloudDataSyncProvider <NSObject>

@required

- (void)fetchRecordForRecordID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CKRecordID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CKRecord *, void*
- (<BCCloudDataPrivacyDelegate> *)privacyDelegate;
- (void)signalSyncToCK;
- (void)startSyncToCKWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
