
@interface SFAnnounceMessagesEvent : NSObject <SFCoreAnalyticsEvent> {
    bool  _allowsSiriWhenLocked;
    bool  _announceMessagesAlreadyEnabled;
    long long  _pairingExitView;
    bool  _skippedTutorialCards;
    bool  _userAutomaticallyEnrolled;
    bool  _userExplicitlyOptedIn;
    bool  _userExplicitlyOptedOut;
}

@property (nonatomic) bool allowsSiriWhenLocked;
@property (nonatomic) bool announceMessagesAlreadyEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *eventPayload;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long pairingExitView;
@property (nonatomic) bool skippedTutorialCards;
@property (readonly) Class superclass;
@property (nonatomic) bool userAutomaticallyEnrolled;
@property (nonatomic) bool userExplicitlyOptedIn;
@property (nonatomic) bool userExplicitlyOptedOut;

+ (id)eventName;
+ (id)stringForExitView:(long long)arg1;

- (bool)allowsSiriWhenLocked;
- (bool)announceMessagesAlreadyEnabled;
- (id)eventPayload;
- (long long)pairingExitView;
- (void)setAllowsSiriWhenLocked:(bool)arg1;
- (void)setAnnounceMessagesAlreadyEnabled:(bool)arg1;
- (void)setPairingExitView:(long long)arg1;
- (void)setSkippedTutorialCards:(bool)arg1;
- (void)setUserAutomaticallyEnrolled:(bool)arg1;
- (void)setUserExplicitlyOptedIn:(bool)arg1;
- (void)setUserExplicitlyOptedOut:(bool)arg1;
- (bool)skippedTutorialCards;
- (void)submitEvent;
- (bool)userAutomaticallyEnrolled;
- (bool)userExplicitlyOptedIn;
- (bool)userExplicitlyOptedOut;

@end
