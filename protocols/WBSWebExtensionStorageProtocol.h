
@protocol WBSWebExtensionStorageProtocol <NSObject>

@required

- (void)deleteDatabaseWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)deleteValuesForKeys:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)getStorageSizeForAllKeysIncludingKeyedData:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 10: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, unsigned long long, NSDictionary *, NSString *, void*
- (void)getStorageSizeForAllKeysWithCompletionHandler:(void *)arg1 queue:(void *)arg2; // needs 2 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, NSString *, void*, NSObject<OS_dispatch_queue> *
- (void)getStorageSizeForKeys:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, NSString *, void*
- (void)getValuesForAllKeysWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSString *, void*
- (void)getValuesForKeys:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSString *, void*
- (void)setKeyedData:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSString *, void*

@end
