
@interface _PSContactCache : NSObject <CNChangeHistoryEventVisitor> {
    _PASLock * _cachedContactForHandle;
    _PASLock * _cachedFaceTimeableHandleForContactIdentifier;
    NSData * _changeHistoryToken;
    CNContactStore * _contactStore;
    NSString * _faceTimeServiceName;
    IDSIDQueryController * _idsQueryController;
    <NSObject> * _notificationCenterToken;
    NSObject<OS_dispatch_queue> * _notificationQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_getCachedContactForHandle:(id)arg1;
- (id)_getCachedFaceTimeableHandleForContactIdentifier:(id)arg1;
- (void)_purge;
- (void)_removeAllHandlesForContactIdentifier:(id)arg1;
- (void)_setContact:(id)arg1;
- (void)_setContact:(id)arg1 forHandle:(id)arg2;
- (void)_setLikelyFaceTimeHandle:(id)arg1 forContactIdentifier:(id)arg2;
- (id)contactKeysToFetch;
- (void)dealloc;
- (id)fetchMeContact;
- (id)getContactForHandle:(id)arg1 handleType:(long long)arg2;
- (long long)getFaceTimeIDSStatusForHandle:(id)arg1 contactType:(unsigned long long)arg2;
- (id)getFaceTimeableHandleForContact:(id)arg1 interactionStore:(id)arg2 seedRecipientHandle:(id)arg3;
- (id)getMeContact;
- (id)init;
- (void)syncChangeHistory;
- (void)visitAddContactEvent:(id)arg1;
- (void)visitDeleteContactEvent:(id)arg1;
- (void)visitDropEverythingEvent:(id)arg1;
- (void)visitUpdateContactEvent:(id)arg1;

@end
