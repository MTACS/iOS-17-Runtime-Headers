
@interface IntelligencePlatformCore.DevicePowerSignal : _TtCs12_SwiftObject <MLFeatureProvider> {
    void batteryLevelStream;
    void biomeLibrary;
    void lowPowerModeStream;
    void pluggedInStream;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureNames;
- (id)featureValueForName:(id)arg1;

@end
