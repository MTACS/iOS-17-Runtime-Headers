
@interface SiriAnalyticsPreferences : NSObject {
    struct __CFString { } * _domain;
    double  _unifiedStreamMaxAgeOrDefault;
}

@property (nonatomic) bool killSwitchEnabled;
@property (nonatomic) NSData *preprocessorBookmark;
@property (nonatomic) double unifiedStreamMaxAge;
@property (nonatomic) double unifiedStreamMaxAgeOrDefault;
@property (nonatomic) unsigned long long unifiedStreamMaxSize;
@property (nonatomic, readonly) unsigned long long unifiedStreamMaxSizeOrDefault;

- (id)init;
- (id)initWithPreferencesDomain:(struct __CFString { }*)arg1;
- (bool)killSwitchEnabled;
- (id)pluginStateForBundleIdentifier:(id)arg1;
- (id)pluginsState;
- (id)preprocessorBookmark;
- (void)setKillSwitchEnabled:(bool)arg1;
- (void)setPluginState:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)setPluginsState:(id)arg1;
- (void)setPreprocessorBookmark:(id)arg1;
- (void)setUnifiedStreamMaxAge:(double)arg1;
- (void)setUnifiedStreamMaxAgeOrDefault:(double)arg1;
- (void)setUnifiedStreamMaxSize:(unsigned long long)arg1;
- (void)synchronize;
- (bool)tailMessagesToOSLogEnabled;
- (double)unifiedStreamMaxAge;
- (double)unifiedStreamMaxAgeOrDefault;
- (unsigned long long)unifiedStreamMaxSize;
- (unsigned long long)unifiedStreamMaxSizeOrDefault;

@end
