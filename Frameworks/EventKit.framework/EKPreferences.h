
@interface EKPreferences : NSObject {
    CalPreferences * _preferences;
}

@property (nonatomic) bool alertInviteeDeclines;
@property (nonatomic) bool alwaysSetArrivedAndSettledForReminders;
@property (readonly) bool bypassSplashScreen;
@property (nonatomic, copy) NSDictionary *conferenceRoomTypeIdentifiersByMRU;
@property (nonatomic, readonly) NSArray *customDeselectedCalendarSyncHashes;
@property (nonatomic, readonly) NSArray *customDeselectedCalendarSyncIdentifiers;
@property (nonatomic, readonly) NSArray *deselectedCalendarIdentifiers;
@property (nonatomic, readonly) NSArray *deselectedCalendarSyncHashes;
@property (nonatomic, readonly) NSArray *deselectedCalendarSyncIdentifiers;
@property (nonatomic) unsigned long long lastConfirmedSplashScreenVersion;
@property (nonatomic) bool refiringReminderAlarmsEnabled;
@property (nonatomic, copy) NSArray *selectedCalendarIdentifiers;
@property (nonatomic) bool showDeclinedEvents;
@property (nonatomic) double travelEngineThrottlePeriod;
@property (nonatomic, copy) NSArray *unselectedCalendarIdentifiersForFocusMode;
@property (nonatomic) bool useShortReminderRefireInterval;
@property (nonatomic) bool useShortReminderSnoozeInterval;

+ (id)shared;

- (void).cxx_destruct;
- (bool)_array:(id)arg1 hasSameElementAsArray:(id)arg2;
- (void)_setDeselectedCalendarIdentifiers:(id)arg1;
- (void)_setDeselectedCalendarSyncHashes:(id)arg1;
- (void)_setDeselectedCalendarSyncIdentifiers:(id)arg1;
- (void)_setDeselectedCalendars_iOS:(id)arg1;
- (bool)alertInviteeDeclines;
- (bool)alwaysSetArrivedAndSettledForReminders;
- (bool)bypassSplashScreen;
- (id)conferenceRoomTypeIdentifiersByMRU;
- (id)customDeselectedCalendarSyncHashes;
- (id)customDeselectedCalendarSyncIdentifiers;
- (id)deselectedCalendarIdentifiers;
- (id)deselectedCalendarSyncHashes;
- (id)deselectedCalendarSyncIdentifiers;
- (id)init;
- (unsigned long long)lastConfirmedSplashScreenVersion;
- (bool)refiringReminderAlarmsEnabled;
- (id)selectedCalendarIdentifiers;
- (void)setAlertInviteeDeclines:(bool)arg1;
- (void)setAlwaysSetArrivedAndSettledForReminders:(bool)arg1;
- (void)setConferenceRoomTypeIdentifiersByMRU:(id)arg1;
- (void)setDeselectedCalendars:(id)arg1 reason:(id)arg2;
- (void)setLastConfirmedSplashScreenVersion:(unsigned long long)arg1;
- (void)setRefiringReminderAlarmsEnabled:(bool)arg1;
- (void)setSelectedCalendarIdentifiers:(id)arg1;
- (void)setShowDeclinedEvents:(bool)arg1;
- (void)setTravelEngineThrottlePeriod:(double)arg1;
- (void)setUnselectedCalendarIdentifiersForFocusMode:(id)arg1;
- (void)setUseShortReminderRefireInterval:(bool)arg1;
- (void)setUseShortReminderSnoozeInterval:(bool)arg1;
- (bool)showDeclinedEvents;
- (double)travelEngineThrottlePeriod;
- (id)unselectedCalendarIdentifiersForFocusMode;
- (bool)useShortReminderRefireInterval;
- (bool)useShortReminderSnoozeInterval;

@end
