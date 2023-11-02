
@protocol _GCDeviceBatteryComponent <_GCDeviceComponent>

@required

- (GCDeviceBattery *)battery;
- (id /* block */)deviceBatteryComponentBatteryUpdatedHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, GCDeviceBattery *, void*, id, SEL
- (id /* block */)deviceBatteryServiceConnectedHandler:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (void)setDeviceBatteryComponentBatteryUpdatedHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GCDeviceBattery *, void*
- (void)setDeviceBatteryServiceConnectedHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
