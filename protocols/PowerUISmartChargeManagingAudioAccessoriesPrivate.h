
@protocol PowerUISmartChargeManagingAudioAccessoriesPrivate <PowerUISmartChargeManagingAudioAccessories>

@required

- (void)clearLastActionForDevice:(NSString *)arg1;
- (void)currentLeewayWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)deleteRecordsForDevices:(NSArray *)arg1;
- (void)engageUntil:(void *)arg1 forDevice:(void *)arg2 overrideAllSignals:(void *)arg3 withHandler:(void *)arg4; // needs 4 arg types, found 10: NSDate *, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)fakeConnectionForDevice:(NSString *)arg1;
- (void)getAvailableDevicesWithHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)getStatusForDevice:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)lastActionForDevice:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)setFakeConnectionStatusTo:(bool)arg1;
- (void)startMockingBluetoothForFakeDevice:(NSString *)arg1;
- (void)stopMockingBluetooth;
- (void)timeSeriesForDevice:(NSString *)arg1;

@end
