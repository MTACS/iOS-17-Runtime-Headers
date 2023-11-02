
@protocol HKHealthServicesServerInterface <NSObject>

@required

- (void)remote_addPairingForHealthService:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: HKHealthService *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_addPeripheral:(void *)arg1 name:(void *)arg2 forServices:(void *)arg3 withCompletion:(void *)arg4; // needs 4 arg types, found 10: NSUUID *, NSString *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_beginBluetoothStatusUpdates:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSError *, void*
- (void)remote_endBluetoothStatusUpdates;
- (void)remote_endHealthServiceDiscovery:(unsigned long long)arg1;
- (void)remote_endHealthServiceSession:(unsigned long long)arg1;
- (void)remote_fetchSupportedServiceIDsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)remote_getEnabledStatusForPeripheral:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_getHealthPeripheralsWithFilter:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)remote_getHealthServiceProperty:(void *)arg1 forSession:(void *)arg2 withHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSError *, void*
- (void)remote_getSupportedPropertyNamesWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSError *, void*
- (void)remote_performHealthServiceOperation:(void *)arg1 onSession:(void *)arg2 withParameters:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 11: NSString *, unsigned long long, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, bool, NSError *, void*
- (void)remote_removePairingForHealthService:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: HKHealthService *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_removePeripheral:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_setEnabledStatus:(void *)arg1 forPeripheral:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: bool, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_startHealthServiceDiscovery:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (void)remote_startHealthServiceSession:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: HKHealthService *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*

@end