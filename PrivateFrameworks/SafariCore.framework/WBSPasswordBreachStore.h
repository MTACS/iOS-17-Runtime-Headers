
@interface WBSPasswordBreachStore : NSObject {
    WBSPersistentPropertyListStore * _store;
}

@property (nonatomic, retain) NSDate *lastSessionCompletionDate;
@property (nonatomic, retain) NSDictionary *queuedPasswordBagManagerState;
@property (nonatomic) unsigned long long rampIdentifier;
@property (nonatomic, retain) NSArray *recentlyBreachedPersistentIdentifiers;
@property (nonatomic, retain) NSArray *resultRecords;

+ (id)_createPersistentIdentifierCanary;
+ (bool)_readAndValidatePersistentIdentifierCanaryWithPersistentIdentifier:(id)arg1 expectedValue:(id)arg2;

- (void).cxx_destruct;
- (id)initWithBackingStoreURL:(id)arg1;
- (id)lastSessionCompletionDate;
- (id)queuedPasswordBagManagerState;
- (unsigned long long)rampIdentifier;
- (id)recentlyBreachedPersistentIdentifiers;
- (id)resultRecords;
- (void)saveAndCloseStoreSynchronously;
- (void)saveStoreSynchronously;
- (void)setLastSessionCompletionDate:(id)arg1;
- (void)setQueuedPasswordBagManagerState:(id)arg1;
- (void)setRampIdentifier:(unsigned long long)arg1;
- (void)setRecentlyBreachedPersistentIdentifiers:(id)arg1;
- (void)setResultRecords:(id)arg1;

@end
