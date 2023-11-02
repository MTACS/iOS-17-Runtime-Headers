
@protocol HKDeviceStoreServer <NSObject>

@required

- (void)remote_fetchAllDevicesWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)remote_fetchDevicesMatchingValues:(void *)arg1 forProperty:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSSet *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSError *, void*

@end
