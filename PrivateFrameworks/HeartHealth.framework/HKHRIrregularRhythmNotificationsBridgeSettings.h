
@interface HKHRIrregularRhythmNotificationsBridgeSettings : NSObject {
    bool  _areNotificationsOn;
    HKHRIrregularRhythmNotificationsBridgeFooter * _footer;
    NSString * _headerText;
    bool  _isSettingHidden;
    bool  _isUserInteractionEnabled;
    bool  _shouldLinkToOnboarding;
}

@property (nonatomic, readonly) bool areNotificationsOn;
@property (nonatomic, readonly, copy) HKHRIrregularRhythmNotificationsBridgeFooter *footer;
@property (nonatomic, readonly, copy) NSString *headerText;
@property (nonatomic, readonly) bool isSettingHidden;
@property (nonatomic, readonly) bool isUserInteractionEnabled;
@property (nonatomic, readonly) bool shouldLinkToOnboarding;

- (void).cxx_destruct;
- (bool)areNotificationsOn;
- (id)footer;
- (id)headerText;
- (id)initWithSettingHidden:(bool)arg1 notificationsOn:(bool)arg2 shouldLinkToOnboarding:(bool)arg3 userInteractionEnabled:(bool)arg4 headerText:(id)arg5 footer:(id)arg6;
- (bool)isSettingHidden;
- (bool)isUserInteractionEnabled;
- (bool)shouldLinkToOnboarding;

@end
