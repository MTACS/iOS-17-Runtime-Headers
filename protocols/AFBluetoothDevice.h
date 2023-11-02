
@protocol AFBluetoothDevice

@required

- (void)addObserver:(id <AFBluetoothDeviceObserver>)arg1;
- (void)connect:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (AFBluetoothDeviceInfo *)deviceInfo;
- (void)disconnect:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)getDeviceInfo:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AFBluetoothDeviceInfo *, void*
- (void)getHeadphoneInEarDetectionState:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AFBluetoothHeadphoneInEarDetectionState *, void*
- (void)getHeadphoneListeningMode:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (NSString *)identifier;
- (void)prewarm;
- (void)removeObserver:(id <AFBluetoothDeviceObserver>)arg1;
- (void)setHeadphoneListeningMode:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
