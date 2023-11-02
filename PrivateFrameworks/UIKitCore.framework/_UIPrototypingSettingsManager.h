
@interface _UIPrototypingSettingsManager : NSObject {
    NSMutableDictionary * _storedSettings;
}

@property (nonatomic, readonly) NSArray *allSettings;
@property (nonatomic, retain) NSMutableDictionary *storedSettings;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)allSettings;
- (void)deleteAllStoredSettings;
- (id)init;
- (void)setStoredSettings:(id)arg1;
- (id)settingOfType:(long long)arg1 withName:(id)arg2;
- (id)storedSettings;
- (void)synchronizeStoredSettings;

@end
