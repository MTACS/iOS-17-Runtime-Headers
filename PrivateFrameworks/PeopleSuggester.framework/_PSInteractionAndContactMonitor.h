
@interface _PSInteractionAndContactMonitor : NSObject <CNChangeHistoryEventVisitor> {
    NSData * _changeHistoryToken;
    struct __CFSet { } * _contactIdsInContactStore;
    NSSet * _contactIdsSeen;
    CNContactStore * _contactStore;
    NSMutableOrderedSet * _contactStoreEnumerationCache;
    struct __CFSet { } * _historyChangesQueuedToAdd;
    NSMutableOrderedSet * _historyChangesQueuedToAddToEnumerationCache;
    struct __CFSet { } * _historyChangesQueuedToDelete;
    _CDInteractionStore * _interactionStore;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    id /* block */  _processContactChanges;
}

@property (nonatomic, copy) NSSet *contactIdsSeen;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _CDInteractionStore *interactionStore;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)contactIdIsInContactStore:(id)arg1;
- (id)contactIdsSeen;
- (id)contactStore;
- (void)dealloc;
- (void)enumerateContactStoreWithBlock:(id /* block */)arg1;
- (void)fetchAllContactIdsFromContactStore;
- (void)fetchChangedContactIdsFromContactStore;
- (id)initWithInteractionStore:(id)arg1 contactStore:(id)arg2;
- (id)interactionStore;
- (void)notifyWhenContactAddedToInteractionStore:(id)arg1;
- (void)notifyWhenContactStoreChanged;
- (void)populateContactIdCachesWithMessageCache:(id)arg1 shareCache:(id)arg2;
- (void)setContactIdsSeen:(id)arg1;
- (void)visitAddContactEvent:(id)arg1;
- (void)visitDeleteContactEvent:(id)arg1;
- (void)visitDropEverythingEvent:(id)arg1;
- (void)visitUpdateContactEvent:(id)arg1;

@end
