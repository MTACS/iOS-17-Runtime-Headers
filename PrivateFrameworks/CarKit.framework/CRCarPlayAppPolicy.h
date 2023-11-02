
@interface CRCarPlayAppPolicy : NSObject {
    unsigned long long  _applicationCategory;
    bool  _badgesAppIcon;
    NSString * _bundlePath;
    bool  _canDisplayOnCarScreen;
    bool  _carPlaySupported;
    bool  _handlesCarIntents;
    bool  _launchNotificationsUsingSiri;
    bool  _launchUsingMusicUIService;
    bool  _launchUsingSiri;
    bool  _launchUsingTemplateUI;
    bool  _showsNotifications;
    NSDictionary * _siriActivationOptions;
}

@property (nonatomic) unsigned long long applicationCategory;
@property (nonatomic) bool badgesAppIcon;
@property (nonatomic, readonly, copy) NSString *bundlePath;
@property (nonatomic) bool canDisplayOnCarScreen;
@property (getter=isCarPlaySupported, nonatomic) bool carPlaySupported;
@property (nonatomic) bool handlesCarIntents;
@property (nonatomic) bool launchNotificationsUsingSiri;
@property (nonatomic) bool launchUsingMusicUIService;
@property (nonatomic) bool launchUsingSiri;
@property (nonatomic) bool launchUsingTemplateUI;
@property (nonatomic) bool showsNotifications;
@property (nonatomic, copy) NSDictionary *siriActivationOptions;

- (void).cxx_destruct;
- (unsigned long long)applicationCategory;
- (bool)badgesAppIcon;
- (unsigned long long)bannerLaunchTypeForNotificationContentType:(id)arg1;
- (id)bundlePath;
- (bool)canDisplayOnCarScreen;
- (bool)handlesCarIntents;
- (id)init;
- (bool)isCarPlaySupported;
- (bool)launchNotificationsUsingSiri;
- (bool)launchUsingMusicUIService;
- (bool)launchUsingSiri;
- (bool)launchUsingTemplateUI;
- (void)setApplicationCategory:(unsigned long long)arg1;
- (void)setBadgesAppIcon:(bool)arg1;
- (void)setCanDisplayOnCarScreen:(bool)arg1;
- (void)setCarPlaySupported:(bool)arg1;
- (void)setHandlesCarIntents:(bool)arg1;
- (void)setLaunchNotificationsUsingSiri:(bool)arg1;
- (void)setLaunchUsingMusicUIService:(bool)arg1;
- (void)setLaunchUsingSiri:(bool)arg1;
- (void)setLaunchUsingTemplateUI:(bool)arg1;
- (void)setShowsNotifications:(bool)arg1;
- (void)setSiriActivationOptions:(id)arg1;
- (bool)showsNotifications;
- (id)siriActivationOptions;

@end
