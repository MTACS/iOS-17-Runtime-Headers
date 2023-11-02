
@protocol FMDExtAccessoryProtocol <NSObject>

@optional

- (void)connectionStatusForAccessory:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)fetchAllAccessoriesInfoWithInfo:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)forceConnectToAccessory:(void *)arg1 info:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)getStyleForAccessory:(void *)arg1 info:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)launchSetupModuleWithInfo:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)playSoundForAccessory:(void *)arg1 info:(void *)arg2 duration:(void *)arg3 rampUpDuration:(void *)arg4 channels:(void *)arg5 withCompletion:(void *)arg6; // needs 6 arg types, found 11: NSString *, NSDictionary *, double, double, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeAccesoryWithSerialNumber:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)safetyAlertForAccessory:(void *)arg1 info:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 10: NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSString *, NSError *, void*
- (void)setPhoneNumberForAccessoryId:(void *)arg1 phoneNumber:(void *)arg2 info:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)startDiscoveryForAccessory:(void *)arg1 duration:(void *)arg2 info:(void *)arg3 withCompletion:(void *)arg4; // needs 4 arg types, found 9: NSString *, double, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)stopDiscoveryForAccessory:(void *)arg1 info:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)stopSoundForAccessory:(void *)arg1 info:(void *)arg2 rampDownDuration:(void *)arg3 withCompletion:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSDictionary *, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateCompletedFor:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
