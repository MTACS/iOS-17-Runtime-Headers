
@interface HKHRCardioFitnessWatchSettings : NSObject {
    HKHRCardioFitnessFooter * _footer;
    bool  _settingEnabled;
    bool  _settingVisible;
    NSString * _statusText;
}

@property (nonatomic, retain) HKHRCardioFitnessFooter *footer;
@property (nonatomic) bool settingEnabled;
@property (nonatomic) bool settingVisible;
@property (nonatomic, retain) NSString *statusText;

+ (id)hiddenSettings;

- (void).cxx_destruct;
- (id)footer;
- (id)initWithSettingVisible:(bool)arg1 settingEnabled:(bool)arg2 statusText:(id)arg3 footer:(id)arg4;
- (void)setFooter:(id)arg1;
- (void)setSettingEnabled:(bool)arg1;
- (void)setSettingVisible:(bool)arg1;
- (void)setStatusText:(id)arg1;
- (bool)settingEnabled;
- (bool)settingVisible;
- (id)statusText;

@end
