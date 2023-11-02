
@interface IDSFirewall : NSObject {
    NSSet * _impactedServiceIdentifiers;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _service;
}

@property (nonatomic, readonly) NSSet *impactedServiceIdentifiers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSString *service;

- (void).cxx_destruct;
- (id)_removeInvalidEntries:(id)arg1;
- (void)addEntries:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)currentDonatedEntries:(id /* block */)arg1;
- (void)currentEntries:(id /* block */)arg1;
- (id)description;
- (void)donateEntries:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)impactedServiceIdentifiers;
- (id)initWithService:(id)arg1 queue:(id)arg2;
- (void)populateImpactedServices:(id /* block */)arg1;
- (id)queue;
- (void)recentlyBlockedEntries:(id /* block */)arg1;
- (void)removeAllDonatedEntries:(id /* block */)arg1;
- (void)removeAllEntries:(id /* block */)arg1;
- (void)removeDonatedEntries:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)removeEntries:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)replaceAllEntriesWithEntries:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)replaceDonatedEntriesWithEntries:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)replaceEntries:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)service;
- (void)setQueue:(id)arg1;
- (void)setService:(id)arg1;

@end
