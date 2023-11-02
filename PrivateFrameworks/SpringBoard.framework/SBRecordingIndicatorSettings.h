
@interface SBRecordingIndicatorSettings : PTSettings {
    long long  _sensorType;
}

@property long long sensorType;

+ (id)settingsControllerModule;

- (long long)sensorType;
- (void)setDefaultValues;
- (void)setSensorType:(long long)arg1;

@end
