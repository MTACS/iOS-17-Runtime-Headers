
@interface BWSphereModeSelector : NSObject {
    bool  _avoidsSphereRecentering;
    struct __CFString { } * _currentNonLowPowerSphereMode;
    struct __CFString { } * _currentSphereMode;
    bool  _depthDataDeliveryEnabled;
    bool  _enablesSphereWhenAvailable;
    bool  _lowPowerSphereModeEnabled;
    float  _maximumFrameRate;
    float  _maximumFrameRateSupported;
    bool  _motionDataInvalid;
    bool  _overCaptureEnabled;
    int  _sphereThermalLevel;
    bool  _sphereVideoEnabled;
    bool  _sphereVideoSupported;
    bool  _stillPreviewActiveSupported;
    bool  _tripodModeEnabled;
    bool  _variableFrameRateVideoEnabled;
    bool  _zeroShutterLagEnabled;
}

@property (nonatomic) bool avoidsSphereRecentering;
@property (readonly) struct __CFString { }*currentNonLowPowerSphereMode;
@property (readonly) struct __CFString { }*currentSphereMode;
@property (nonatomic) bool depthDataDeliveryEnabled;
@property (nonatomic) bool enablesSphereWhenAvailable;
@property (nonatomic) bool lowPowerSphereModeEnabled;
@property (nonatomic) float maximumFrameRate;
@property (nonatomic) bool overCaptureEnabled;
@property (nonatomic) bool sphereVideoEnabled;
@property (nonatomic, readonly) bool sphereVideoSupported;
@property (nonatomic) int systemThermalLevel;
@property (nonatomic) bool tripodModeEnabled;
@property (nonatomic) bool variableFrameRateVideoEnabled;
@property (nonatomic) bool zeroShutterLagEnabled;

+ (void)initialize;

- (bool)avoidsSphereRecentering;
- (struct __CFString { }*)currentNonLowPowerSphereMode;
- (struct __CFString { }*)currentSphereMode;
- (bool)depthDataDeliveryEnabled;
- (bool)enablesSphereWhenAvailable;
- (id)initWithStillActivePreviewSupported:(bool)arg1 sphereVideoSupported:(bool)arg2;
- (id)initWithStillActivePreviewSupported:(bool)arg1 sphereVideoSupported:(bool)arg2 sphereVideoMaxFrameRate:(float)arg3;
- (bool)lowPowerSphereModeEnabled;
- (float)maximumFrameRate;
- (bool)overCaptureEnabled;
- (void)setAvoidsSphereRecentering:(bool)arg1;
- (void)setDepthDataDeliveryEnabled:(bool)arg1;
- (void)setEnablesSphereWhenAvailable:(bool)arg1;
- (void)setLowPowerSphereModeEnabled:(bool)arg1;
- (void)setMaximumFrameRate:(float)arg1;
- (void)setOverCaptureEnabled:(bool)arg1;
- (void)setSphereVideoEnabled:(bool)arg1;
- (void)setSystemThermalLevel:(int)arg1;
- (void)setTripodModeEnabled:(bool)arg1;
- (void)setVariableFrameRateVideoEnabled:(bool)arg1;
- (void)setZeroShutterLagEnabled:(bool)arg1;
- (bool)sphereVideoEnabled;
- (bool)sphereVideoSupported;
- (int)systemThermalLevel;
- (bool)tripodModeEnabled;
- (bool)variableFrameRateVideoEnabled;
- (bool)zeroShutterLagEnabled;

@end
