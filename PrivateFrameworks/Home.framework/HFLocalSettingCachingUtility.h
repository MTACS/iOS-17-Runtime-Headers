
@interface HFLocalSettingCachingUtility : NSObject {
    NSUserDefaults * _defaults;
    NSMutableDictionary * _settingCache;
}

@property (nonatomic, retain) NSUserDefaults *defaults;
@property (nonatomic, retain) NSMutableDictionary *settingCache;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_getValueForSetting:(id)arg1;
- (id)_getWelcomeBannerDismissedKey:(id)arg1;
- (void)_setValueForSetting:(id)arg1 settingValue:(id)arg2;
- (id)defaults;
- (bool)getWelcomeBannerDismissedLocalCachedValue:(id)arg1;
- (id)init;
- (void)setDefaults:(id)arg1;
- (void)setSettingCache:(id)arg1;
- (void)setWelcomeBannerDismissedLocalCachedValue:(bool)arg1 home:(id)arg2;
- (id)settingCache;

@end
