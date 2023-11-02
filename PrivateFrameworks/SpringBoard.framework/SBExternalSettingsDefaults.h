
@interface SBExternalSettingsDefaults : BSAbstractDefaultDomain

@property (getter=isBadgedForSoftwareUpdate, nonatomic) bool badgedForSoftwareUpdate;

+ (bool)__useDynamicMethodResolution;

- (id)init;
- (bool)isBadgedForSoftwareUpdate;
- (void)setBadgedForSoftwareUpdate:(bool)arg1;

@end
