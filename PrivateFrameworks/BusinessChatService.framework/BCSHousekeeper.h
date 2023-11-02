
@interface BCSHousekeeper : NSObject <BCSHousekeeping> {
    long long  _currentVersion;
    NSUserDefaults * _userDefaults;
}

@property (nonatomic, readonly) long long currentVersion;
@property (nonatomic, readonly) NSUserDefaults *userDefaults;

- (void).cxx_destruct;
- (void)cleanupDataAtOldPathsIfNeeded;
- (long long)currentVersion;
- (id)initWithUserDefaults:(id)arg1;
- (id)initWithUserDefaults:(id)arg1 currentVersion:(long long)arg2;
- (id)userDefaults;

@end
