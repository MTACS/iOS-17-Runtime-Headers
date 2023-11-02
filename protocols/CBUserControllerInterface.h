
@protocol CBUserControllerInterface <NSObject>

@required

- (void)appleAudioAccessoryLimitedLoggingWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)deleteControllerInfoForDevice:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CBDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)diagnosticShow:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)getCloudPairedDevicesWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getControllerInfoForDevice:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CBDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CBControllerInfo *, NSError *, void*
- (void)getCurrentUserGivenNameWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)getDistributedLoggingStatusWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned int, NSError *, void*
- (void)readPrefKeys:(void *)arg1 source:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSArray *, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)recordEventWithDeviceIdentifier:(NSString *)arg1 initiator:(bool)arg2 starting:(bool)arg3 useCase:(unsigned int)arg4;
- (void)recordEventWithStarting:(bool)arg1 useCase:(unsigned int)arg2;
- (void)setAppleAudioAccessoryLimitedLogging:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setDistributedLoggingStatus:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)storeControllerInfo:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CBControllerInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)writePrefKey:(void *)arg1 value:(void *)arg2 source:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSString *, id, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
