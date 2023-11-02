
@protocol HKStaticSyncControlServer <NSObject>

@required

- (NSProgress *)remote_runStaticSyncExportWithOptions:(void *)arg1 storeIdentifier:(void *)arg2 URL:(void *)arg3 batchSize:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: unsigned long long, NSUUID *, NSURL *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (NSProgress *)remote_runStaticSyncImportWithOptions:(void *)arg1 storeIdentifier:(void *)arg2 URL:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: unsigned long long, NSUUID *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
