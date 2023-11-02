
@interface MPHomeMonitor : NSObject <MPHomeManagerObserverDelegate> {
    bool  _soundCheckCachedValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isSoundCheckEnabled, nonatomic) bool soundCheckEnabled;
@property (readonly) Class superclass;

+ (bool)isCurrentDeviceValidHomeAccessory;
+ (void)setupIfNecessary;
+ (id)sharedMonitor;

- (void)_postNotificationWithName:(id)arg1;
- (void)currentHomeDidChange;
- (void)currentUserDidChange;
- (void)homeUsersDidChange;
- (id)init;
- (bool)isSoundCheckEnabled;
- (void)setSoundCheckEnabled:(bool)arg1;
- (void)soundCheckSettingDidUpdate:(bool)arg1;

@end
