
@interface IntelligencePlatformCore.DeviceDisplaySignal : _TtCs12_SwiftObject <MLFeatureProvider> {
    void biomeLibrary;
    void deviceBacklightStream;
    void deviceScreenLockStream;
    void firstBacklightAfterWakeupEvents;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureNames;
- (id)featureValueForName:(id)arg1;

@end
