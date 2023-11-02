
@interface AMMotionDetectionSettings : PTSettings {
    bool  _triggerTypeFilteredThresholdHigh;
    bool  _triggerTypeFilteredThresholdLow;
    bool  _triggerTypeFilteredThresholdMedium;
    bool  _triggerTypeThresholdHigh;
    bool  _triggerTypeThresholdLow;
    bool  _triggerTypeThresholdMedium;
}

@property (nonatomic) unsigned long long enabledTriggers;
@property (nonatomic) bool triggerTypeFilteredThresholdHigh;
@property (nonatomic) bool triggerTypeFilteredThresholdLow;
@property (nonatomic) bool triggerTypeFilteredThresholdMedium;
@property (nonatomic) bool triggerTypeThresholdHigh;
@property (nonatomic) bool triggerTypeThresholdLow;
@property (nonatomic) bool triggerTypeThresholdMedium;

+ (void)_enumerateTriggerTypes:(id /* block */)arg1;
+ (id)_keyPathForTriggerTypeName:(id)arg1;
+ (id)settingsControllerModule;

- (unsigned long long)enabledTriggers;
- (void)setDefaultValues;
- (void)setEnabledTriggers:(unsigned long long)arg1;
- (void)setTriggerTypeFilteredThresholdHigh:(bool)arg1;
- (void)setTriggerTypeFilteredThresholdLow:(bool)arg1;
- (void)setTriggerTypeFilteredThresholdMedium:(bool)arg1;
- (void)setTriggerTypeThresholdHigh:(bool)arg1;
- (void)setTriggerTypeThresholdLow:(bool)arg1;
- (void)setTriggerTypeThresholdMedium:(bool)arg1;
- (bool)triggerTypeFilteredThresholdHigh;
- (bool)triggerTypeFilteredThresholdLow;
- (bool)triggerTypeFilteredThresholdMedium;
- (bool)triggerTypeThresholdHigh;
- (bool)triggerTypeThresholdLow;
- (bool)triggerTypeThresholdMedium;

@end
