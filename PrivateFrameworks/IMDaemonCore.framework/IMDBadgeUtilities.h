
@interface IMDBadgeUtilities : NSObject {
    bool  _addedObserverForUnexpectedlyLoggedOut;
    long long  _lastFailedMessageDate;
    UNUserNotificationCenter * _notificationCenter;
    IMDefaults * _sharedDefaultsInstance;
    bool  _showingFailure;
    bool  _unexpectedlyLoggedOut;
    unsigned long long  _unreadCount;
}

@property (nonatomic) bool addedObserverForUnexpectedlyLoggedOut;
@property (nonatomic) long long lastFailedMessageDate;
@property (nonatomic, retain) UNUserNotificationCenter *notificationCenter;
@property (nonatomic, retain) IMDefaults *sharedDefaultsInstance;
@property (getter=isShowingFailure, nonatomic) bool showingFailure;
@property (getter=isUnexpectedlyLoggedOut, nonatomic) bool unexpectedlyLoggedOut;
@property (nonatomic) unsigned long long unreadCount;

+ (id)_accountsArrayForServiceIMessage;
+ (bool)_iMessageEnabled;
+ (bool)_iMessageFailedAccountIsIrreparable;
+ (bool)_isTryingToLogin;
+ (bool)_isUsableSendingForAccount:(id)arg1;
+ (bool)_isUserIntentNotLoggedOut;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_cacheFailureDate:(long long)arg1;
- (void)_checkIfUnexpectedlyLoggedOut;
- (void)_clearFailureBadge;
- (void)_compareLastFailureDateAndUpdateBadge:(long long)arg1;
- (void)_handleUnexpectedLogout;
- (bool)_isUnexpectedlyLogOutValue;
- (void)_postBadgeNumber:(id)arg1;
- (void)_postBadgeString:(id)arg1;
- (void)_saveFailureDate:(long long)arg1;
- (long long)_savedFailureDate;
- (bool)_shouldShowFailureString;
- (void)_stopSuppressingSound;
- (void)_updateBadge;
- (void)_updateBadgeAndCancelPreviousUpdate;
- (bool)addedObserverForUnexpectedlyLoggedOut;
- (void)dealloc;
- (id)init;
- (id)initWithMessageStore:(id)arg1;
- (id)initWithMessageStore:(id)arg1 defaultsStore:(id)arg2;
- (bool)isInAppleStoreDemoMode;
- (bool)isShowingFailure;
- (bool)isUnexpectedlyLoggedOut;
- (long long)lastFailedMessageDate;
- (id)notificationCenter;
- (void)setAddedObserverForUnexpectedlyLoggedOut:(bool)arg1;
- (void)setLastFailedMessageDate:(long long)arg1;
- (void)setNotificationCenter:(id)arg1;
- (void)setSharedDefaultsInstance:(id)arg1;
- (void)setShowingFailure:(bool)arg1;
- (void)setUnexpectedlyLoggedOut:(bool)arg1;
- (void)setUnreadCount:(unsigned long long)arg1;
- (id)sharedDefaultsInstance;
- (unsigned long long)unreadCount;
- (void)updateBadgeForLastFailedMessageDateChangeIfNeeded:(long long)arg1;
- (void)updateBadgeForUnreadCountChangeIfNeeded:(long long)arg1;

@end
