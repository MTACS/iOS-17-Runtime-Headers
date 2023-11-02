
@interface PUAudioClassificationSettings : PXSettings

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (id)parentSettings;
- (void)setDefaultValues;

@end
