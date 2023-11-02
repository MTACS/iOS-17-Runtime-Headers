
@interface CSLPRFAppBacklightPrivacyMutableSettings : NSObject <CSLPRFAppBacklightPrivacyMutableProperties> {
    bool  _privacyDuringAlwaysOnForApp;
    bool  _privacyDuringAlwaysOnForNotification;
    bool  _watchAppSupportsAlwaysOnDisplay;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool privacyDuringAlwaysOnForApp;
@property (nonatomic) bool privacyDuringAlwaysOnForNotification;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool watchAppSupportsAlwaysOnDisplay;

- (id)initWithSettings:(id)arg1;
- (bool)isEqualToSettings:(id)arg1;
- (bool)privacyDuringAlwaysOnForApp;
- (bool)privacyDuringAlwaysOnForNotification;
- (void)setPrivacyDuringAlwaysOnForApp:(bool)arg1;
- (void)setPrivacyDuringAlwaysOnForNotification:(bool)arg1;
- (bool)watchAppSupportsAlwaysOnDisplay;

@end
