
@interface PUEditPluginActivity : UIActivity {
    PUEditPlugin * _plugin;
}

@property (nonatomic, readonly) PUEditPlugin *plugin;

+ (long long)activityCategory;

- (void).cxx_destruct;
- (id)_activityImage;
- (id)_activitySettingsImage;
- (bool)_isHiddenByDefault;
- (id)activityTitle;
- (id)activityType;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)initWithPlugin:(id)arg1;
- (id)plugin;

@end
