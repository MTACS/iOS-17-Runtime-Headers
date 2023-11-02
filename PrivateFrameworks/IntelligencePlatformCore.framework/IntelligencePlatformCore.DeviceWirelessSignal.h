
@interface IntelligencePlatformCore.DeviceWirelessSignal : _TtCs12_SwiftObject <MLFeatureProvider> {
    void airplaneModeStream;
    void biomeLibrary;
    void bluetoothStream;
    void wifiStream;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureNames;
- (id)featureValueForName:(id)arg1;

@end
