
@protocol PTModuleComponent <NSObject, NSCopying, NSSecureCoding>

@required

- (<PTModuleComponent> *)_remoteEditingWhitelistedComponent;
- (NSArray *)allSections;
- (NSPredicate *)appearancePredicate;
- (NSString *)childSettingsKeyPath;
- (<PTComponentObserver> *)componentObserver;
- (NSArray *)enabledSections;
- (void)setAppearancePredicate:(NSPredicate *)arg1;
- (void)setChildSettingsKeyPath:(NSString *)arg1;
- (void)setComponentObserver:(id <PTComponentObserver>)arg1;
- (void)setSettings:(PTSettings *)arg1;
- (PTSettings *)settings;

@end
