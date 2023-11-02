
@interface ASContactsManager : NSObject <ASActivitySharingManagerReadyObserver> {
    CNContactStore * _contactStore;
    NSMutableDictionary * _contactsByUUID;
    NSObject<OS_dispatch_queue> * _contactsQueue;
    NSObject<OS_dispatch_group> * _contactsTransactionBarrier;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _persistQueue;
    NSMutableDictionary * _placeholderContactsByUUID;
}

@property (nonatomic, copy) NSSet *contacts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *placeholderContacts;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginTransaction;
- (id)_contactStoreContactWithIdentifier:(id)arg1;
- (void)_endTransaction;
- (id)_findMatchingContactStoreContactForDestinations:(id)arg1;
- (void)_persistContacts:(id)arg1;
- (id)_queue_allContacts;
- (void)_queue_notifyObservers;
- (void)_setContacts:(id)arg1 waitForTransaction:(bool)arg2;
- (void)_waitForTransaction;
- (void)addObserver:(id)arg1;
- (id)contactMatchingCriteriaBlock:(id /* block */)arg1;
- (id)contactWithDestinations:(id)arg1;
- (id)contactWithUUID:(id)arg1;
- (id)contacts;
- (id)createContactWithDestinations:(id)arg1;
- (id)initWithIsWatch:(bool)arg1;
- (void)loadCachedContacts;
- (id)placeholderContactWithUUID:(id)arg1;
- (id)placeholderContacts;
- (void)removeAllPlaceholderContacts;
- (void)removeObserver:(id)arg1;
- (void)removePlaceholderContactWithToken:(id)arg1;
- (void)saveContact:(id)arg1;
- (id)savePlaceholderContact:(id)arg1;
- (void)setContacts:(id)arg1;
- (void)setContactsUsingTransaction:(id /* block */)arg1;

@end
