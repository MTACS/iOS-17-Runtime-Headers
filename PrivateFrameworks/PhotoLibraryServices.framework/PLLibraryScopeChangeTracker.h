
@interface PLLibraryScopeChangeTracker : NSObject {
    NSManagedObjectContext * _context;
    <PLLibraryScopeChangeTrackerDelegate> * _delegate;
    NSDictionary * _entityNameToAllowedPropertyDescriptionMap;
    NSPersistentHistoryToken * _lastKnownToken;
}

@property (nonatomic) <PLLibraryScopeChangeTrackerDelegate> *delegate;
@property (readonly) bool hasChangeTrackerToken;

+ (id)archivedDataWithToken:(id)arg1;
+ (id)unarchiveTokentWithData:(id)arg1;

- (void).cxx_destruct;
- (id)_allowedPropertyDescriptionsForEntityName:(id)arg1;
- (id)_transactionIteratorSinceToken:(id)arg1;
- (void)clearToken;
- (id)currentToken;
- (id)delegate;
- (id)fetchObjectsNeedingEvaluation;
- (id)fetchResultsSincePersistentHistoryToken:(id)arg1;
- (bool)hasChangeTrackerToken;
- (id)initWithManagedObjectContext:(id)arg1;
- (id)lastKnownTokenFromDisk;
- (void)saveLastKnownChangeTrackerTokenToDisk;
- (void)setDelegate:(id)arg1;
- (bool)start;
- (void)stop;
- (void)updateLastKnownTokenToResult:(id)arg1;

@end
