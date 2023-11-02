
@interface _DKContactsPrivacyMaintainer : NSObject {
    _PASSimpleCoalescingTimer * _coalescingContactChangeTimer;
    <_DKKnowledgeQuerying> * _knowledgeStore;
    <NSObject> * _notificationCenterToken;
    int  _notifyToken;
    _CDSpotlightItemRecorder * _spotlightRecorder;
    NSUserDefaults * _userDefaults;
}

- (void).cxx_destruct;
- (void)_deleteIntentsRelatedToContactIdentifiers:(id)arg1;
- (void)_unregisterContactDeletionNotifications;
- (void)cleanupPendingDeletedContacts;
- (void)dealloc;
- (void)handleContactDeletionNotification;
- (void)handleRecentlyDeletedContactsWithLimit:(unsigned long long)arg1;
- (id)initWithKnowledgeStore:(id)arg1 spotlightRecorder:(id)arg2;
- (void)registerContactDeletionNotifications;
- (void)scheduleIntentsPruningXPCActivity;

@end
