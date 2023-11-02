
@interface ATXLockscreenEditMetric : _ATXCoreAnalyticsMetric {
    bool  _didLockscreenHaveWidgetsBeforeEdit;
    long long  _duration;
    NSString * _entryPoint;
    bool  _isNew;
    NSString * _lockscreenId;
    NSString * _outcome;
    unsigned long long  _secondsSinceLastEdit;
    bool  _userChangedColor;
    bool  _userChangedFont;
    bool  _userChangedNumberingSystem;
    bool  _userChangedPosterContent;
    bool  _userChangedWidgets;
}

@property (nonatomic) bool didLockscreenHaveWidgetsBeforeEdit;
@property (nonatomic) long long duration;
@property (nonatomic, copy) NSString *entryPoint;
@property (nonatomic) bool isNew;
@property (nonatomic, copy) NSString *lockscreenId;
@property (nonatomic, copy) NSString *outcome;
@property (nonatomic) unsigned long long secondsSinceLastEdit;
@property (nonatomic) bool userChangedColor;
@property (nonatomic) bool userChangedFont;
@property (nonatomic) bool userChangedNumberingSystem;
@property (nonatomic) bool userChangedPosterContent;
@property (nonatomic) bool userChangedWidgets;

- (void).cxx_destruct;
- (id)coreAnalyticsDictionary;
- (bool)didLockscreenHaveWidgetsBeforeEdit;
- (long long)duration;
- (id)entryPoint;
- (bool)isNew;
- (id)lockscreenId;
- (id)metricName;
- (id)outcome;
- (unsigned long long)secondsSinceLastEdit;
- (void)setDidLockscreenHaveWidgetsBeforeEdit:(bool)arg1;
- (void)setDuration:(long long)arg1;
- (void)setEntryPoint:(id)arg1;
- (void)setIsNew:(bool)arg1;
- (void)setLockscreenId:(id)arg1;
- (void)setOutcome:(id)arg1;
- (void)setSecondsSinceLastEdit:(unsigned long long)arg1;
- (void)setUserChangedColor:(bool)arg1;
- (void)setUserChangedFont:(bool)arg1;
- (void)setUserChangedNumberingSystem:(bool)arg1;
- (void)setUserChangedPosterContent:(bool)arg1;
- (void)setUserChangedWidgets:(bool)arg1;
- (bool)userChangedColor;
- (bool)userChangedFont;
- (bool)userChangedNumberingSystem;
- (bool)userChangedPosterContent;
- (bool)userChangedWidgets;

@end
