
@interface CSLPRFAppBacklightPrivacyResolvedSettings : NSObject <CSLPRFAppBacklightPrivacyProperties> {
    <CSLPRFAppBacklightPrivacyProperties> * _globalSettings;
    <CSLPRFAppBacklightPrivacyProperties> * _settings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool privacyDuringAlwaysOnForApp;
@property (nonatomic, readonly) bool privacyDuringAlwaysOnForNotification;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool watchAppSupportsAlwaysOnDisplay;

- (void).cxx_destruct;
- (id)initWithSettings:(id)arg1 globalSettings:(id)arg2;
- (bool)isEqualToSettings:(id)arg1;
- (bool)privacyDuringAlwaysOnForApp;
- (bool)privacyDuringAlwaysOnForNotification;
- (bool)watchAppSupportsAlwaysOnDisplay;

@end
