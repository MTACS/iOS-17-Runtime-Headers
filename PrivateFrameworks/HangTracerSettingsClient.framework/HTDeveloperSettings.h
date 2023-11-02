
@interface HTDeveloperSettings : NSObject {
    NSUserDefaults * _defaults;
    NSUserDefaults * _savedSettingsDefaults;
}

@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic) long long hangTracerThreshold;
@property (getter=isInternalBuild, nonatomic, readonly) bool internalBuild;

- (void).cxx_destruct;
- (long long)hangTracerThreshold;
- (id)init;
- (id)initWithDefaults:(id)arg1 savedSettingsDefaults:(id)arg2;
- (bool)isEnabled;
- (bool)isInternalBuild;
- (void)setEnabled:(bool)arg1;
- (void)setHangTracerThreshold:(long long)arg1;

@end
