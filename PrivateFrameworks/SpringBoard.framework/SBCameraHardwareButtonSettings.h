
@interface SBCameraHardwareButtonSettings : PTSettings {
    double  _shutterButtonLongPressCancellationTimeout;
    double  _shutterButtonLongPressTimeout;
    bool  _shutterButtonShouldUsePocketDetection;
}

@property (nonatomic) double shutterButtonLongPressCancellationTimeout;
@property (nonatomic) double shutterButtonLongPressTimeout;
@property (nonatomic) bool shutterButtonShouldUsePocketDetection;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void)setShutterButtonLongPressCancellationTimeout:(double)arg1;
- (void)setShutterButtonLongPressTimeout:(double)arg1;
- (void)setShutterButtonShouldUsePocketDetection:(bool)arg1;
- (double)shutterButtonLongPressCancellationTimeout;
- (double)shutterButtonLongPressTimeout;
- (bool)shutterButtonShouldUsePocketDetection;

@end
