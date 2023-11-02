
@interface HKHRCardioFitnessBridgeSettings : NSObject {
    HKHRCardioFitnessFooter * _footer;
    bool  _settingEnabled;
    bool  _settingVisible;
    bool  _showOnboarding;
}

@property (nonatomic, retain) HKHRCardioFitnessFooter *footer;
@property (nonatomic) bool settingEnabled;
@property (nonatomic) bool settingVisible;
@property (nonatomic) bool showOnboarding;

+ (id)hiddenSettings;

- (void).cxx_destruct;
- (id)footer;
- (id)initWithSettingVisible:(bool)arg1 settingEnabled:(bool)arg2 showOnboarding:(bool)arg3 footer:(id)arg4;
- (void)setFooter:(id)arg1;
- (void)setSettingEnabled:(bool)arg1;
- (void)setSettingVisible:(bool)arg1;
- (void)setShowOnboarding:(bool)arg1;
- (bool)settingEnabled;
- (bool)settingVisible;
- (bool)showOnboarding;

@end
