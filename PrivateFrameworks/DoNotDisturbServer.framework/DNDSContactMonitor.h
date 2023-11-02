
@interface DNDSContactMonitor : NSObject <DNDSContactMonitoring> {
    <DNDSContactProviding> * _contactProvider;
    CNContactStore * _contactStore;
    NSObject<OS_dispatch_queue> * _fetchQueue;
    NSHashTable * _listeners;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_contactStoreChanged:(id)arg1;
- (id)_contactsWithCNContacts:(id)arg1;
- (bool)_fetchContactHistoryWithToken:(id)arg1 monitoredContacts:(id)arg2 handler:(id /* block */)arg3;
- (void)_fetchContactsForMonitoredContacts:(id)arg1 handler:(id /* block */)arg2;
- (void)_fetchUpdatesWithContactHistoryToken:(id)arg1 monitoredContacts:(id)arg2 handler:(id /* block */)arg3;
- (id)_lock_listenersByContactHistoryToken;
- (id)_lock_monitoredContactsByContactHistoryToken;
- (void)_queue_fetchUpdatesWithContactHistoryToken:(id)arg1 monitoredContacts:(id)arg2 handler:(id /* block */)arg3;
- (void)_updateContactsWithIdentifiers;
- (void)_updateContactsWithoutIdentifiers;
- (void)addListener:(id)arg1;
- (id)initWithContactStore:(id)arg1 contactProvider:(id)arg2;
- (void)removeListener:(id)arg1;

@end
