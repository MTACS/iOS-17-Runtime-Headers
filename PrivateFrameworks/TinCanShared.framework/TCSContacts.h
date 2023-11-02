
@interface TCSContacts : NSObject {
    NSMutableDictionary * _allowlist;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _allowlistLock;
    CNCoalescingTimer * _allowlistSaveTimer;
    NSUserDefaults * _defaults;
    int  _demoResetToken;
    NSArray * _destinations;
    NPSManager * _npsManager;
    NSHashTable * _observers;
    int  _prefSyncToken;
    bool  _shouldObserveAllowlistDefaultChanges;
}

@property (nonatomic, retain) NSMutableDictionary *allowlist;
@property (nonatomic, retain) NSUserDefaults *defaults;
@property (nonatomic, retain) NSArray *destinations;
@property (nonatomic) bool shouldObserveAllowlistDefaultChanges;

+ (id)_canonicalDestinationForString:(id)arg1;
+ (id)_canonicalPhoneNumberFromCNPhoneNumber:(id)arg1;
+ (id)_canonicalPhoneNumberFromPhoneNumberString:(id)arg1;
+ (bool)_contact:(id)arg1 hasKeysForFormatterStye:(long long)arg2;
+ (id)_destinationsFromAllowlistDictionary:(id)arg1 onlyAccepted:(bool)arg2;
+ (id)_firstPhoneNumberOrEmailAddressFromContact:(id)arg1 formatPhoneNumber:(bool)arg2;
+ (bool)_isContact:(id)arg1 similarToContact:(id)arg2;
+ (bool)_isUnknownContact:(id)arg1 equalToUnknownContact:(id)arg2;
+ (id)_pauseCharacterSet;
+ (id)_safeContactDetailStringForLogging:(id)arg1;
+ (id)_safeContactNameStringForLogging:(id)arg1 handle:(id)arg2;
+ (id)_tinCanUserNotificationCenter;
+ (id)_unifiedContactWithIdentifier:(id)arg1 orDestination:(id)arg2 usingContactStore:(id)arg3 keysToFetch:(id)arg4;
+ (id)_unifiedMeContactFromContactStore:(id)arg1 keysToFetch:(id)arg2;
+ (id)_unknownContactWithDestination:(id)arg1;
+ (id)canonicalDestinationsForContact:(id)arg1;
+ (void)dismissInvitationNotificationsFromContact:(id)arg1;
+ (id)validatedAllowlistFromDictionary:(id)arg1;

- (void).cxx_destruct;
- (void)_addDestinations:(id)arg1 asType:(long long)arg2;
- (void)_deleteAllowlist;
- (bool)_didIncomingOutgoingOrSupportChange:(id)arg1;
- (void)_didInitiateCallToDestination:(id)arg1 date:(id)arg2;
- (void)_didReceiveCallFromDestination:(id)arg1 date:(id)arg2;
- (bool)_generateDestinationsFromAllowlist;
- (void)_handleContactsPrefSync;
- (void)_handleDeviceFirstUnlock;
- (bool)_loadAllowlistFromDefaults;
- (void)_loadDataFromDefaults;
- (void)_logDestinations;
- (void)_notifyObserversContactBecameAccepted:(id)arg1;
- (void)_notifyObserversDestinationsChanged;
- (void)_notifyObserversRecencyChanged;
- (void)_reloadAllowlist;
- (id)_removeDestinationFromAllowlist:(id)arg1;
- (void)_resetStoreDemoContent;
- (void)_saveAllowlist;
- (bool)_shouldHandleResetStoreDemoContent;
- (void)addDestinations:(id)arg1;
- (void)addDestinationsForInviter:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)allowlist;
- (bool)contactSupportsTinCan:(id)arg1;
- (id)dateAddedForDestination:(id)arg1;
- (void)dealloc;
- (id)defaults;
- (id)destinations;
- (void)didInitiateCallToContact:(id)arg1 date:(id)arg2;
- (void)didReceiveCallFromContact:(id)arg1 date:(id)arg2;
- (id)init;
- (bool)isContactAccepted:(id)arg1;
- (bool)isContactAnInviter:(id)arg1;
- (bool)isDestinationAccepted:(id)arg1;
- (bool)isDestinationAnInviter:(id)arg1;
- (id)mostRecentCallDateForContact:(id)arg1;
- (id)mostRecentCallDateForDestination:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeDestinations:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setAllowlist:(id)arg1;
- (void)setContact:(id)arg1 supportsTinCan:(bool)arg2;
- (void)setContactAsAccepted:(id)arg1;
- (void)setDefaults:(id)arg1;
- (void)setDestinationAsAccepted:(id)arg1;
- (void)setDestinations:(id)arg1;
- (void)setShouldObserveAllowlistDefaultChanges:(bool)arg1;
- (bool)shouldObserveAllowlistDefaultChanges;
- (long long)stateForContact:(id)arg1;

@end
