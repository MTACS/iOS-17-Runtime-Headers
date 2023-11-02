
@interface SBSystemNotesLaunchSettings : PTSettings {
    NSString * _applicationBundleID;
}

@property (nonatomic, copy) NSString *applicationBundleID;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (id)applicationBundleID;
- (void)setApplicationBundleID:(id)arg1;
- (void)setDefaultValues;

@end
