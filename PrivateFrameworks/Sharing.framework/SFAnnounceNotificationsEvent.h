
@interface SFAnnounceNotificationsEvent : NSObject <SFCoreAnalyticsEvent> {
    bool  _customizedApps;
    bool  _tappedCustomize;
    bool  _tappedDismissButton;
    bool  _tappedInitialEnable;
    bool  _tappedNotNow;
}

@property (nonatomic) bool customizedApps;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *eventPayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool tappedCustomize;
@property (nonatomic) bool tappedDismissButton;
@property (nonatomic) bool tappedInitialEnable;
@property (nonatomic) bool tappedNotNow;

+ (id)eventName;

- (bool)customizedApps;
- (id)eventPayload;
- (void)setCustomizedApps:(bool)arg1;
- (void)setTappedCustomize:(bool)arg1;
- (void)setTappedDismissButton:(bool)arg1;
- (void)setTappedInitialEnable:(bool)arg1;
- (void)setTappedNotNow:(bool)arg1;
- (void)submitEvent;
- (bool)tappedCustomize;
- (bool)tappedDismissButton;
- (bool)tappedInitialEnable;
- (bool)tappedNotNow;

@end
