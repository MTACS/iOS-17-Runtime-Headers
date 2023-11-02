
@interface _UIUserDefaultsActivity : UIActivity {
    long long  _activityCategory;
    NSArray * _availableActivities;
    _UIActivityUserDefaults * _userDefaults;
}

@property (nonatomic, readonly) long long activityCategory;
@property (nonatomic, copy) NSArray *availableActivities;
@property (nonatomic, readonly) _UIActivityUserDefaults *userDefaults;

+ (long long)activityCategory;

- (void).cxx_destruct;
- (id)_actionImage;
- (id)_activityImage;
- (long long)activityCategory;
- (id)activityTitle;
- (id)activityType;
- (id)availableActivities;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)initWithUserDefaults:(id)arg1 activityCategory:(long long)arg2;
- (void)setAvailableActivities:(id)arg1;
- (id)userDefaults;

@end
