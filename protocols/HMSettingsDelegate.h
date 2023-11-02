
@protocol HMSettingsDelegate <NSObject>

@required

- (void)settingsDidUpdate:(HMSettings *)arg1;

@optional

- (void)settings:(HMSettings *)arg1 didUpdateForIdentifier:(NSUUID *)arg2 keyPath:(NSString *)arg3;
- (void)settingsWillUpdate:(HMSettings *)arg1;

@end
