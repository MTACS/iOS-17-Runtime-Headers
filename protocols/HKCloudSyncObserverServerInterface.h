
@protocol HKCloudSyncObserverServerInterface <NSObject>

@required

- (void)remote_startObservingSyncStatusWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (NSProgress *)remote_startSyncIfRestoreNotCompletedWithUUID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSError *, void*

@end
