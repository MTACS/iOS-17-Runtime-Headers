
@interface NTKAmbientIlluminationMonitor : NSObject {
    double  _ambientLux;
    BrightnessSystemClient * _brightnessSystemClient;
    <NTKAmbientIlluminationMonitorDelegate> * _delegate;
    double  _displayNits;
    double  _lastLoggedLux;
    double  _lastLoggedNits;
    unsigned long long  _skippedLux;
    unsigned long long  _skippedNits;
}

@property (setter=_setAmbientLux:, nonatomic) double ambientLux;
@property (nonatomic) <NTKAmbientIlluminationMonitorDelegate> *delegate;
@property (setter=_setDisplayNits:, nonatomic) double displayNits;

- (void).cxx_destruct;
- (void)_registerForNotifications;
- (void)_setAmbientLux:(double)arg1;
- (void)_setDisplayNits:(double)arg1;
- (void)_unregisterForNotifications;
- (double)ambientLux;
- (id)delegate;
- (double)displayNits;
- (id)init;
- (void)setDelegate:(id)arg1;

@end
