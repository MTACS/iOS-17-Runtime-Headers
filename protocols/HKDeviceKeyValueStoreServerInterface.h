
@protocol HKDeviceKeyValueStoreServerInterface <NSObject>

@required

- (void)remote_fetchEntriesForDomain:(void *)arg1 key:(void *)arg2 protectionCategory:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSString *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)remote_mostRecentEntryForDomain:(void *)arg1 key:(void *)arg2 protectionCategory:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSString *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKDeviceKeyValueStorageGroup *, NSError *, void*
- (void)remote_setData:(void *)arg1 forKey:(void *)arg2 domainName:(void *)arg3 protectionCategory:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: NSData *, NSString *, NSString *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_setDate:(void *)arg1 forKey:(void *)arg2 domainName:(void *)arg3 protectionCategory:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: NSDate *, NSString *, NSString *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_setNumber:(void *)arg1 forKey:(void *)arg2 domainName:(void *)arg3 protectionCategory:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: NSNumber *, NSString *, NSString *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_setString:(void *)arg1 forKey:(void *)arg2 domainName:(void *)arg3 protectionCategory:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: NSString *, NSString *, NSString *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_startObservingDeviceKeyValueStoreWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
