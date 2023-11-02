
@interface GEOPrivacyManager : NSObject {
    bool  _hasFiredCallHistoryRecentsClearedNotification;
    bool  _hasFiredLocationServicesDisabledNotification;
    bool  _hasFiredResetPrivacyWarningsNotification;
    bool  _hasLastKnownLocationServicesEnabled;
    bool  _lastKnownLocationServicesEnabled;
}

@property (nonatomic, readonly) bool hasFiredCallHistoryRecentsClearedNotification;
@property (nonatomic, readonly) bool hasFiredLocationServicesDisabledNotification;
@property (nonatomic, readonly) bool hasFiredResetPrivacyWarningsNotification;

+ (id)sharedManager;

- (void)_fireRecentsClearedNotification;
- (void)_fireResetLocationAndPrivacyNotification;
- (void)_locationServicesStateChanged;
- (void)dealloc;
- (bool)hasFiredCallHistoryRecentsClearedNotification;
- (bool)hasFiredLocationServicesDisabledNotification;
- (bool)hasFiredResetPrivacyWarningsNotification;
- (id)init;

@end
